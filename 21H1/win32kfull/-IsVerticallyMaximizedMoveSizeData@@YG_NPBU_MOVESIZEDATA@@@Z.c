/*
 * XREFs of ?IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x17197A
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0x171265 (-HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRE.c)
 *     ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE (-HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtagMONITOR@@H@Z @ 0x174001 (-xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtag.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall IsVerticallyMaximizedMoveSizeData(_DWORD *this)
{
  return (this[46] & 0x300) == 768;
}
