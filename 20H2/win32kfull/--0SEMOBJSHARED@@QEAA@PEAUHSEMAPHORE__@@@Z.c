/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00C3338
 * Callers:
 *     bSetDevDragRect @ 0x1C002A4E0 (bSetDevDragRect.c)
 *     GreOnCURSINFODestroy @ 0x1C009357C (GreOnCURSINFODestroy.c)
 *     GrePtInSprite @ 0x1C00C2CB8 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C00C2E64 (GreDwmGetSurfaceData.c)
 *     GreMovePointer @ 0x1C00C4410 (GreMovePointer.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C0126150 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012AFF0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C015876C (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026ED34 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026F8FC (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C0285128 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C02853FC (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C02855DC (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C029E150 (GreSaveScreenBits.c)
 * Callees:
 *     <none>
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphoreSharedInternal(a2);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  return this;
}
