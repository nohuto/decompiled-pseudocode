/*
 * XREFs of sub_1800F5E58 @ 0x1800F5E58
 * Callers:
 *     sub_180092E1C @ 0x180092E1C (sub_180092E1C.c)
 *     sub_1800A6CA0 @ 0x1800A6CA0 (sub_1800A6CA0.c)
 *     sub_1800C6240 @ 0x1800C6240 (sub_1800C6240.c)
 *     sub_1800C7408 @ 0x1800C7408 (sub_1800C7408.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 *     sub_1800EF3B0 @ 0x1800EF3B0 (sub_1800EF3B0.c)
 * Callees:
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 */

__int64 __fastcall sub_1800F5E58(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2990(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F3E30(a1, v5, a3);
}
