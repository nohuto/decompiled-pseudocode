/*
 * XREFs of sub_180085444 @ 0x180085444
 * Callers:
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_180116F40 @ 0x180116F40 (sub_180116F40.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall sub_180085444(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v2; // xmm6
  __m128 v3; // xmm3
  __m128 v4; // xmm2

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v2 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_mul_ps(_mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)), v2);
  v4 = _mm_shuffle_ps(v3, v3, 153);
  v3.m128_f32[0] = (float)(v3.m128_f32[0] + v4.m128_f32[0]) + _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  return v3;
}
