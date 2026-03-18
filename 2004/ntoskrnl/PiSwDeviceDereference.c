/*
 * XREFs of PiSwDeviceDereference @ 0x140761630
 * Callers:
 *     PiSwProcessRemove @ 0x140720878 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140720934 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1407209CC (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x1407228B0 (PiSwCloseDevice.c)
 *     PiSwDispatch @ 0x1407375D0 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x1407377F8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140721E4C (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)P);
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
