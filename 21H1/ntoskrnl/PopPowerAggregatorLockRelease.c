/*
 * XREFs of PopPowerAggregatorLockRelease @ 0x1408E9E80
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408E99BC (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EA160 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 */

void PopPowerAggregatorLockRelease()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
