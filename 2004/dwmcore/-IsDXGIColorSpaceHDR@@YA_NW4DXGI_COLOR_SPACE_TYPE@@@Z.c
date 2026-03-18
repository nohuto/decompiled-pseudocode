/*
 * XREFs of ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180033C64
 * Callers:
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800334EC (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180033A88 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBA?AW4ParallelModePolicy@@XZ @ 0x180033BE8 (-GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBA-AW4ParallelModePolicy@@XZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18007CDF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x1800DB0DC (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180184544 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180188AD4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018ABA4 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018E05C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18019122C (-Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@P.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180196B04 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x180256FF8 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180033C8C (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall IsDXGIColorSpaceHDR(enum DXGI_COLOR_SPACE_TYPE a1)
{
  bool v1; // al
  char v2; // cl

  if ( a1 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    return 1;
  v1 = IsDXGIColorSpaceRec2020(a1);
  v2 = 0;
  if ( v1 )
    return 1;
  return v2;
}
