/*
 * XREFs of ?DisableTemporayMetricsOverrides@@YGXPAU_MOVESIZEDATA@@@Z @ 0x171025
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE (-HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall DisableTemporayMetricsOverrides(_DWORD *this)
{
  int v1; // eax

  v1 = this[46];
  if ( (v1 & 0x400000) != 0 )
  {
    v1 &= 0xFFBFFBFF;
    this[46] = v1;
  }
  if ( (v1 & 0x800000) != 0 )
    this[46] = v1 & 0xFF7FF7FF;
}
