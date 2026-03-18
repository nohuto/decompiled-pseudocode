/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140A42D10
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14035682C (KiInitializeTimer2.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x14078A5AC (PopPowerAggregatorCachePoPolicy.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

__int64 *__fastcall PopPowerAggregatorInitialize(int a1)
{
  __int64 *result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      PopAcquirePolicyLock();
      PopPowerAggregatorCachePoPolicy();
      return (__int64 *)PopReleasePolicyLock();
    }
  }
  else
  {
    qword_140C21628 = 0LL;
    PopPowerAggregatorLock = 0LL;
    memset(&PopPowerAggregatorContext, 0, 0x1368uLL);
    DWORD2(xmmword_140C21658) = 1;
    qword_140C22990 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140C21688) = 0;
    stru_140C216B0.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140C22998 = 0LL;
    qword_140C22980 = 0LL;
    stru_140C216B0.Parameter = 0LL;
    stru_140C216B0.List.Flink = 0LL;
    word_140C216D2 = 0;
    KiInitializeTimer2((__int64)&unk_140C216D0, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    result = &qword_140C21760;
    word_140C21758 = 0;
    qword_140C21768 = (__int64)&qword_140C21760;
    qword_140C21760 = (__int64)&qword_140C21760;
    byte_140C2175A = 6;
    dword_140C2175C = 0;
  }
  return result;
}
