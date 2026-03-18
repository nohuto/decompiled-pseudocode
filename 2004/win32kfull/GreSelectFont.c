/*
 * XREFs of GreSelectFont @ 0x1C0062690
 * Callers:
 *     MNSetupAnimationDC @ 0x1C0009DFC (MNSetupAnimationDC.c)
 *     FinalUserInit @ 0x1C000AA3C (FinalUserInit.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C000AC8C (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxSetNCFonts @ 0x1C000B988 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C000C020 (ValidateExternalLogFont.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     DrawFrameControl @ 0x1C00623A8 (DrawFrameControl.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0063530 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00BACF8 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     _ServerFixupMenuDC @ 0x1C01015A0 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C014BEB8 (CreateCompatiblePublicDC.c)
 *     CreateScaledFont @ 0x1C01EA820 (CreateScaledFont.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3270 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223C70 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022C6C0 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0243708 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0243DEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0251C50 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C0251DB4 (xxxDrawState.c)
 * Callees:
 *     GreSelectFontInternal @ 0x1C015B3DC (GreSelectFontInternal.c)
 */

__int64 __fastcall GreSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
