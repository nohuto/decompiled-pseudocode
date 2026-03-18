/*
 * XREFs of HintSpriteShape @ 0x1C001F104
 * Callers:
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E7E1C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E8650 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C001F3C4 (GreHintSpriteShape.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C002040C (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

_BOOL8 __fastcall HintSpriteShape(HDEV a1, struct tagWND *a2, HBITMAP a3, int a4)
{
  int v8; // eax
  _BYTE v10[144]; // [rsp+40h] [rbp-98h] BYREF

  memset(v10, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v10);
  v8 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreHintSpriteShape(a1, *(HWND *)a2, a3, a4, v8, 1) != 0;
}
