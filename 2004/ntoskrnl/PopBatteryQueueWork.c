/*
 * XREFs of PopBatteryQueueWork @ 0x140396C68
 * Callers:
 *     PopBatteryWakeDpc @ 0x1403A4E00 (PopBatteryWakeDpc.c)
 *     PopBatteryRefreshStatus @ 0x1403A4FB0 (PopBatteryRefreshStatus.c)
 *     PopBatteryIrpComplete @ 0x14056E9D0 (PopBatteryIrpComplete.c)
 *     PopSpoilBatteryEstimate @ 0x14076C16C (PopSpoilBatteryEstimate.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x14077C0A8 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryAdd @ 0x1408E99E0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408EA210 (PopBatteryRemove.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x1408EAA40 (PopUsbErrorWNFNotificationCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
