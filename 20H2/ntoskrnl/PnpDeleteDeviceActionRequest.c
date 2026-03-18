/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x14036F1B0
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036EB50 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x140380AA4 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14050CD00 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x14071F730 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14072B200 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
