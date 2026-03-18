/*
 * XREFs of UpdateSprite @ 0x1C003CF2C
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C003CC6C (_SetLayeredWindowAttributes.c)
 *     OffsetWindow @ 0x1C003F2F0 (OffsetWindow.c)
 *     UnsetLayeredWindow @ 0x1C00C0BC4 (UnsetLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateSpriteArea @ 0x1C0150100 (UpdateSpriteArea.c)
 *     xxxCompositedPaint @ 0x1C023E150 (xxxCompositedPaint.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C003D068 (GreUpdateSprite.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C003D148 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall UpdateSprite(
        HDEV a1,
        struct tagWND *a2,
        __int64 a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        int a11,
        struct tagRECT *a12)
{
  int v14; // eax
  _BYTE v18[144]; // [rsp+90h] [rbp-D8h] BYREF

  memset(v18, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v18);
  v14 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreUpdateSprite(
                         a1,
                         *(HWND *)a2,
                         0LL,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         a10,
                         (void *)a11,
                         a12,
                         (struct tagMINIWINDOWINFO *)v18,
                         v14,
                         0) == 0
       ? 0x803F0001
       : 0;
}
