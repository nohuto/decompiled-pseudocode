/*
 * XREFs of PiSwDeviceDereference @ 0x140754648
 * Callers:
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x14071EB94 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x14071EC2C (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x1407209F0 (PiSwCloseDevice.c)
 *     PiSwDispatch @ 0x140753730 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwDeviceFree @ 0x14071FF8C (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)P);
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
