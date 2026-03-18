/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x140296BD0
 * Callers:
 *     PoEnergyContextCleanup @ 0x14061ABFC (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x14064BCCC (PopEtEnergyTrackerQuery.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140659C94 (PoEnergyContextUpdateComponentPower.c)
 *     PsQueryProcessEnergyValues @ 0x1406878B0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
