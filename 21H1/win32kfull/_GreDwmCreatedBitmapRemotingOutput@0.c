/*
 * XREFs of _GreDwmCreatedBitmapRemotingOutput@0 @ 0xD41BC
 * Callers:
 *     _NtGdiDwmCreatedBitmapRemotingOutput@0 @ 0xD41B2 (_NtGdiDwmCreatedBitmapRemotingOutput@0.c)
 * Callees:
 *     _DrvModeChangeCompleteNotify@0 @ 0xD4244 (_DrvModeChangeCompleteNotify@0.c)
 */

int __stdcall GreDwmCreatedBitmapRemotingOutput()
{
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
  GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
  if ( UserIsCurrentProcessDwm() && UserIsRemoteConnection() )
    DrvModeChangeCompleteNotify();
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemDynamicModeChange);
  return GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
}
