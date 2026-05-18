/*
 * XREFs of sub_1800B7CE0 @ 0x1800B7CE0
 * Callers:
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800E8000 @ 0x1800E8000 (sub_1800E8000.c)
 *     sub_1800E8960 @ 0x1800E8960 (sub_1800E8960.c)
 *     sub_1800E8B04 @ 0x1800E8B04 (sub_1800E8B04.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 *     sub_18010A610 @ 0x18010A610 (sub_18010A610.c)
 * Callees:
 *     sub_18009C518 @ 0x18009C518 (sub_18009C518.c)
 *     sub_1800B675C @ 0x1800B675C (sub_1800B675C.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800B7CE0(__int64 *a1, __m128i *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // xmm0_8
  __int64 *v7; // rbx
  _QWORD *v8; // rax
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x40uLL);
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
    v8 = sub_18009C518((__int64)a1, *a1, v5);
    sub_1800B675C((__int64 **)a1, v10, v7, v8 + 4, v8);
    v5 += 32LL;
  }
  return a1;
}
