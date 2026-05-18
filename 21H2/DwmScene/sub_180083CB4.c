/*
 * XREFs of sub_180083CB4 @ 0x180083CB4
 * Callers:
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_180088444 @ 0x180088444 (sub_180088444.c)
 *     sub_1800891B4 @ 0x1800891B4 (sub_1800891B4.c)
 *     sub_18009B848 @ 0x18009B848 (sub_18009B848.c)
 *     sub_1800AD364 @ 0x1800AD364 (sub_1800AD364.c)
 *     sub_1800AFAC8 @ 0x1800AFAC8 (sub_1800AFAC8.c)
 *     sub_1800B1610 @ 0x1800B1610 (sub_1800B1610.c)
 *     sub_1800B1804 @ 0x1800B1804 (sub_1800B1804.c)
 *     sub_1800B20E0 @ 0x1800B20E0 (sub_1800B20E0.c)
 *     sub_1800B2770 @ 0x1800B2770 (sub_1800B2770.c)
 *     sub_1800B2AB0 @ 0x1800B2AB0 (sub_1800B2AB0.c)
 *     sub_1800B2D04 @ 0x1800B2D04 (sub_1800B2D04.c)
 *     sub_1800B2F00 @ 0x1800B2F00 (sub_1800B2F00.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180083CB4(_OWORD *a1, _OWORD *a2)
{
  __int128 v2; // xmm9
  __int128 v3; // xmm8
  __int128 v4; // xmm6
  _OWORD *result; // rax

  if ( !a2 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  if ( a2 == (_OWORD *)-16LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  v2 = a2[1];
  if ( a2 == (_OWORD *)-32LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  v3 = a2[2];
  if ( a2 == (_OWORD *)-48LL )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x2A5u);
  v4 = a2[3];
  if ( !a1 )
    wassert(L"pDestination", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x6A2u);
  *a1 = *a2;
  if ( a1 == (_OWORD *)-16LL )
    wassert(L"pDestination", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x6A2u);
  a1[1] = v2;
  if ( a1 == (_OWORD *)-32LL )
    wassert(L"pDestination", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x6A2u);
  a1[2] = v3;
  if ( a1 == (_OWORD *)-48LL )
    wassert(L"pDestination", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x6A2u);
  result = a1;
  a1[3] = v4;
  return result;
}
