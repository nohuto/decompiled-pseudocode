/*
 * XREFs of PopPowerAggregatorLockAcquire @ 0x1408E9E64
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408E99BC (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EA160 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopPowerAggregatorLockAcquire()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
