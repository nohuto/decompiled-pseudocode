/*
 * XREFs of ?IsSemiMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x171919
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE (-HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     <none>
 */

bool __thiscall IsSemiMaximizedMoveSizeData(_DWORD *this)
{
  return (this[46] & 0x300) != 0;
}
