/*
 * XREFs of _GreCreateSprite@44 @ 0x1F6C0
 * Callers:
 *     _CreateSprite@16 @ 0x1F5C2 (_CreateSprite@16.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     _bSetDevPreviewRect@24 @ 0x1E3D0B (_bSetDevPreviewRect@24.c)
 * Callees:
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

void *__stdcall GreCreateSprite(
        HDEV a1,
        HWND a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  void *SpriteInternal; // esi
  int v11; // [esp+0h] [ebp-Ch]
  const unsigned __int16 *v12; // [esp+4h] [ebp-8h]
  int v13; // [esp+8h] [ebp-4h] BYREF

  v13 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  SpriteInternal = GreCreateSpriteInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, v11, v12);
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return SpriteInternal;
}
