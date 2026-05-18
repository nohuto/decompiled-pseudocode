/*
 * XREFs of sub_18001D41C @ 0x18001D41C
 * Callers:
 *     sub_1800C66F4 @ 0x1800C66F4 (sub_1800C66F4.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_18001D41C(__m128 *a1, __m128 *a2)
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
