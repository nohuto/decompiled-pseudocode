/*
 * XREFs of PopBatteryQueueWork @ 0x14039AABC
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403A7AC0 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403A7C70 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x140573E10 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 *     PopSpoilBatteryEstimate @ 0x140781608 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x14078E478 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryAdd @ 0x1408ECDF0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408ED620 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1408EDE50 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
