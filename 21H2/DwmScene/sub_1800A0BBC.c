/*
 * XREFs of sub_1800A0BBC @ 0x1800A0BBC
 * Callers:
 *     sub_1800A0C34 @ 0x1800A0C34 (sub_1800A0C34.c)
 *     sub_1800AB508 @ 0x1800AB508 (sub_1800AB508.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800A0BBC(__m128 *a1, __m128 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  return _mm_movemask_ps(_mm_cmpeq_ps(*a2, *a1)) == 15;
}
