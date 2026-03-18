/*
 * XREFs of PoNotifyPnpActionQueueEvent @ 0x14057155C
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x1403782B4 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 */

__int64 __fastcall PoNotifyPnpActionQueueEvent(unsigned int a1, unsigned int a2)
{
  return PopDirectedDripsNotifyPnpActionQueueEvent(a1, a2);
}
