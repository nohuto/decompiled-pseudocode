/*
 * XREFs of sub_180089CA0 @ 0x180089CA0
 * Callers:
 *     sub_1800866A4 @ 0x1800866A4 (sub_1800866A4.c)
 *     sub_1800C857C @ 0x1800C857C (sub_1800C857C.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_180089CA0(double a1)
{
  if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)0LL, *(__m128 *)&a1)) & 7) == 7 )
    wassert(L"!XMVector3Equal(Axis, XMVectorZero())", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMisc.inl", 0x2BAu);
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps((__m128)xmmword_18013FC20, *(__m128 *)&a1), (__m128)xmmword_18013FC00)) & 7) != 0 )
    wassert(L"!XMVector3IsInfinite(Axis)", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMisc.inl", 0x2BBu);
  return sub_180089EFC();
}
