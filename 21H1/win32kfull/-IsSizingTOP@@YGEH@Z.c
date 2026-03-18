/*
 * XREFs of ?IsSizingTOP@@YGEH@Z @ 0x171965
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0x171265 (-HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRE.c)
 *     ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE (-HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z @ 0x171F4C (-PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall IsSizingTOP(void *this)
{
  return this == (void *)3 || this == (void *)4 || this == (void *)5;
}
