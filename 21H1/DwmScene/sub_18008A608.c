/*
 * XREFs of sub_18008A608 @ 0x18008A608
 * Callers:
 *     sub_18008A9D0 @ 0x18008A9D0 (sub_18008A9D0.c)
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 *     sub_1800B3788 @ 0x1800B3788 (sub_1800B3788.c)
 *     sub_1800DAE80 @ 0x1800DAE80 (sub_1800DAE80.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18008A608(__m128 *a1, __m128 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  return _mm_movemask_ps(_mm_cmpneq_ps(*a2, *a1)) != 0;
}
