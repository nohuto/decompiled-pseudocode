/*
 * XREFs of ??8EFLOAT@@QAEHAAV0@@Z @ 0x8A5D6
 * Callers:
 *     _cjIFIMetricsToOTMW@24 @ 0x89FBE (_cjIFIMetricsToOTMW@24.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QAEHPAVXDCOBJ@@@Z @ 0x8A7A8 (-bCalcLayoutUnits@RFONTOBJ@@QAEHPAVXDCOBJ@@@Z.c)
 *     _FLOATOBJ_Equal@8 @ 0x1F30CD (_FLOATOBJ_Equal@8.c)
 *     _FLOATOBJ_EqualLong@8 @ 0x1F30E6 (_FLOATOBJ_EqualLong@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall EFLOAT::operator==(_DWORD *this, _DWORD *a2)
{
  return *this == *a2 && this[1] == a2[1];
}
