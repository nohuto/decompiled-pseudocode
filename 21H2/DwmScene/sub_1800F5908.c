/*
 * XREFs of sub_1800F5908 @ 0x1800F5908
 * Callers:
 *     sub_180092AA8 @ 0x180092AA8 (sub_180092AA8.c)
 *     sub_1800A6C0C @ 0x1800A6C0C (sub_1800A6C0C.c)
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C6B94 @ 0x1800C6B94 (sub_1800C6B94.c)
 *     sub_1800C73C8 @ 0x1800C73C8 (sub_1800C73C8.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 *     sub_180110800 @ 0x180110800 (sub_180110800.c)
 * Callees:
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 */

__int64 __fastcall sub_1800F5908(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_1800F2990(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F593C(a1, v3);
}
