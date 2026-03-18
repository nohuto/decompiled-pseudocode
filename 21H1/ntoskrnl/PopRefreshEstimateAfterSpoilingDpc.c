/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1403A4830
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x140397AC8 (PopBatteryQueueWork.c)
 */

void PopRefreshEstimateAfterSpoilingDpc()
{
  PopBatteryQueueWork(1u);
}
