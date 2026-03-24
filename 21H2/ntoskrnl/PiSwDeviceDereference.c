/*
 * XREFs of PiSwDeviceDereference @ 0x14074CF94
 * Callers:
 *     PiSwProcessRemove @ 0x140732BD8 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140732C94 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140732D2C (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x1407349F0 (PiSwCloseDevice.c)
 *     PiSwDispatch @ 0x14074D990 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DBB8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140733F90 (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)P);
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
