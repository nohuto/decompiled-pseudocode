/*
 * XREFs of sub_18007E3E4 @ 0x18007E3E4
 * Callers:
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     sub_180082B74 @ 0x180082B74 (sub_180082B74.c)
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 *     sub_180095F78 @ 0x180095F78 (sub_180095F78.c)
 *     sub_1800A7A94 @ 0x1800A7A94 (sub_1800A7A94.c)
 *     sub_1800AA1F8 @ 0x1800AA1F8 (sub_1800AA1F8.c)
 *     sub_1800ABD40 @ 0x1800ABD40 (sub_1800ABD40.c)
 *     sub_1800ABF34 @ 0x1800ABF34 (sub_1800ABF34.c)
 *     sub_1800AC810 @ 0x1800AC810 (sub_1800AC810.c)
 *     sub_1800ACEA0 @ 0x1800ACEA0 (sub_1800ACEA0.c)
 *     sub_1800AD1E0 @ 0x1800AD1E0 (sub_1800AD1E0.c)
 *     sub_1800AD434 @ 0x1800AD434 (sub_1800AD434.c)
 *     sub_1800AD630 @ 0x1800AD630 (sub_1800AD630.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18007E3E4(_OWORD *a1, _OWORD *a2)
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
