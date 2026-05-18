/*
 * XREFs of sub_1800F5830 @ 0x1800F5830
 * Callers:
 *     sub_180092720 @ 0x180092720 (sub_180092720.c)
 *     sub_1800C6240 @ 0x1800C6240 (sub_1800C6240.c)
 * Callees:
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 */

__int64 __fastcall sub_1800F5830(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2990(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F5864(a1, v5, a3);
}
