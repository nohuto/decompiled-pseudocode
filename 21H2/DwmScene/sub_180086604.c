/*
 * XREFs of sub_180086604 @ 0x180086604
 * Callers:
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180088790 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180086604(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm0
  __m128 v4; // xmm2
  __m128 v5; // xmm2
  __m128 v6; // xmm6

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  v2 = _mm_mul_ps(*a1, *a1);
  v3 = _mm_add_ps(_mm_shuffle_ps(*a1, v2, 64), v2);
  v4 = _mm_add_ps(_mm_shuffle_ps(v2, v3, 48), v3);
  v5 = _mm_shuffle_ps(v4, v4, 170);
  v6 = _mm_andnot_ps(
         _mm_cmple_ps(v5, (__m128)xmmword_18013FBF0),
         _mm_div_ps(_mm_mul_ps((__m128)xmmword_1801CC9D0, *a1), v5));
  if ( !a2 )
    wassert(L"pDestination", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x6A2u);
  *a2 = v6;
}
