/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x14036C510
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14037E2B4 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x140508D80 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1407103A0 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14071B3E4 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
