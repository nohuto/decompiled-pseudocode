/*
 * XREFs of FillRect @ 0x1C0062024
 * Callers:
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C0051AE0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     DrawPushButton @ 0x1C0061854 (DrawPushButton.c)
 *     DrawEdge @ 0x1C0061B00 (DrawEdge.c)
 *     xxxPaintRect @ 0x1C0061E74 (xxxPaintRect.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0062134 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0062C10 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0112300 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     xxxDesktopPaintCallback @ 0x1C0125A80 (xxxDesktopPaintCallback.c)
 *     PaintScreenBackground @ 0x1C012A620 (PaintScreenBackground.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C013548C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C014A6CC (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C014BF28 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E7AE4 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3270 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3D90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F41D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0243DEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02482E8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C024847C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 */

int __stdcall FillRect(HDC a1, LPCRECT a2, HBRUSH a3)
{
  return GrePolyPatBlt(a1);
}
