/*
 * XREFs of PopNotifyCsStateExited @ 0x1408EB700
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140762494 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1407624F0 (PopPowerAggregatorScheduleWorker.c)
 */

void PopNotifyCsStateExited()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_PDC_PHASES_EXITED, 0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
