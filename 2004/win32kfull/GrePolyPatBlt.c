/*
 * XREFs of GrePolyPatBlt @ 0x1C0062084
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0060C90 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0061924 (-UT_InvertCaret@@YAXXZ.c)
 *     DrawEdge @ 0x1C0061B00 (DrawEdge.c)
 *     FillRect @ 0x1C0062024 (FillRect.c)
 *     DrawFrameControl @ 0x1C00623A8 (DrawFrameControl.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0062C10 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     _DrawIconEx @ 0x1C0063888 (_DrawIconEx.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011BD78 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     DrawFrame @ 0x1C014CC98 (DrawFrame.c)
 *     DrawSize @ 0x1C0246280 (DrawSize.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C024CD18 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C024E57C (xxxMenuBarDraw.c)
 *     xxxDrawState @ 0x1C0251DB4 (xxxDrawState.c)
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C025ED0C (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 *     ClientFrame @ 0x1C025F0B4 (ClientFrame.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086DC0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4)
{
  unsigned int v5; // ebx
  _QWORD v9[2]; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0;
  v9[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v5 = GrePolyPatBltInternal(
           (struct XDCOBJ *)v9,
           a2,
           a3,
           a4,
           0,
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 184LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 176LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 188LL),
           *(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 180LL));
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v5;
}
