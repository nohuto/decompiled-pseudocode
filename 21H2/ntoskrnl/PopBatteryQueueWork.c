/*
 * XREFs of PopBatteryQueueWork @ 0x14039AC0C
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403A7C10 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403A7DC0 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x140574050 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 *     PopSpoilBatteryEstimate @ 0x1407817C8 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x14078E638 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryAdd @ 0x1408ECF50 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408ED780 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1408EDFB0 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
