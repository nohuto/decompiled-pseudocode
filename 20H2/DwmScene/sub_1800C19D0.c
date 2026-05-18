/*
 * XREFs of sub_1800C19D0 @ 0x1800C19D0
 * Callers:
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 * Callees:
 *     sub_1800B23F0 @ 0x1800B23F0 (sub_1800B23F0.c)
 *     sub_1800BD1A8 @ 0x1800BD1A8 (sub_1800BD1A8.c)
 *     sub_1800EFEA8 @ 0x1800EFEA8 (sub_1800EFEA8.c)
 */

__int64 __fastcall sub_1800C19D0(__int64 a1, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5, _QWORD *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  __m128 v12[4]; // [rsp+20h] [rbp-48h] BYREF

  *a3 = *sub_1800BD1A8(v12, a3, a2);
  *a4 = *sub_1800BD1A8(v12, a4, a2);
  *a5 = *sub_1800BD1A8(v12, a5, a2);
  sub_1800EFEA8(*a6);
  v9 = *a6;
  sub_1800B23F0(v12, a3, a4);
  sub_1800EFEA8(v9);
  v10 = *a6;
  sub_1800B23F0(v12, a4, a5);
  return sub_1800EFEA8(v10);
}
