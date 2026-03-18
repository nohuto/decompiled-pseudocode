/*
 * XREFs of ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1C0020F1C
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C001EA94 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     SearchInCHSBaseFontFileNameSuffixes @ 0x1C0020FBC (SearchInCHSBaseFontFileNameSuffixes.c)
 */

_BOOL8 __fastcall IsCHSBaseFont(const unsigned __int16 *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int16 *v4; // rax
  const UNICODE_STRING *v6; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !gcwcFontsDirectory )
    return 0LL;
  v2 = gcwcFontsDirectory - 1;
  v3 = (unsigned int)v2;
  if ( a2 - (int)v2 < 8 )
    return 0LL;
  v4 = *(unsigned __int16 **)&a1[v2];
  if ( v4 == gMSYHFontFileNamePrefix )
  {
    v6 = &gMSYHFontFileNameSuffixes;
  }
  else
  {
    if ( v4 != gSimsunFontFileNamePrefix )
      return 0LL;
    v6 = (const UNICODE_STRING *)&gSimSunFontFileNameSuffixes;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, &a1[v3 + 4]);
  return (int)SearchInCHSBaseFontFileNameSuffixes(&DestinationString, v6) >= 0;
}
