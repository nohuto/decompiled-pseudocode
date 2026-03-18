/*
 * XREFs of _FillRect@12 @ 0x7226C
 * Callers:
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _xxxPaintRect@20 @ 0x7215C (_xxxPaintRect@20.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z @ 0x7A92E (-BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z.c)
 *     ?DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z @ 0x8FEF0 (-DrawMenuMark@@YGHPAUHDC__@@PAUtagRECT@@II@Z.c)
 *     ?CreateDPIBitmapStrip@@YGHI@Z @ 0x90002 (-CreateDPIBitmapStrip@@YGHI@Z.c)
 *     _DrawPushButton@16 @ 0x904D2 (_DrawPushButton@16.c)
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 *     ?DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x907DA (-DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     ?FillCaptionGradient@@YGXPAUHDC__@@PBUtagRECT@@H@Z @ 0xBCE06 (-FillCaptionGradient@@YGXPAUHDC__@@PBUtagRECT@@H@Z.c)
 *     ?DrawGroove@@YGXPAUHDC__@@PAUHBRUSH__@@PAUtagRECT@@H@Z @ 0xC1DEE (-DrawGroove@@YGXPAUHDC__@@PAUHBRUSH__@@PAUtagRECT@@H@Z.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     _xxxDesktopPaintCallback@16 @ 0xE9858 (_xxxDesktopPaintCallback@16.c)
 *     _PaintScreenBackground@0 @ 0xEBE5C (_PaintScreenBackground@0.c)
 *     ?DrawSonar@@YGXPAUHDC__@@@Z @ 0x1532D7 (-DrawSonar@@YGXPAUHDC__@@@Z.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 *     ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33 (-xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z.c)
 *     ?GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z @ 0x19CF18 (-GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z.c)
 *     ?xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z @ 0x1A0FFC (-xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z.c)
 *     ?BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z @ 0x1A4FE9 (-BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z @ 0x1A5106 (-DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z.c)
 * Callees:
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 */

int __stdcall FillRect(HDC a1, LPCRECT a2, HBRUSH a3)
{
  int *v3; // edx
  HDC v4; // ecx
  HDC v5; // esi
  int *v6; // ebx
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  _DWORD v11[5]; // [esp+Ch] [ebp-18h] BYREF
  HDC v12; // [esp+20h] [ebp-4h]

  v5 = a1;
  v6 = v3;
  v12 = v4;
  if ( (unsigned int)a1 - 1 <= 0x1E )
    v5 = *(HDC *)(_gpsi + 4 * ((_DWORD)a1 - 1) + 4292);
  v7 = *v3;
  v8 = v3[1];
  v11[2] = v6[2] - *v6;
  v9 = v6[3] - v8;
  v11[0] = v7;
  v11[3] = v9;
  v11[1] = v8;
  v11[4] = v5;
  return GrePolyPatBlt(v12, (struct XDCOBJ *)v11, 1u, v7);
}
