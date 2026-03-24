/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x140205720
 * Callers:
 *     PsQueryProcessEnergyValues @ 0x1405E92D0 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextUpdateComponentPower @ 0x14060526C (PoEnergyContextUpdateComponentPower.c)
 *     PoEnergyContextCleanup @ 0x140613CAC (PoEnergyContextCleanup.c)
 *     PopEtEnergyTrackerQuery @ 0x14068E738 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
