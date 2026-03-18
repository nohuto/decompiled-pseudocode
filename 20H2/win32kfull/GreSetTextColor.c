/*
 * XREFs of GreSetTextColor @ 0x1C0092300
 * Callers:
 *     FinalUserInit @ 0x1C00230A4 (FinalUserInit.c)
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 *     DrawPushButton @ 0x1C0037338 (DrawPushButton.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C008FBB4 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C00913B8 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     BltIcon @ 0x1C0092070 (BltIcon.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0113820 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011CD38 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     RecolorDeskPattern @ 0x1C012D450 (RecolorDeskPattern.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014CB44 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C014DC4C (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F2600 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0222DE0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022B830 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0242B4C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B418 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     BltColor @ 0x1C025065C (BltColor.c)
 *     xxxDrawState @ 0x1C02507A4 (xxxDrawState.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetTextColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  v8 = 0;
  v9 = 0;
  v3 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v7, a1);
  if ( v7 )
  {
    v4 = *(_QWORD *)(v7 + 976);
    v3 = *(_DWORD *)(v4 + 188);
    *(_DWORD *)(v4 + 188) = a2;
    v5 = a2 & 0x13FFFFFF;
    if ( v5 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v7 + 976) + 184LL) = v5;
      *(_DWORD *)(*(_QWORD *)(v7 + 976) + 152LL) |= 7u;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v7);
  }
  return v3;
}
