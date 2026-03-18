/*
 * XREFs of _UpdateSprite@48 @ 0x2B1AA
 * Callers:
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     __SetLayeredWindowAttributes@16 @ 0x1FB1E (__SetLayeredWindowAttributes@16.c)
 *     _OffsetWindow@16 @ 0x2AF60 (_OffsetWindow@16.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     _UpdateSpriteArea@44 @ 0xC4700 (_UpdateSpriteArea@44.c)
 *     _xxxCompositedPaint@4 @ 0x19D911 (_xxxCompositedPaint@4.c)
 * Callees:
 *     _GreUpdateSprite@60 @ 0x2B28E (_GreUpdateSprite@60.c)
 *     ?InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z @ 0x2B2EE (-InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall UpdateSprite(
        int a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // eax
  struct tagWND *v14; // [esp+0h] [ebp-B4h]
  struct tagMINIWINDOWINFO *v15; // [esp+4h] [ebp-B0h]
  _BYTE v18[140]; // [esp+24h] [ebp-90h] BYREF

  memset(v18, 0, 0x84u);
  InitializeMiniWinInfo(v14, v15);
  v12 = IsWindowDesktopComposed(a2);
  return GreUpdateSprite(a1, *a2, 0, a4, a5, a6, a7, a8, a9, a10, a11, a12, v18, v12, 0) != 0 ? 0 : -2143354879;
}
