/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1408E9C78
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408DEAAC (PopDirectedDripsInitializeBroadcast.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408EC594 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140761F74 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v6 = PopPowerAggregatorHandleIntentUnsafe((_QWORD *)a1, a2, a3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v6;
}
