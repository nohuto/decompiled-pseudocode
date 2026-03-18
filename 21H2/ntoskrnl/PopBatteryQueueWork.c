/*
 * XREFs of PopBatteryQueueWork @ 0x14036972C
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403B6C90 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403B6E30 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x1405D47C0 (PopBatteryIrpComplete.c)
 *     PopBatteryUpdateCurrentState @ 0x1407ED964 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 *     PopSpoilBatteryEstimate @ 0x14080D164 (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x140994860 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140995040 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x140995780 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
