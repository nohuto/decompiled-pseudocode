/*
 * XREFs of GreCreateFontIndirectW @ 0x1C001D8A0
 * Callers:
 *     CreateFontFromUserProfile @ 0x1C000B838 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C000B988 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C000C020 (ValidateExternalLogFont.c)
 *     UserSetAltScaleFont @ 0x1C000CF04 (UserSetAltScaleFont.c)
 *     FinishStockFontInit @ 0x1C000DD20 (FinishStockFontInit.c)
 *     DrawFrameControl @ 0x1C00623A8 (DrawFrameControl.c)
 *     CreateScaledFont @ 0x1C01EA820 (CreateScaledFont.c)
 * Callees:
 *     vConvertLogFontW @ 0x1C001D840 (vConvertLogFontW.c)
 *     hfontCreate @ 0x1C001DB80 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW((__int64)Src, a1);
  return hfontCreate(Src, a2);
}
