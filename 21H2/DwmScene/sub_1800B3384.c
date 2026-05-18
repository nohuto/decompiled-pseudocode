/*
 * XREFs of sub_1800B3384 @ 0x1800B3384
 * Callers:
 *     sub_1800B2AB0 @ 0x1800B2AB0 (sub_1800B2AB0.c)
 * Callees:
 *     sub_1800B353C @ 0x1800B353C (sub_1800B353C.c)
 */

// local variable allocation has failed, the output may be wrong!
float __fastcall sub_1800B3384(float a1, float a2, float a3, double a4)
{
  __m128 v4; // xmm8
  __m128 v6; // xmm3
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  float v10; // [rsp+90h] [rbp+8h] BYREF
  float v11; // [rsp+98h] [rbp+10h] BYREF

  v4 = *(__m128 *)&a4;
  if ( a3 <= 0.0 || *(float *)&a4 <= 0.0 )
    wassert(L"NearZ > 0.f && FarZ > 0.f", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl", 0x901u);
  if ( fabs(a1 - 0.0) <= 0.000019999999 )
    wassert(
      L"!XMScalarNearEqual(FovAngleY, 0.0f, 0.00001f * 2.0f)",
      L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl",
      0x902u);
  if ( fabs(a2 - 0.0) <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(AspectRatio, 0.0f, 0.00001f)",
      L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl",
      0x903u);
  if ( fabs(*(float *)&a4 - a3) <= 0.0000099999997 )
    wassert(
      L"!XMScalarNearEqual(FarZ, NearZ, 0.00001f)",
      L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl",
      0x904u);
  sub_1800B353C(&v11, &v10);
  v6 = (__m128)LODWORD(v10);
  v6.m128_f32[0] = v10 / v11;
  v7 = v6;
  v7.m128_f32[0] = (float)(v10 / v11) / a2;
  v4.m128_f32[0] = v4.m128_f32[0] / (float)(a3 - v4.m128_f32[0]);
  v8 = v4;
  v8.m128_f32[0] = v4.m128_f32[0] * a3;
  return _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v4), _mm_unpacklo_ps(v6, v8)).m128_f32[0];
}
