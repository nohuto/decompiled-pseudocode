/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x14036E520
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14037ED74 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405093D0 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A5A70 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14071D364 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
