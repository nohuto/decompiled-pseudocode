/*
 * XREFs of PopPowerAggregatorLockRelease @ 0x1408F0D10
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408F084C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408F0FF0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 */

void PopPowerAggregatorLockRelease()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
