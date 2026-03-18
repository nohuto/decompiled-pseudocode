/*
 * XREFs of xxxFlushPalette @ 0x1C0234DA0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C0121FD0 (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0234CF0 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(__int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
