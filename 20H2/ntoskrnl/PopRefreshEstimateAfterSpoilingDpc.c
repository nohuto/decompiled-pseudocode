/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403A73B0
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x14039A64C (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
