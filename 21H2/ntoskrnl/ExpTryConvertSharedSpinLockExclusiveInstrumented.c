/*
 * XREFs of ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1405B6144
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x1402FCD90 (KiAbEntryGetLockedHeadEntry.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x140381660 (ExTryConvertSharedSpinLockExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     PerfLogSpinLockAcquire @ 0x1405AB604 (PerfLogSpinLockAcquire.c)
 *     PerfLogSpinLockRelease @ 0x1405AB678 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpTryConvertSharedSpinLockExclusiveInstrumented(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // r15d
  char v8; // bp
  unsigned __int64 v9; // rax
  int InterruptCount; // r14d
  __int64 v11; // rdx
  volatile signed __int32 v12; // ecx
  bool v13; // zf
  unsigned __int32 v14; // eax
  int v15; // esi
  __int64 v16; // rax
  int v18; // [rsp+70h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v8 = 1;
    v9 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v5 = v9;
  }
  else
  {
    v8 = 0;
    InterruptCount = 0;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v11 = *(unsigned int *)a1;
  v12 = *a1;
  v18 = 0;
  if ( (v12 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v11 & 0x40000000) == 0 )
      {
        v14 = _InterlockedCompareExchange(a1, v11 | 0x40000000, v11);
        v13 = (_DWORD)v11 == v14;
        v11 = v14;
        if ( !v13 )
          continue;
      }
      KeYieldProcessorEx(&v18, v11, a3, a4);
      v11 = *(unsigned int *)a1;
    }
    while ( (v11 & 0xBFFFFFFF) != 0x80000001 );
  }
  v15 = v18;
  CurrentPrcb->SynchCounters.SpinLockSpinCount += v18;
  ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
  if ( v8 )
  {
    PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
    v16 = __rdtsc();
    PerfLogSpinLockAcquire((__int64)a1, v16, v16 - v5, v15, InterruptCount, 4);
  }
  return 1LL;
}
