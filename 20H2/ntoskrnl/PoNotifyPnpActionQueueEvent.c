/*
 * XREFs of PoNotifyPnpActionQueueEvent @ 0x140574F8C
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036EB50 (PnpDeviceActionWorker.c)
 * Callees:
 *     PopDirectedDripsNotifyPnpActionQueueEvent @ 0x14037A154 (PopDirectedDripsNotifyPnpActionQueueEvent.c)
 */

__int64 __fastcall PoNotifyPnpActionQueueEvent(unsigned int a1, unsigned int a2)
{
  return PopDirectedDripsNotifyPnpActionQueueEvent(a1, a2);
}
