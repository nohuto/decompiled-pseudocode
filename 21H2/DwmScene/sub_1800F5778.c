/*
 * XREFs of sub_1800F5778 @ 0x1800F5778
 * Callers:
 *     sub_180092714 @ 0x180092714 (sub_180092714.c)
 *     sub_1800A6BF4 @ 0x1800A6BF4 (sub_1800A6BF4.c)
 *     sub_1800C72A0 @ 0x1800C72A0 (sub_1800C72A0.c)
 * Callees:
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 */

__int64 __fastcall sub_1800F5778(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800F2990(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F3D78(a1, v5, a3);
}
