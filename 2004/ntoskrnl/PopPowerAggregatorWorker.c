/*
 * XREFs of PopPowerAggregatorWorker @ 0x140763B60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140763BE8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140763D74 (PopPowerAggregatorDiagTraceEvent.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C22880 = (__int64)KeGetCurrentThread();
  while ( (dword_140C21534 & 2) != 0 )
  {
    dword_140C21534 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C22880 = 0LL;
  dword_140C21534 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
