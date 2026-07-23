/*
 * XREFs of ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B60AC
 * Callers:
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1405B5D30 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x1405AB604 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  int v2; // ebx
  char v3; // r9
  unsigned __int64 v4; // rax
  int InterruptCount; // r11d
  signed __int32 v6; // ett
  __int64 v8; // rax

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
  _m_prefetchw(a1);
  v6 = *a1 & 0x7FFFFFFF;
  if ( v6 != _InterlockedCompareExchange(a1, v6 + 1, v6) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( v3 )
  {
    v8 = __rdtsc();
    PerfLogSpinLockAcquire((__int64)a1, v8, v8 - v2, 0, InterruptCount, 2);
  }
  return 1LL;
}
