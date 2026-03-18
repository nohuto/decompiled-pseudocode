/*
 * XREFs of ??0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z @ 0x2350A
 * Callers:
 *     _GreDwmGetSurfaceData@12 @ 0x2320E (_GreDwmGetSurfaceData@12.c)
 *     _GrePtInSprite@24 @ 0x23540 (_GrePtInSprite@24.c)
 *     _GreRedrawSpriteOverlapPresent@4 @ 0x303E4 (_GreRedrawSpriteOverlapPresent@4.c)
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     _GreDwmGetRedirectionStyle@12 @ 0x1CE113 (_GreDwmGetRedirectionStyle@12.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 * Callees:
 *     <none>
 */

SEMOBJEXORSHARED *__thiscall SEMOBJEXORSHARED::SEMOBJEXORSHARED(SEMOBJEXORSHARED *this, HSEMAPHORE a2, int a3)
{
  *(_DWORD *)this = a2;
  if ( a3 == 1 )
  {
    GreAcquireSemaphoreSharedInternal(a2);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_DWORD *)this);
  }
  else
  {
    GreAcquireSemaphore(a2);
  }
  return this;
}
