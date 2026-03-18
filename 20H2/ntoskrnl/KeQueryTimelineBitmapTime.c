/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x140208A60
 * Callers:
 *     PsQueryProcessEnergyValues @ 0x1405F0910 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextUpdateComponentPower @ 0x14062E7B4 (PoEnergyContextUpdateComponentPower.c)
 *     PoEnergyContextCleanup @ 0x14066122C (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x1406B5E14 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
