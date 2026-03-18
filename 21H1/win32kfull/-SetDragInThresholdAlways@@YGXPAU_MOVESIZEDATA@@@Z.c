/*
 * XREFs of ?SetDragInThresholdAlways@@YGXPAU_MOVESIZEDATA@@@Z @ 0x1720CE
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE (-HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall SetDragInThresholdAlways(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax

  v1 = this[46] >> 15;
  v2 = v1 & 7;
  if ( v2 == 2 || v2 == 3 )
  {
    v3 = v1 - 2;
    goto LABEL_7;
  }
  if ( v2 == 4 || v2 == 5 )
  {
    v3 = v1 - 4;
LABEL_7:
    this[46] ^= (this[46] ^ (v3 << 15)) & 0x38000;
  }
}
