/*
 * XREFs of ?IsSizingRIGHT@@YGEH@Z @ 0x171950
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0x171265 (-HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRE.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall IsSizingRIGHT(void *this)
{
  return this == (void *)5 || this == (void *)8 || this == (void *)2;
}
