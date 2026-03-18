/*
 * XREFs of _DxgkEngReleaseStableVisRgn@0 @ 0xBB2DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DxgkEngReleaseStableVisRgn()
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
  GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
  GreReleaseSemaphoreInternal(_ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return UserLeaveUserCritSec();
}
