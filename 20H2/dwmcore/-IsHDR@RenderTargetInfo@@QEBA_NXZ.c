/*
 * XREFs of ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x18006B420
 * Callers:
 *     ?FindExistingCachedTarget@CCachedVisualImage@@AEAAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x18006B358 (-FindExistingCachedTarget@CCachedVisualImage@@AEAAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x18007A150 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18009BD18 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800C87F8 (-CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1800E9998 (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018C3DC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     <none>
 */

bool __fastcall RenderTargetInfo::IsHDR(RenderTargetInfo *this)
{
  return *((float *)this + 4) != 0.0;
}
