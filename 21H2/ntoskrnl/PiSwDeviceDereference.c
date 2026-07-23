/*
 * XREFs of PiSwDeviceDereference @ 0x14074D154
 * Callers:
 *     PiSwProcessRemove @ 0x140732D98 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140732E54 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140732EEC (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x140734BB0 (PiSwCloseDevice.c)
 *     PiSwDispatch @ 0x14074DB50 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwDeviceFree @ 0x140734150 (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)P);
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
