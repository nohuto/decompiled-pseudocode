/*
 * XREFs of ?PasteScreenPalette@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181F15
 * Callers:
 *     ?MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181D0D (-MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z @ 0x181B81 (-InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z.c)
 *     _CreateScreenPalette@12 @ 0x1A1F93 (_CreateScreenPalette@12.c)
 */

void __thiscall PasteScreenPalette(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h] BYREF
  struct tagWINDOWSTATION *v5; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  v5 = 0;
  if ( CreateScreenPalette(*(_DWORD *)(_gpDispInfo + 28), &v4, &v5) >= 0 )
  {
    InternalSetClipboardData(9, this, v5, 0, (void *)1, v2, v3);
    GreSetPaletteOwner(v5, 0);
    Win32FreePool(v4);
  }
}
