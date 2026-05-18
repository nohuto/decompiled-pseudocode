/*
 * XREFs of sub_180083EA0 @ 0x180083EA0
 * Callers:
 *     sub_180085EE8 @ 0x180085EE8 (sub_180085EE8.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180088790 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_18010C8F4 @ 0x18010C8F4 (sub_18010C8F4.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_180083EA0(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm6
  __m128 *result; // rax
  __m128 v5; // xmm1
  __m128 v6; // xmm3
  __m128 v7; // xmm1

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  v3 = *a2;
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  v5 = _mm_shuffle_ps(v3, v3, 27);
  v6 = _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), v5);
  v7 = _mm_shuffle_ps(v5, v5, 177);
  *a1 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 27), _mm_shuffle_ps(*a3, *a3, 170)), (__m128)xmmword_1801CC9C0),
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 85), v7), (__m128)xmmword_1801CC9B0)),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 255), v3), _mm_mul_ps((__m128)xmmword_1801CC9A0, v6)));
  return result;
}
