/*
 * XREFs of ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x18005D298
 * Callers:
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18005D0B4 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180079A00 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1801E0CD8 (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RenderTargetInfo::IsHDR(RenderTargetInfo *this)
{
  return *((float *)this + 4) != 0.0;
}
