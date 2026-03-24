/*
 * XREFs of HalpPassIrpFromFdoToPdo @ 0x1403A729C
 * Callers:
 *     HalpDispatchPnp @ 0x140764F80 (HalpDispatchPnp.c)
 *     HalpDispatchWmi @ 0x1407D5320 (HalpDispatchWmi.c)
 *     HalpDispatchPower @ 0x1409981A0 (HalpDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x1403519C0 (IofCallDriver.c)
 */

NTSTATUS __fastcall HalpPassIrpFromFdoToPdo(__int64 a1, IRP *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 32), a2);
}
