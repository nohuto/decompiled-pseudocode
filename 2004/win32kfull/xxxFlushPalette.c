/*
 * XREFs of xxxFlushPalette @ 0x1C0235C30
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C00BBEF8 (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0235B80 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
