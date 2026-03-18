/*
 * XREFs of _GreCreateFontIndirectW@8 @ 0x89CD6
 * Callers:
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     _UserSetAltScaleFont@8 @ 0xDAC76 (_UserSetAltScaleFont@8.c)
 *     _CreateFontFromUserProfile@12 @ 0xDAD68 (_CreateFontFromUserProfile@12.c)
 *     _ValidateExternalLogFont@4 @ 0xDAF6C (_ValidateExternalLogFont@4.c)
 *     _FinishStockFontInit@4 @ 0xDBAB4 (_FinishStockFontInit@4.c)
 *     _CreateScaledFont@28 @ 0x155260 (_CreateScaledFont@28.c)
 * Callees:
 *     _hfontCreate@20 @ 0x89DF2 (_hfontCreate@20.c)
 *     _vConvertLogFontW@8 @ 0x89F34 (_vConvertLogFontW@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall GreCreateFontIndirectW(int a1, int a2)
{
  _BYTE Src[420]; // [esp+Ch] [ebp-1A8h] BYREF

  memset(Src, 0, sizeof(Src));
  vConvertLogFontW(Src, a1);
  return hfontCreate(Src, 0, 0, 0, a2);
}
