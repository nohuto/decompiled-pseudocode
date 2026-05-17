/*
 * XREFs of TpSetPoolThreadCpuSets @ 0x180112060
 * Callers:
 *     TpAllocPoolInternal @ 0x180061844 (TpAllocPoolInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlNumberOfSetBits @ 0x180076FB0 (RtlNumberOfSetBits.c)
 *     NtSetInformationWorkerFactory @ 0x1800A0480 (NtSetInformationWorkerFactory.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180112110 (TppAdjustRunningThreadGoalWithLock.c)
 */

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // r14d
  volatile signed __int64 *v7; // rsi
  int v8; // r14d
  int v9; // ebp
  int v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v4 = a3;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v7 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive(a1 + 72, a2, a3, a4);
  v8 = 8 * v4;
  v9 = NtSetInformationWorkerFactory();
  if ( v9 >= 0 )
  {
    v11 = v8;
    v12 = a2;
    *(_DWORD *)(a1 + 440) = RtlNumberOfSetBits((unsigned int *)&v11);
    TppAdjustRunningThreadGoalWithLock(a1);
  }
  RtlReleaseSRWLockExclusive(v7);
  return (unsigned int)v9;
}
