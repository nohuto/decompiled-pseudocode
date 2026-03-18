/*
 * XREFs of ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020BCCC
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020ADCC (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F894 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInThresholdAlways(struct _MOVESIZEDATA *a1)
{
  int v1; // r8d
  int v2; // eax

  v1 = *((_DWORD *)a1 + 49) >> 15;
  if ( (v1 & 7u) - 2 <= 1 )
  {
    v2 = v1 - 2;
  }
  else
  {
    if ( (v1 & 7u) - 4 > 1 )
      return;
    v2 = v1 - 4;
  }
  *((_DWORD *)a1 + 49) ^= (*((_DWORD *)a1 + 49) ^ (v2 << 15)) & 0x38000;
}
