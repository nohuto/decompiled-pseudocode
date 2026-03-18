/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140A3CE18
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1402C06EC (KiInitializeTimer2.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x140779B9C (PopPowerAggregatorCachePoPolicy.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
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
    qword_140C21758 = 0LL;
    PopPowerAggregatorLock = 0LL;
    memset(&PopPowerAggregatorContext, 0, 0x1368uLL);
    DWORD2(xmmword_140C21778) = 1;
    qword_140C22AB0 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140C217A8) = 0;
    stru_140C217D0.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140C22AB8 = 0LL;
    qword_140C22AA0 = 0LL;
    stru_140C217D0.Parameter = 0LL;
    stru_140C217D0.List.Flink = 0LL;
    word_140C217F2 = 0;
    KiInitializeTimer2((__int64)&unk_140C217F0, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    result = &qword_140C21880;
    word_140C21878 = 0;
    qword_140C21888 = (__int64)&qword_140C21880;
    qword_140C21880 = (__int64)&qword_140C21880;
    byte_140C2187A = 6;
    dword_140C2187C = 0;
  }
  return result;
}
