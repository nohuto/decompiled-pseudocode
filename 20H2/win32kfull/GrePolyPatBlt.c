/*
 * XREFs of GrePolyPatBlt @ 0x1C0037B68
 * Callers:
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0033824 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 *     DrawFrameControl @ 0x1C0036FB0 (DrawFrameControl.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0037408 (-UT_InvertCaret@@YAXXZ.c)
 *     DrawEdge @ 0x1C00375E4 (DrawEdge.c)
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C008FBB4 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011CD38 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     DrawFrame @ 0x1C014F4A8 (DrawFrame.c)
 *     DrawSize @ 0x1C0244FE0 (DrawSize.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C024B710 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     xxxMenuBarDraw @ 0x1C024CF74 (xxxMenuBarDraw.c)
 *     xxxDrawState @ 0x1C02507A4 (xxxDrawState.c)
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C025D6F8 (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 *     ClientFrame @ 0x1C025DAA0 (ClientFrame.c)
 * Callees:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009D960 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
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
