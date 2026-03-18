/*
 * XREFs of PoNotifyPnpActionQueueEvent @ 0x140570F0C
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x1403774A4 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 */

__int64 __fastcall PoNotifyPnpActionQueueEvent(unsigned int a1, unsigned int a2)
{
  return PopDirectedDripsNotifyPnpActionQueueEvent(a1, a2);
}
