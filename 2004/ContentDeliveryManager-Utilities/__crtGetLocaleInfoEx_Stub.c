/*
 * XREFs of __crtGetLocaleInfoEx_Stub @ 0x1800B9C74
 * Callers:
 *     _Getdateorder @ 0x1800CCDF8 (_Getdateorder.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall _crtGetLocaleInfoEx_Stub(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  return GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
}
