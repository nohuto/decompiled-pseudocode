/*
 * XREFs of ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SGJPAXPAPAXKKPAT_LARGE_INTEGER@@PAKW4_SECTION_INHERIT@@KKPA_K@Z @ 0x8C716
 * Callers:
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 *     _cMapRemoteFonts@16 @ 0x1E949B (_cMapRemoteFonts@16.c)
 * Callees:
 *     <none>
 */

int __userpurge UmfdHostLifeTimeManager::MmMapViewOfSection@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        void *a3,
        void **a4,
        unsigned int a5,
        unsigned int a6,
        union _LARGE_INTEGER *a7,
        unsigned int *a8,
        enum _SECTION_INHERIT a9,
        _QWORD *a10,
        unsigned int a11,
        unsigned __int64 *a12)
{
  int v14; // esi

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v14 = MmMapViewOfSection(a2, UmfdHostLifeTimeManager::s_UmfdHostProcess, a1, 0, a4, a5, a6, 2, 0x400000, 2);
    *a10 = UmfdHostLifeTimeManager::s_UmfdHostGenerationId;
  }
  else
  {
    v14 = -1073741823;
  }
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v14;
}
