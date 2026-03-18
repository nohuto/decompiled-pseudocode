/*
 * XREFs of PopBatteryQueueWork @ 0x14039A64C
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403A7200 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403A73B0 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x140572400 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     PopSpoilBatteryEstimate @ 0x14077D828 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x14078A6A8 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryAdd @ 0x1408EF5F0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408EFE20 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1408F0650 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
