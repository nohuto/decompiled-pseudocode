/*
 * XREFs of PopPowerAggregatorStartNextSession @ 0x140770CF4
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140770B80 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140770C40 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408F0700 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408F0920 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408F0FF0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopSleepstudyStartNextSession @ 0x140770D38 (PopSleepstudyStartNextSession.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorStartNextSession(unsigned int a1, unsigned int a2)
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(a1, a2);
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
