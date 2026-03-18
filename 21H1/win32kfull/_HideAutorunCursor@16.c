/*
 * XREFs of _HideAutorunCursor@16 @ 0x143392
 * Callers:
 *     <none>
 * Callees:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

void __stdcall HideAutorunCursor(int a1, int a2, int a3, int a4)
{
  FindTimer(0, gtmridAutorunCursor, 4u, 1, 0);
  gtmridAutorunCursor = 0;
  zzzUpdateCursorImage();
}
