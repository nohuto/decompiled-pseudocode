/*
 * XREFs of ?SetDragOutToDragInThreshold@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17217D
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE (-HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall SetDragOutToDragInThreshold(_DWORD *this)
{
  int v1; // eax

  v1 = (this[46] >> 15) & 7;
  if ( v1 == 2 || v1 == 3 )
    this[46] ^= (this[46] ^ (((this[46] >> 15) - 2) << 15)) & 0x38000;
}
