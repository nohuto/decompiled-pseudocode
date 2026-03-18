/*
 * XREFs of PopPowerAggregatorLockAcquire @ 0x1408F0CF4
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408F084C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408F0FF0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopPowerAggregatorLockAcquire()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
