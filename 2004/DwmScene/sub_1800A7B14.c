/*
 * XREFs of sub_1800A7B14 @ 0x1800A7B14
 * Callers:
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800A7B14(unsigned __int64 *a1, unsigned __int64 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x140u);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x140u);
  return (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*a2, (__m128)*a1)) & 3) == 3;
}
