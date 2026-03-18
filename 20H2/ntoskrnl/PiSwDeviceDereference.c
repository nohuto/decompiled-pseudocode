/*
 * XREFs of PiSwDeviceDereference @ 0x14076FC40
 * Callers:
 *     PiSwProcessRemove @ 0x14072E868 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x14072E924 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x14072E9BC (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x1407309C0 (PiSwCloseDevice.c)
 *     PiSwDispatch @ 0x140746A60 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140746C88 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PiSwDeviceFree @ 0x14072FF5C (PiSwDeviceFree.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)P);
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
