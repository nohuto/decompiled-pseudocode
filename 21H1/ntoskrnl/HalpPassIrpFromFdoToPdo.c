/*
 * XREFs of HalpPassIrpFromFdoToPdo @ 0x1403A3E5C
 * Callers:
 *     HalpDispatchPnp @ 0x14074EA40 (HalpDispatchPnp.c)
 *     HalpDispatchWmi @ 0x1407BF1A0 (HalpDispatchWmi.c)
 *     HalpDispatchPower @ 0x140993810 (HalpDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 */

NTSTATUS __fastcall HalpPassIrpFromFdoToPdo(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 32), a2);
}
