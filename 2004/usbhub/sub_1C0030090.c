/*
 * XREFs of sub_1C0030090 @ 0x1C0030090
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 */

__int64 __fastcall sub_1C0030090(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v5; // rax
  unsigned int v6; // ebx

  v5 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v6 = IofCallDriver(v5[151], a3);
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return v6;
}
