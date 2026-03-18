/*
 * XREFs of PopPowerAggregatorStartNextSession @ 0x140760E04
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140760C90 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140760D50 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408E9870 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408E9A90 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EA160 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopSleepstudyStartNextSession @ 0x140760E48 (PopSleepstudyStartNextSession.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorStartNextSession(unsigned int a1, unsigned int a2)
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(a1, a2);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
