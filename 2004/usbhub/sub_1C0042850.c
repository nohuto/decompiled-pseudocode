/*
 * XREFs of sub_1C0042850 @ 0x1C0042850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

NTSTATUS __fastcall sub_1C0042850(__int64 a1, IRP *a2)
{
  __int64 v3; // r10
  PDEVICE_OBJECT *v4; // rax

  sub_1C000FD80(a1, 2, 1718842723, 0LL, (__int64)a2);
  v4 = (PDEVICE_OBJECT *)sub_1C000F050(v3);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
