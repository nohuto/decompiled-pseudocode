/*
 * XREFs of GreSelectFont @ 0x1C00372A0
 * Callers:
 *     MNSetupAnimationDC @ 0x1C0022E98 (MNSetupAnimationDC.c)
 *     FinalUserInit @ 0x1C00230A4 (FinalUserInit.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00232F4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxSetNCFonts @ 0x1C0024488 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C0024B20 (ValidateExternalLogFont.c)
 *     xxxMenuDraw @ 0x1C003354C (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0034BC0 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00356B4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     DrawFrameControl @ 0x1C0036FB0 (DrawFrameControl.c)
 *     _ServerFixupMenuDC @ 0x1C00FDB60 (_ServerFixupMenuDC.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011C934 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionTemp @ 0x1C014DC4C (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C014E6C8 (CreateCompatiblePublicDC.c)
 *     CreateScaledFont @ 0x1C01E9BB0 (CreateScaledFont.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F2600 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0222DE0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022B830 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0242468 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0242B4C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0250640 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C02507A4 (xxxDrawState.c)
 * Callees:
 *     GreSelectFontInternal @ 0x1C015E8C8 (GreSelectFontInternal.c)
 */

__int64 __fastcall GreSelectFont(HDC a1)
{
  return GreSelectFontInternal(a1);
}
