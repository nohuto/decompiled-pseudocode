/*
 * XREFs of xxxPaintRect @ 0x1C0037958
 * Callers:
 *     xxxFillWindow @ 0x1C00378D0 (xxxFillWindow.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1C0037A28 (GreSetBrushOrg.c)
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxGetControlColor @ 0x1C014651C (xxxGetControlColor.c)
 */

__int64 __fastcall xxxPaintRect(struct tagWND *a1, __int64 a2, HDC a3, HBRUSH ControlColor, LPCRECT a5)
{
  struct tagWND *v7; // rbx

  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  GetDesktopWindow(v7);
  GreSetBrushOrg(a3);
  if ( (unsigned __int64)ControlColor < 7 )
    ControlColor = (HBRUSH)xxxGetControlColor(v7);
  FillRect(a3, a5, ControlColor);
  GreSetBrushOrg(a3);
  return 1LL;
}
