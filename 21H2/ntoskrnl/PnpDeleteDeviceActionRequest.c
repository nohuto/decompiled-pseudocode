/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x14037ECC4
 * Callers:
 *     PnpRemoveDeviceActionRequests @ 0x14037EB2C (PnpRemoveDeviceActionRequests.c)
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14050EA70 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x14062E740 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14072F3E4 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
