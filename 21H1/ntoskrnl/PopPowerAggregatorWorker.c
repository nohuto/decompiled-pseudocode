/*
 * XREFs of PopPowerAggregatorWorker @ 0x140762280
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140762308 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140762494 (PopPowerAggregatorDiagTraceEvent.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C22AC0 = (__int64)KeGetCurrentThread();
  while ( (dword_140C21774 & 2) != 0 )
  {
    dword_140C21774 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C22AC0 = 0LL;
  dword_140C21774 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
