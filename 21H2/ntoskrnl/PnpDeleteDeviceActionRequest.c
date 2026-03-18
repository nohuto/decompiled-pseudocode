/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x1402DDABC
 * Callers:
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403A6D44 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14056205C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiQueueDeviceRequest @ 0x14065F5D4 (PiQueueDeviceRequest.c)
 *     PiControlGetSetDeviceStatus @ 0x1407793D0 (PiControlGetSetDeviceStatus.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
