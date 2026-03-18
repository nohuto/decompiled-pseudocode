/*
 * XREFs of PopPowerAggregatorWorker @ 0x140772170
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407721F8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140772384 (PopPowerAggregatorDiagTraceEvent.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C229A0 = (__int64)KeGetCurrentThread();
  while ( (dword_140C21654 & 2) != 0 )
  {
    dword_140C21654 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C229A0 = 0LL;
  dword_140C21654 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
