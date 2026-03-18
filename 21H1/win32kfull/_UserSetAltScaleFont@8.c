/*
 * XREFs of _UserSetAltScaleFont@8 @ 0xDAC76
 * Callers:
 *     ?SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z @ 0xDA45C (-SetIconFonts@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@@Z.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     ?SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z @ 0x1452C0 (-SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreCreateFontIndirectW@8 @ 0x89CD6 (_GreCreateFontIndirectW@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __fastcall UserSetAltScaleFont(struct HLFONT__ *a1, int *a2)
{
  int FontIndirectW; // eax
  INT a[25]; // [esp+8h] [ebp-68h] BYREF

  memset(a, 0, 0x5Cu);
  if ( !GreExtGetObjectW(a1, 92, a) )
    return 0;
  a[0] = EngMulDiv(a[0], 96, *(unsigned __int16 *)(_gpsi + 6242));
  a[1] = EngMulDiv(a[1], 96, *(unsigned __int16 *)(_gpsi + 6242));
  FontIndirectW = GreCreateFontIndirectW((int)a, 136);
  *a2 = FontIndirectW;
  return FontIndirectW != 0;
}
