/*
 * XREFs of __GetTextMetricsW@8 @ 0x8440E
 * Callers:
 *     _GetCharDimensions@12 @ 0xB5416 (_GetCharDimensions@12.c)
 *     _FinalUserInit@0 @ 0xD6A7A (_FinalUserInit@0.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 * Callees:
 *     _GreGetTextMetricsW@8 @ 0x84442 (_GreGetTextMetricsW@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall _GetTextMetricsW(HDC a1, void *a2)
{
  int result; // eax
  _BYTE v5[72]; // [esp+8h] [ebp-48h] BYREF

  memset(v5, 0, 0x44u);
  result = GreGetTextMetricsW(a1, (struct RFONTOBJ *)v5);
  qmemcpy(a2, v5, 0x3Cu);
  return result;
}
