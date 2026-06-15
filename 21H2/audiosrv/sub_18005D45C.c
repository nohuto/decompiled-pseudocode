/*
 * XREFs of sub_18005D45C @ 0x18005D45C
 * Callers:
 *     sub_18005C8D0 @ 0x18005C8D0 (sub_18005C8D0.c)
 *     sub_18005D370 @ 0x18005D370 (sub_18005D370.c)
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 *     sub_1800BF4C0 @ 0x1800BF4C0 (sub_1800BF4C0.c)
 *     sub_1800BFDE0 @ 0x1800BFDE0 (sub_1800BFDE0.c)
 *     sub_1800C00CC @ 0x1800C00CC (sub_1800C00CC.c)
 * Callees:
 *     sub_18005444C @ 0x18005444C (sub_18005444C.c)
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 */

void __fastcall sub_18005D45C(__int64 a1, __int64 a2, float a3, float a4, int a5, __int64 a6)
{
  double v7; // xmm0_8
  double v8; // xmm8_8
  double v9; // xmm0_8
  double v10; // xmm6_8

  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 56) = a6;
  *(_DWORD *)(a1 + 16) = a5;
  *(float *)(a1 + 8) = a3;
  *(float *)(a1 + 12) = a4;
  *(float *)(a1 + 20) = a4;
  v7 = o_pow();
  *(double *)(a1 + 48) = v7;
  v8 = v7;
  v9 = o_pow();
  *(double *)(a1 + 40) = v9;
  v10 = v9;
  *(_QWORD *)(a1 + 24) = sub_18005444C((_DWORD *)a1, v8).m128_u64[0];
  *(_QWORD *)(a1 + 32) = sub_18005444C((_DWORD *)a1, v10).m128_u64[0];
}
