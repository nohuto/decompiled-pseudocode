/*
 * XREFs of sub_180022CEC @ 0x180022CEC
 * Callers:
 *     sub_1800CBFC4 @ 0x1800CBFC4 (sub_1800CBFC4.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_180022CEC(__m128 *a1, __m128 *a2)
{
  __m128 *result; // rax

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  result = a1;
  *a1 = _mm_add_ps(*a2, *a1);
  return result;
}
