/*
 * XREFs of ?vLock@PIDLOCKSPRITEAREA@@QAEXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1DFB7F
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z @ 0x3046E (-vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z @ 0x1DAB6D (-GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 * Callees:
 *     ?vSpPIDLockSpriteArea@@YG?AW4SurfaceMapStatus@SURFACE@@PAU_SPRITESTATE@@PAU_RECTL@@PAX@Z @ 0x1E18AF (-vSpPIDLockSpriteArea@@YG-AW4SurfaceMapStatus@SURFACE@@PAU_SPRITESTATE@@PAU_RECTL@@PAX@Z.c)
 */

void __thiscall PIDLOCKSPRITEAREA::vLock(PIDLOCKSPRITEAREA *this, struct _SPRITESTATE *a2, struct _RECTL *a3)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  if ( a3->left != a3->right && a3->top != a3->bottom )
  {
    *(_DWORD *)this = a2;
    *(struct _RECTL *)((char *)this + 4) = *a3;
    if ( vSpPIDLockSpriteArea(this) == 2 )
      *(_DWORD *)this = 0;
  }
}
