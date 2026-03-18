/*
 * XREFs of PopPowerAggregatorLockRelease @ 0x1408EB100
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EAC3C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EB3E0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 */

void PopPowerAggregatorLockRelease()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
