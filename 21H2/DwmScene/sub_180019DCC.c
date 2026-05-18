/*
 * XREFs of sub_180019DCC @ 0x180019DCC
 * Callers:
 *     sub_18001FA88 @ 0x18001FA88 (sub_18001FA88.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180019DCC(__m128 *a1, __m128 *a2)
{
  char v2; // bl

  v2 = 0;
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( a1 == (__m128 *)-16LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( a1 == (__m128 *)-32LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( a1 == (__m128 *)-48LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( a2 == (__m128 *)-16LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( a2 == (__m128 *)-32LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( a2 == (__m128 *)-48LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( _mm_movemask_ps(_mm_cmpneq_ps(*a2, *a1))
    || _mm_movemask_ps(_mm_cmpneq_ps(a2[1], a1[1]))
    || _mm_movemask_ps(_mm_cmpneq_ps(a2[2], a1[2]))
    || _mm_movemask_ps(_mm_cmpneq_ps(a2[3], a1[3])) )
  {
    return 1;
  }
  return v2;
}
