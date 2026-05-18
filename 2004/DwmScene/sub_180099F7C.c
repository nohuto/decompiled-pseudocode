/*
 * XREFs of sub_180099F7C @ 0x180099F7C
 * Callers:
 *     sub_1800B3788 @ 0x1800B3788 (sub_1800B3788.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180099F7C(__m128 *a1, _DWORD *a2)
{
  _DWORD *result; // rax
  __m128 v3; // xmm6
  __m128i v4; // xmm0
  __m128i v5; // xmm0

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pDestination", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXPackedVector.inl", 0x850u);
  result = a2;
  v3 = _mm_mul_ps(
         _mm_min_ps(_mm_max_ps(*a1, (__m128)xmmword_180139A90), (__m128)xmmword_180139A80),
         (__m128)xmmword_180139BC0);
  v4 = _mm_cvtps_epi32(_mm_shuffle_ps(v3, v3, 198));
  v5 = _mm_packs_epi32(v4, v4);
  *a2 = _mm_packus_epi16(v5, v5).m128i_u32[0];
  return result;
}
