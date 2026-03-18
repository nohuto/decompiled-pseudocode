/*
 * XREFs of ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0069E5C
 * Callers:
 *     GrePtInSprite @ 0x1C002D0E8 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C002D294 (GreDwmGetSurfaceData.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C004E1E0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0069C9C (GreRedrawSpriteOverlapPresent.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0270354 (GreDwmGetRedirectionStyle.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0280FB0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

SEMOBJEXORSHARED *__fastcall SEMOBJEXORSHARED::SEMOBJEXORSHARED(
        SEMOBJEXORSHARED *this,
        HSEMAPHORE a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = a2;
  if ( (_DWORD)a3 == 1 )
  {
    GreAcquireSemaphoreSharedInternal(a2, a2, a3, a4);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  }
  else
  {
    GreAcquireSemaphore(a2);
  }
  return this;
}
