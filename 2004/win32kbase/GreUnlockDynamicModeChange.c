/*
 * XREFs of GreUnlockDynamicModeChange @ 0x1C005C1D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDynamicModeChange(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v4);
  }
  return result;
}
