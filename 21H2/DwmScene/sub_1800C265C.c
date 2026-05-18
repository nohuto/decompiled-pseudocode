/*
 * XREFs of sub_1800C265C @ 0x1800C265C
 * Callers:
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 * Callees:
 *     sub_1800BEB00 @ 0x1800BEB00 (sub_1800BEB00.c)
 *     sub_18011AA48 @ 0x18011AA48 (sub_18011AA48.c)
 *     fmodf @ 0x18012504E (fmodf.c)
 */

__m128 *__fastcall sub_1800C265C(__m128 *a1, float a2, float a3, float a4, float X)
{
  float v6; // xmm0_4
  float v7; // xmm12_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm10_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  __m128 *result; // rax

  v6 = fmaxf(a2, 0.0);
  v7 = fminf(v6, 360.0);
  v8 = fmaxf(a3, -100.0);
  v9 = fminf(v8, 100.0);
  v10 = fmaxf(a4, -100.0);
  v11 = fminf(v10, 100.0);
  v12 = fmaxf(X, -100.0);
  v13 = sub_1800BEB00(v9) * 0.5;
  v14 = fminf(v12, 100.0);
  sub_1800BEB00(v14);
  if ( v13 < 0.0 )
    fmodf(v7 + 180.0, 360.0);
  sub_18011AA48(a1);
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_mul_ps((__m128)xmmword_1801D8CF0, *a1);
  a1->m128_f32[3] = (float)(v11 * 0.0099999998) + 1.0;
  return result;
}
