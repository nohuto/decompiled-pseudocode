/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140A3CA70
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1402676BC (KiInitializeTimer2.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x14077BFAC (PopPowerAggregatorCachePoPolicy.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
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
    qword_140C22898 = 0LL;
    PopPowerAggregatorLock = 0LL;
    memset(&PopPowerAggregatorContext, 0, 0x1368uLL);
    DWORD2(xmmword_140C21538) = 1;
    qword_140C22870 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140C21568) = 0;
    stru_140C21590.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140C22878 = 0LL;
    qword_140C22860 = 0LL;
    stru_140C21590.Parameter = 0LL;
    stru_140C21590.List.Flink = 0LL;
    word_140C215B2 = 0;
    KiInitializeTimer2((__int64)&unk_140C215B0, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    result = &qword_140C21640;
    word_140C21638 = 0;
    qword_140C21648 = (__int64)&qword_140C21640;
    qword_140C21640 = (__int64)&qword_140C21640;
    byte_140C2163A = 6;
    dword_140C2163C = 0;
  }
  return result;
}
