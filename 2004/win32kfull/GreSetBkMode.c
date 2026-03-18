/*
 * XREFs of GreSetBkMode @ 0x1C00626AC
 * Callers:
 *     FinalUserInit @ 0x1C000AA3C (FinalUserInit.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     DrawFrameControl @ 0x1C00623A8 (DrawFrameControl.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223C70 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0243DEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 *     xxxDrawState @ 0x1C0251DB4 (xxxDrawState.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetBkMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v6[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_QWORD *)(v6[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 224);
    *(_DWORD *)(v4 + 224) = a2;
    if ( (unsigned int)(a2 - 1) > 1 )
      LOBYTE(a2) = 1;
    *(_BYTE *)(*(_QWORD *)(v6[0] + 976LL) + 213LL) = a2;
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v3;
}
