/*
 * XREFs of ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SGJPAX_K@Z @ 0xA7832
 * Callers:
 *     ?vUnmapFileFD@@YGXPAU_FILEVIEW@@E@Z @ 0x8CCEA (-vUnmapFileFD@@YGXPAU_FILEVIEW@@E@Z.c)
 *     _vUnmapRemoteFonts@4 @ 0x1E9844 (_vUnmapRemoteFonts@4.c)
 * Callees:
 *     <none>
 */

int __userpurge UmfdHostLifeTimeManager::MmUnmapViewOfSection@<eax>(int a1@<ecx>, void *a2, unsigned __int64 a3)
{
  int v4; // esi

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready
    && __PAIR64__(a3, (unsigned int)a2) == UmfdHostLifeTimeManager::s_UmfdHostGenerationId )
  {
    v4 = MmUnmapViewOfSection(UmfdHostLifeTimeManager::s_UmfdHostProcess, a1);
  }
  else
  {
    v4 = -1073741823;
  }
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v4;
}
