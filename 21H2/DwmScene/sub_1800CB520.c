/*
 * XREFs of sub_1800CB520 @ 0x1800CB520
 * Callers:
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1800CB520(double a1)
{
  __m128 v1; // xmm2
  __m128 v2; // xmm1
  __m128 v3; // xmm2
  __m128 v4; // xmm6

  if ( (_mm_movemask_ps(_mm_cmpeq_ps(*(__m128 *)&a1, (__m128)0LL)) & 7) == 7 )
    wassert(
      L"!XMVector3Equal(ReflectionPlane, XMVectorZero())",
      L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl",
      0x758u);
  if ( _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps((__m128)xmmword_18013FC20, *(__m128 *)&a1), (__m128)xmmword_18013FC00)) )
    wassert(L"!XMPlaneIsInfinite(ReflectionPlane)", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMatrix.inl", 0x759u);
  v1 = _mm_mul_ps(*(__m128 *)&a1, *(__m128 *)&a1);
  v2 = _mm_shuffle_ps(v1, v1, 153);
  v1.m128_f32[0] = (float)(v1.m128_f32[0] + v2.m128_f32[0]) + _mm_shuffle_ps(v2, v2, 85).m128_f32[0];
  v3 = _mm_shuffle_ps(v1, v1, 0);
  v4 = _mm_and_ps(_mm_div_ps(*(__m128 *)&a1, _mm_sqrt_ps(v3)), _mm_cmpneq_ps((__m128)xmmword_18013FC00, v3));
  return _mm_add_ps(
           _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), _mm_mul_ps((__m128)xmmword_1801D86A0, v4)),
           (__m128)xmmword_18013FAF0);
}
