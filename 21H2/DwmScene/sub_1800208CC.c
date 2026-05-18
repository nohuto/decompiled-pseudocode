/*
 * XREFs of sub_1800208CC @ 0x1800208CC
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_1800B2AB0 @ 0x1800B2AB0 (sub_1800B2AB0.c)
 * Callees:
 *     <none>
 */

float __fastcall sub_1800208CC(float a1, float a2, float a3, float a4)
{
  __m128 v7; // xmm4
  __m128 v8; // xmm3
  float v9; // xmm0_4
  __m128 v10; // xmm2
  __m128 v11; // xmm1

  if ( fabs(a1 - 0.0) <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(ViewWidth, 0.0f, 0.00001f)",
      L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl",
      0xA7Du);
  if ( fabs(a2 - 0.0) <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(ViewHeight, 0.0f, 0.00001f)",
      L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl",
      0xA7Eu);
  if ( fabs(a4 - a3) <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(FarZ, NearZ, 0.00001f)",
      L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl",
      0xA7Fu);
  v7 = (__m128)0x3F800000u;
  v8 = (__m128)0x40000000u;
  v9 = a3 - a4;
  v10 = (__m128)0x40000000u;
  v8.m128_f32[0] = 2.0 / a1;
  v7.m128_f32[0] = 1.0 / v9;
  v10.m128_f32[0] = 2.0 / a2;
  v11 = v7;
  v11.m128_f32[0] = (float)(1.0 / v9) * a3;
  return _mm_unpacklo_ps(_mm_unpacklo_ps(v8, v7), _mm_unpacklo_ps(v10, v11)).m128_f32[0];
}
