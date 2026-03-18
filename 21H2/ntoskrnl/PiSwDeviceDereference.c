/*
 * XREFs of PiSwDeviceDereference @ 0x140661C18
 * Callers:
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwDispatch @ 0x140764DB0 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationRemove @ 0x14095336C (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x14095341C (PiSwCloseDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x140953CF8 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140661C4C (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
