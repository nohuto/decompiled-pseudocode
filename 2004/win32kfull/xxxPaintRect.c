/*
 * XREFs of xxxPaintRect @ 0x1C0061E74
 * Callers:
 *     xxxFillWindow @ 0x1C0061DEC (xxxFillWindow.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1C0061F44 (GreSetBrushOrg.c)
 *     FillRect @ 0x1C0062024 (FillRect.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     xxxGetControlColor @ 0x1C0143EEC (xxxGetControlColor.c)
 */

__int64 __fastcall xxxPaintRect(__int64 a1, __int64 a2, HDC a3, HBRUSH ControlColor, LPCRECT a5)
{
  __int64 v7; // rbx

  v7 = a1;
  if ( !a1 )
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  GetDesktopWindow(v7);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v7);
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
