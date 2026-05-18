/*
 * XREFs of sub_18009F234 @ 0x18009F234
 * Callers:
 *     sub_1800AF1E0 @ 0x1800AF1E0 (sub_1800AF1E0.c)
 *     sub_1800B51BC @ 0x1800B51BC (sub_1800B51BC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18009F234(unsigned __int64 *a1, unsigned __int64 *a2)
{
  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x140u);
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x140u);
  return (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*a2, (__m128)*a1)) & 3) != 3;
}
