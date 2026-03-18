/*
 * XREFs of _GreIsCurrentProcessSystemCritical@0 @ 0x8D3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall GreIsCurrentProcessSystemCritical()
{
  BOOL v0; // esi

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v0 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess();
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v0;
}
