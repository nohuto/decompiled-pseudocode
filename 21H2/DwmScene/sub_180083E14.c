/*
 * XREFs of sub_180083E14 @ 0x180083E14
 * Callers:
 *     sub_18009E100 @ 0x18009E100 (sub_18009E100.c)
 *     sub_1800FD390 @ 0x1800FD390 (sub_1800FD390.c)
 *     sub_1801018C0 @ 0x1801018C0 (sub_1801018C0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180083E14(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __m128 v2; // xmm6

  if ( !a1 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  v2 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
  return (_mm_movemask_ps(_mm_cmpeq_ps(_mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2)), v2)) & 7) != 7;
}
