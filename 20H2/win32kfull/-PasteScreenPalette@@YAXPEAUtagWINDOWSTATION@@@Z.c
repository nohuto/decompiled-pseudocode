/*
 * XREFs of ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C021E990
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0015F18 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C0015D38 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     CreateScreenPalette @ 0x1C024384C (CreateScreenPalette.c)
 */

void __fastcall PasteScreenPalette(struct tagWINDOWSTATION *a1)
{
  if ( (int)CreateScreenPalette(*(HDC *)(gpDispInfo + 56LL)) >= 0 )
  {
    InternalSetClipboardData(a1, 9u, 0LL, 0, 1);
    GreSetPaletteOwner(0LL, 0LL);
    Win32FreePool(0LL);
  }
}
