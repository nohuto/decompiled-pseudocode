/*
 * XREFs of sub_1C0042FD0 @ 0x1C0042FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0043ED8 @ 0x1C0043ED8 (sub_1C0043ED8.c)
 */

NTSTATUS __fastcall sub_1C0042FD0(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  _DWORD *v5; // rax

  sub_1C000FD80(a1, 2, 1716737104, 0LL, (__int64)a2);
  v4 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  v5 = sub_1C000F050(a1);
  sub_1C0043ED8(v5 + 346, 5LL);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
