/*
 * XREFs of _GreSelectFont@8 @ 0x5AA52
 * Callers:
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     __ServerFixupMenuDC@16 @ 0xB932A (__ServerFixupMenuDC@16.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _FinalUserInit@0 @ 0xD6A7A (_FinalUserInit@0.c)
 *     _MNSetupAnimationDC@4 @ 0xD6DB0 (_MNSetupAnimationDC@4.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     _ValidateExternalLogFont@4 @ 0xDAF6C (_ValidateExternalLogFont@4.c)
 *     ?GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z @ 0xE4980 (-GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z.c)
 *     ?UserReinitializeStockFonts@@YGXKH@Z @ 0xF013A (-UserReinitializeStockFonts@@YGXKH@Z.c)
 *     _CreateScaledFont@28 @ 0x155260 (_CreateScaledFont@28.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z @ 0x18512F (-PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z.c)
 *     _SfnINLPKDRAWSWITCHWND@32 @ 0x18D98D (_SfnINLPKDRAWSWITCHWND@32.c)
 *     ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9 (-xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z @ 0x1A0FFC (-xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     ?SelectFont@@YGXPAU_SELECT_FONT@@@Z @ 0x1ACF9B (-SelectFont@@YGXPAU_SELECT_FONT@@@Z.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 * Callees:
 *     _GreSelectFontInternal@12 @ 0xF7EBA (_GreSelectFontInternal@12.c)
 */

int __stdcall GreSelectFont(HDC a1, int a2)
{
  return GreSelectFontInternal(a1, 1);
}
