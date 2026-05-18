/*
 * XREFs of sub_1800B7D40 @ 0x1800B7D40
 * Callers:
 *     sub_1800B9484 @ 0x1800B9484 (sub_1800B9484.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_1800B7D40(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a3 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_add_ps(*a3, *a2);
  return result;
}
