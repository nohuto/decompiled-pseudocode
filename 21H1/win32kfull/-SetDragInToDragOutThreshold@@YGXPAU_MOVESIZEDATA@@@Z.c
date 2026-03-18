/*
 * XREFs of ?SetDragInToDragOutThreshold@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17210F
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0x171265 (-HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRE.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall SetDragInToDragOutThreshold(_DWORD *this)
{
  if ( (this[46] & 0x38000) == 0 || (this[46] & 0x38000) == 0x8000 )
    this[46] ^= (this[46] ^ (this[46] + 0x10000)) & 0x38000;
}
