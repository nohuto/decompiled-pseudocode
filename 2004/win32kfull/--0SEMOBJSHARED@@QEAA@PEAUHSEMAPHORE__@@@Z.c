/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C002D58C
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00093D8 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreMovePointer @ 0x1C002B390 (GreMovePointer.c)
 *     GrePtInSprite @ 0x1C002D0E8 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C002D294 (GreDwmGetSurfaceData.c)
 *     bSetDevDragRect @ 0x1C004BF00 (bSetDevDragRect.c)
 *     GreOnCURSINFODestroy @ 0x1C00AFADC (GreOnCURSINFODestroy.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C0124E60 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C0155E0C (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0270354 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270F1C (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C0286698 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C028696C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0286B4C (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C029F5A0 (GreSaveScreenBits.c)
 * Callees:
 *     <none>
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphoreSharedInternal(a2, a2, a3, a4);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  return this;
}
