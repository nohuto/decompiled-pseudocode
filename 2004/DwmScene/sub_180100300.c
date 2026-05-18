/*
 * XREFs of sub_180100300 @ 0x180100300
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FE448 @ 0x1800FE448 (sub_1800FE448.c)
 */

__m128 *__fastcall sub_180100300(__int64 a1, __m128 *a2, __m128 *a3)
{
  __int64 v3; // rcx
  __m128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *a3;
  sub_1800FE448(v3, a2, &v6);
  return a2;
}
