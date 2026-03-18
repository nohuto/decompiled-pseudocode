/*
 * XREFs of ??0SPRITEDDIACCESS@@QAE@AAVPDEVOBJ@@@Z @ 0x304FA
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z @ 0x3046E (-vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 *     ?vSpDeleteSprite@@YGXPAVSPRITE@@@Z @ 0x9ECB4 (-vSpDeleteSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z @ 0x9F136 (-pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z @ 0x9F37A (-pSpHintSpriteShape@@YGHPAVSPRITE@@PAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     ?vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z @ 0x9FC56 (-vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z.c)
 *     ?vSpHideSprites@@YGXPAUHDEV__@@H@Z @ 0xACFC2 (-vSpHideSprites@@YGXPAUHDEV__@@H@Z.c)
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z @ 0x1DAB6D (-GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1DB0D0 (-GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?bSpPtInSprite@@YGHPAVSPRITE@@HH@Z @ 0x1DE2FD (-bSpPtInSprite@@YGHPAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DE451 (-bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z @ 0x1DF19D (-pSpConvertSpriteToMeta@@YGPAU_METASPRITE@@PAUHDEV__@@0PAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z @ 0x1DF57A (-pSpTransferMetaSprite@@YGPAU_METASPRITE@@PAUHDEV__@@0PAU1@@Z.c)
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 * Callees:
 *     ?bCurrentTlDriverCall@@YGHAAVPDEVOBJ@@@Z @ 0x3032C (-bCurrentTlDriverCall@@YGHAAVPDEVOBJ@@@Z.c)
 *     ?vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z @ 0x3061A (-vSpDirectDriverAccess@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

SPRITEDDIACCESS *__thiscall SPRITEDDIACCESS::SPRITEDDIACCESS(SPRITEDDIACCESS *this, struct PDEVOBJ *a2)
{
  int v4; // esi
  int *ThreadWin32Thread; // eax
  int v6; // esi
  int *v7; // eax
  PKTHREAD v8; // eax
  int v9; // eax
  PKTHREAD v10; // eax
  struct _SPRITESTATE *v12; // [esp+0h] [ebp-Ch]
  int v13; // [esp+4h] [ebp-8h]
  struct PDEVOBJ *CurrentThread; // [esp+14h] [ebp+8h]
  struct PDEVOBJ *v15; // [esp+14h] [ebp+8h]

  *(_DWORD *)this = *(_DWORD *)a2 + 64;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  *((_DWORD *)this + 2) = 0;
  if ( v4 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v4 + 52) || *(_DWORD *)(v4 + 56)) )
  {
    v15 = KeGetCurrentThread();
    v6 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v7 = (int *)PsGetThreadWin32Thread(v15);
      if ( v7 )
        v6 = *v7;
    }
    if ( *(_DWORD *)(*(_DWORD *)(v6 + 156) + 28) == *(_DWORD *)this )
    {
      v8 = KeGetCurrentThread();
      v9 = **(_DWORD **)(W32GetThreadWin32Thread(v8) + 156);
    }
    else
    {
      v9 = 0;
    }
    *((_DWORD *)this + 1) = v9;
    *((_DWORD *)this + 2) = bCurrentTlDriverCall(a2);
  }
  else
  {
    *((_DWORD *)this + 1) = *(_DWORD *)(*(_DWORD *)this + 56);
  }
  if ( *((_DWORD *)this + 2) == 1 )
  {
    v10 = KeGetCurrentThread();
    qmemcpy((char *)this + 12, *(const void **)(W32GetThreadWin32Thread(v10) + 156), 0x60u);
  }
  if ( !*((_DWORD *)this + 1) )
    vSpDirectDriverAccess(v12, v13);
  return this;
}
