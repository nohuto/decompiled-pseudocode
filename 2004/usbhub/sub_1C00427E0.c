/*
 * XREFs of sub_1C00427E0 @ 0x1C00427E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

NTSTATUS __fastcall sub_1C00427E0(__int64 a1, IRP *a2)
{
  __int64 v4; // r10

  sub_1C000F050(a1);
  sub_1C000FD80(a1, 2, 1715758438, a2->Tail.Overlay.CurrentStackLocation->MinorFunction, (__int64)a2);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), a2);
}
