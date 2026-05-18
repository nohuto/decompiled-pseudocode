/*
 * XREFs of sub_1800843D0 @ 0x1800843D0
 * Callers:
 *     sub_180080DD4 @ 0x180080DD4 (sub_180080DD4.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_1800843D0(double a1)
{
  if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)0LL, *(__m128 *)&a1)) & 7) == 7 )
    wassert(L"!XMVector3Equal(Axis, XMVectorZero())", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMisc.inl", 0x2BAu);
  if ( (_mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps((__m128)xmmword_180139B20, *(__m128 *)&a1), (__m128)xmmword_180139B00)) & 7) != 0 )
    wassert(L"!XMVector3IsInfinite(Axis)", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMisc.inl", 0x2BBu);
  return sub_18008462C();
}
