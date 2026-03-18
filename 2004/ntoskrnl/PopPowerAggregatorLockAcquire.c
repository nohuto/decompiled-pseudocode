/*
 * XREFs of PopPowerAggregatorLockAcquire @ 0x1408EB0E4
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EAC3C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EB3E0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopPowerAggregatorLockAcquire()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
