/*
 * XREFs of GreCreateFontIndirectW @ 0x1C008F8E0
 * Callers:
 *     FinishStockFontInit @ 0x1C00234B0 (FinishStockFontInit.c)
 *     CreateFontFromUserProfile @ 0x1C0024338 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1C0024488 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C0024B20 (ValidateExternalLogFont.c)
 *     UserSetAltScaleFont @ 0x1C0026F48 (UserSetAltScaleFont.c)
 *     DrawFrameControl @ 0x1C0036FB0 (DrawFrameControl.c)
 *     CreateScaledFont @ 0x1C01E9BB0 (CreateScaledFont.c)
 * Callees:
 *     vConvertLogFontW @ 0x1C008F880 (vConvertLogFontW.c)
 *     hfontCreate @ 0x1C008FEE0 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall GreCreateFontIndirectW(__int64 a1, unsigned int a2)
{
  _BYTE Src[432]; // [rsp+30h] [rbp-1C8h] BYREF

  memset(Src, 0, 0x1A4uLL);
  vConvertLogFontW((__int64)Src, a1);
  return hfontCreate(Src, a2);
}
