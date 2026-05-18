/*
 * XREFs of sub_1800BD648 @ 0x1800BD648
 * Callers:
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_1800BD648(__m128 *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __m128 v3; // xmm6
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm6
  __m128 *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v3 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v4 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
  v5 = _mm_mul_ps(v4, v3);
  v6 = _mm_shuffle_ps(v5, v5, 153);
  v5.m128_f32[0] = (float)(v5.m128_f32[0] + v6.m128_f32[0]) + _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v7 = _mm_or_ps(
         _mm_andnot_ps((__m128)xmmword_18013FC80, _mm_sub_ps((__m128)0LL, _mm_shuffle_ps(v5, v5, 0))),
         _mm_and_ps((__m128)xmmword_18013FC80, v4));
  if ( !a1 )
    wassert(L"pDestination", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x6A2u);
  result = a1;
  *a1 = v7;
  return result;
}
