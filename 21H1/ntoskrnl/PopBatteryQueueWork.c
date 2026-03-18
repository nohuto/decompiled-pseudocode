/*
 * XREFs of PopBatteryQueueWork @ 0x140397AC8
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403A4680 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1403A4830 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x14056E380 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     PopSpoilBatteryEstimate @ 0x14076D1D8 (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x140779C98 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryAdd @ 0x1408E8760 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408E8F90 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1408E97C0 (PopUsbErrorWNFNotificationCallback.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
