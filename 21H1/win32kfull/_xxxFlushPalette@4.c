/*
 * XREFs of _xxxFlushPalette@4 @ 0x1962C9
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 * Callees:
 *     _GreRealizeDefaultPalette@8 @ 0x12656 (_GreRealizeDefaultPalette@8.c)
 *     _xxxBroadcastPaletteChanged@8 @ 0x196256 (_xxxBroadcastPaletteChanged@8.c)
 */

size_t __stdcall xxxFlushPalette(struct tagWND **a1)
{
  GreRealizeDefaultPalette(*(HDC *)(_gpDispInfo + 28));
  return xxxBroadcastPaletteChanged(a1, 1);
}
