/*
 * XREFs of sub_180076D60 @ 0x180076D60
 * Callers:
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 * Callees:
 *     sub_180072110 @ 0x180072110 (sub_180072110.c)
 *     sub_180073C84 @ 0x180073C84 (sub_180073C84.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180076D60(__int64 *a1, __m128i *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // xmm0_8
  __int64 *v7; // rbx
  _QWORD *v8; // rax
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x60uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *a1 = (__int64)v4;
  v5 = a2->m128i_i64[0];
  v6 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  while ( v5 != v6 )
  {
    v7 = (__int64 *)*a1;
    v8 = sub_180072110((__int64)a1, *a1, v5);
    sub_180073C84((__int64 **)a1, v10, v7, v8 + 4, v8);
    v5 += 64LL;
  }
  return a1;
}
