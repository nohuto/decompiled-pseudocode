/*
 * XREFs of ?IsCHSBaseFont@@YGHPBGI@Z @ 0xDF198
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC606 (-bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOA.c)
 * Callees:
 *     SearchInCHSBaseFontFileNameSuffixes @ 0xDF340 (SearchInCHSBaseFontFileNameSuffixes.c)
 */

BOOL __fastcall IsCHSBaseFont(int a1, int a2)
{
  unsigned int v3; // eax
  unsigned __int16 *v4; // edx
  int v5; // ecx
  const UNICODE_STRING *v7; // esi
  int v8; // edi
  int v9; // [esp-4h] [ebp-18h]
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-8h] BYREF

  if ( !gcwcFontsDirectory )
    return 0;
  v3 = gcwcFontsDirectory - 1;
  if ( (int)(a2 - (gcwcFontsDirectory - 1)) < 8 )
    return 0;
  v4 = *(unsigned __int16 **)(a1 + 2 * v3);
  v5 = *(_DWORD *)(a1 + 2 * v3 + 4);
  if ( v4 == gMSYHFontFileNamePrefix && v5 == dword_26BF08 )
  {
    v7 = &gMSYHFontFileNameSuffixes;
    v9 = 3;
  }
  else
  {
    if ( v4 != gSimsunFontFileNamePrefix || v5 != dword_26BF00 )
      return 0;
    v7 = (const UNICODE_STRING *)&gSimSunFontFileNameSuffixes;
    v9 = 2;
  }
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v8 = v9;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 2 * (v3 + 4)));
  return SearchInCHSBaseFontFileNameSuffixes(&DestinationString, v7, v8) >= 0;
}
