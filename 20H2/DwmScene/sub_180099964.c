/*
 * XREFs of sub_180099964 @ 0x180099964
 * Callers:
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180099964(unsigned __int64 *a1, unsigned __int64 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x140u);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x140u);
  return (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*a2, (__m128)*a1)) & 3) != 3;
}
