/*
 * XREFs of sub_1800C72A0 @ 0x1800C72A0
 * Callers:
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 * Callees:
 *     sub_1800B7CC0 @ 0x1800B7CC0 (sub_1800B7CC0.c)
 *     sub_1800C2A78 @ 0x1800C2A78 (sub_1800C2A78.c)
 *     sub_1800F5778 @ 0x1800F5778 (sub_1800F5778.c)
 */

__int64 __fastcall sub_1800C72A0(__int64 a1, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5, _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  __m128 v12[4]; // [rsp+20h] [rbp-48h] BYREF

  *a3 = *sub_1800C2A78(v12, a3, a2);
  *a4 = *sub_1800C2A78(v12, a4, a2);
  *a5 = *sub_1800C2A78(v12, a5, a2);
  sub_1800F5778(*a6);
  v9 = *a6;
  sub_1800B7CC0(v12, a3, a4);
  sub_1800F5778(v9);
  v10 = *a6;
  sub_1800B7CC0(v12, a4, a5);
  return sub_1800F5778(v10);
}
