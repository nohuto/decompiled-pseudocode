/*
 * XREFs of sub_1800BD5B0 @ 0x1800BD5B0
 * Callers:
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800ED8D0 @ 0x1800ED8D0 (sub_1800ED8D0.c)
 *     sub_1800EE230 @ 0x1800EE230 (sub_1800EE230.c)
 *     sub_1800EE3D4 @ 0x1800EE3D4 (sub_1800EE3D4.c)
 *     sub_1800FED34 @ 0x1800FED34 (sub_1800FED34.c)
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 *     sub_18010FEE0 @ 0x18010FEE0 (sub_18010FEE0.c)
 * Callees:
 *     sub_1800A1DE8 @ 0x1800A1DE8 (sub_1800A1DE8.c)
 *     sub_1800BC02C @ 0x1800BC02C (sub_1800BC02C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800BD5B0(__int64 *a1, __m128i *a2)
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
    v8 = sub_1800A1DE8((__int64)a1, *a1, v5);
    sub_1800BC02C((__int64 **)a1, v10, v7, v8 + 4, v8);
    v5 += 32LL;
  }
  return a1;
}
