/*
 * XREFs of ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B6020
 * Callers:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x1405AB604 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  int v2; // r11d
  char v3; // r9
  unsigned __int64 v4; // rax
  int InterruptCount; // r10d
  __int64 v7; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v3 = 1;
    v4 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v2 = v4;
  }
  else
  {
    v3 = 0;
    InterruptCount = 0;
  }
  if ( _InterlockedCompareExchange(a1, 0x80000000, 0) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( v3 )
  {
    v7 = __rdtsc();
    PerfLogSpinLockAcquire((__int64)a1, v7, v7 - v2, 0, InterruptCount, 3);
  }
  return 1LL;
}
