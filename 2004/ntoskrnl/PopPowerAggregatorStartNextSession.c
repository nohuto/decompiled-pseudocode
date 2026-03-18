/*
 * XREFs of PopPowerAggregatorStartNextSession @ 0x1407626E4
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140762570 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140762630 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EAAF0 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408EAD10 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EB3E0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopSleepstudyStartNextSession @ 0x140762728 (PopSleepstudyStartNextSession.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorStartNextSession(unsigned int a1, unsigned int a2)
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(a1, a2);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
