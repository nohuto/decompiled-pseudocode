/*
 * XREFs of GreSetBkColor @ 0x1C0063FA4
 * Callers:
 *     FinalUserInit @ 0x1C000AA3C (FinalUserInit.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     DrawPushButton @ 0x1C0061854 (DrawPushButton.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0062C10 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     BltIcon @ 0x1C0063C80 (BltIcon.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     RecolorDeskPattern @ 0x1C012B560 (RecolorDeskPattern.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014A314 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3270 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022C6C0 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0243DEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024CA20 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     BltColor @ 0x1C0251C6C (BltColor.c)
 *     xxxDrawState @ 0x1C0251DB4 (xxxDrawState.c)
 *     xxxPSMTextOut @ 0x1C02540DC (xxxPSMTextOut.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetBkColor(HDC a1, int a2)
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
    v3 = *(_DWORD *)(v4 + 180);
    *(_DWORD *)(v4 + 180) = a2;
    v5 = a2 & 0x13FFFFFF;
    if ( v5 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = v5;
      *(_DWORD *)(*(_QWORD *)(v7 + 976) + 152LL) |= 0xBu;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v7);
  }
  return v3;
}
