/*
 * XREFs of DxEngUnlockShareSem @ 0x1C014BCE0
 * Callers:
 *     ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C014BC80 (-W32kReleaseDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall DxEngUnlockShareSem(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx

  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v3);
  }
  return 1LL;
}
