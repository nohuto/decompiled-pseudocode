/*
 * XREFs of sub_1C0029E7C @ 0x1C0029E7C
 * Callers:
 *     sub_1C0014DE0 @ 0x1C0014DE0 (sub_1C0014DE0.c)
 *     sub_1C0015970 @ 0x1C0015970 (sub_1C0015970.c)
 *     sub_1C001C2D0 @ 0x1C001C2D0 (sub_1C001C2D0.c)
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 *     sub_1C0030C08 @ 0x1C0030C08 (sub_1C0030C08.c)
 *     sub_1C0030D50 @ 0x1C0030D50 (sub_1C0030D50.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

NTSTATUS __fastcall sub_1C0029E7C(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
