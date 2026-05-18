/*
 * XREFs of sub_18009B2EC @ 0x18009B2EC
 * Callers:
 *     sub_18009B364 @ 0x18009B364 (sub_18009B364.c)
 *     sub_1800A5C38 @ 0x1800A5C38 (sub_1800A5C38.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18009B2EC(__m128 *a1, __m128 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  return _mm_movemask_ps(_mm_cmpeq_ps(*a2, *a1)) == 15;
}
