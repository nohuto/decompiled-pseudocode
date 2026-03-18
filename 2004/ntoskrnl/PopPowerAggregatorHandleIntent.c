/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1408EAEF8
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408DFD0C (PopDirectedDripsInitializeBroadcast.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408ED814 (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140763854 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v6 = PopPowerAggregatorHandleIntentUnsafe((_QWORD *)a1, a2, a3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v6;
}
