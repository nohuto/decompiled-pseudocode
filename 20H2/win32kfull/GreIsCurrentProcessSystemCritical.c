/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C00E8AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsCurrentProcessSystemCritical()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  BOOL v3; // ebx

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v3 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess(v1, v0, v2);
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v3;
}
