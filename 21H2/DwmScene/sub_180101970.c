/*
 * XREFs of sub_180101970 @ 0x180101970
 * Callers:
 *     sub_180101A10 @ 0x180101A10 (sub_180101A10.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 *__fastcall sub_180101970(__m128 *a1, __m128 *a2, __m128 *a3, double a4)
{
  __m128 *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*a3, *a2), _mm_shuffle_ps(*(__m128 *)&a4, *(__m128 *)&a4, 0)), *a2);
  return result;
}
