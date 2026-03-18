/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x14025A350
 * Callers:
 *     PsQueryProcessEnergyValues @ 0x14060F730 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextUpdateComponentPower @ 0x14065D1C8 (PoEnergyContextUpdateComponentPower.c)
 *     PoEnergyContextCleanup @ 0x14066031C (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x1406BDE14 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
