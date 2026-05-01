/*
 * XREFs of ?HitTest@DragData@@UEAA?AUDropTarget@WindowArrangementViewDragData@@AEBUCPoint@Geometry@@@Z @ 0x1804182A0
 * Callers:
 *     ?UpdateFeedbackTarget@DragData@@UEAAXUtagPOINT@@UtagRECT@@W4PlaceModeFeedbackType@@PEA_N@Z @ 0x180418AB0 (-UpdateFeedbackTarget@DragData@@UEAAXUtagPOINT@@UtagRECT@@W4PlaceModeFeedbackType@@PEA_N@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1803A0E68 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall DragData::HitTest(__int64 a1, __int64 a2, const struct tagPOINT *a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r11

  v3 = *(_QWORD *)(a1 + 112);
  v4 = a2;
  v5 = v3 + 24LL * *(_QWORD *)(a1 + 120);
  while ( 1 )
  {
    if ( v3 == v5 )
    {
      *(_DWORD *)v4 = -1;
      *(_OWORD *)(v4 + 4) = 0LL;
      *(_BYTE *)(v4 + 20) = 0;
      return v4;
    }
    if ( *(_BYTE *)(v3 + 20) && Geometry::CRect::Contains((Geometry::CRect *)(v3 + 4), a3) )
      break;
    v3 += 24LL;
  }
  *(_OWORD *)v4 = *(_OWORD *)v3;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 16);
  return v4;
}
