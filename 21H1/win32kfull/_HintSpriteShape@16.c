/*
 * XREFs of _HintSpriteShape@16 @ 0x23F60
 * Callers:
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     ?RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z @ 0x1534DB (-RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z.c)
 *     _UserRecreateRedirectionBitmap@4 @ 0x1539FA (_UserRecreateRedirectionBitmap@4.c)
 * Callees:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     ?InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z @ 0x2B2EE (-InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __fastcall HintSpriteShape(int a1, _DWORD *a2, int a3, int a4)
{
  int v6; // eax
  struct tagWND *v8; // [esp+0h] [ebp-90h]
  struct tagMINIWINDOWINFO *v9; // [esp+4h] [ebp-8Ch]
  _BYTE v10[136]; // [esp+8h] [ebp-88h] BYREF

  memset(v10, 0, 0x84u);
  InitializeMiniWinInfo(v8, v9);
  v6 = IsWindowDesktopComposed(a2);
  return GreHintSpriteShape(a1, *a2, a3, v10, a4, v6, 1) != 0;
}
