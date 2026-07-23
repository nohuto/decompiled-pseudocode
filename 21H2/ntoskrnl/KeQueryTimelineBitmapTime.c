/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1402AA050
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1405EE5A8 (PopEtEnergyTrackerQuery.c)
 *     PoEnergyContextCleanup @ 0x14067D90C (PoEnergyContextCleanup.c)
 *     PsQueryProcessEnergyValues @ 0x1406D8A30 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406F499C (PoEnergyContextUpdateComponentPower.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
