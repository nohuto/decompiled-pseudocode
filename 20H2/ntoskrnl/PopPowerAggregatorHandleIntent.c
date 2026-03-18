/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1408F0B08
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E5B4C (PopDirectedDripsInitializeBroadcast.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408F3424 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140771E64 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v6 = PopPowerAggregatorHandleIntentUnsafe((_QWORD *)a1, a2, a3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v6;
}
