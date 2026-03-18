/*
 * XREFs of ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44
 * Callers:
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000B668 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000C020 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000D7B0 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x180020D00 (-DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z.c)
 *     ?ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ @ 0x180021A50 (-ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800265B8 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800269E8 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180028B10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18002B328 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18002B8C4 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x1800303C0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MMPEAPEAVCD2DBitmap@@@Z @ 0x180030A38 (-CreateD2DBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x18008C504 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@IEAAJXZ @ 0x18008DED4 (-EnsureVisualTree@CCachedVisualImage@@IEAAJXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ @ 0x18008EDE0 (-UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008F7C8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180093BA4 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?CalcMaxTextureSize@CD3DDevice@@AEAAXXZ @ 0x1800A41D0 (-CalcMaxTextureSize@CD3DDevice@@AEAAXXZ.c)
 *     ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x1800B93C8 (-GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1800BA464 (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800C8200 (-SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?ReleaseD2DResources@CD2DBitmap@@MEAAXXZ @ 0x1800D3FD0 (-ReleaseD2DResources@CD2DBitmap@@MEAAXXZ.c)
 *     ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x1800D61A0 (-Initialize@CLegacySwapChain@@MEAAJXZ.c)
 *     ?ResetBackBuffer@CLegacySwapChain@@MEAAJXZ @ 0x1800D65C0 (-ResetBackBuffer@CLegacySwapChain@@MEAAJXZ.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800D685C (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800D69BC (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x1800D6E90 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800D7BBC (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800DE524 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRen.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800DE8C0 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800E6E24 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CopyBitmapRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID2D1Bitmap1@@@Z @ 0x1800EB980 (-CopyBitmapRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID2D1Bitmap1@@@Z.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18018B7D0 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x18018C754 (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018D914 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180192030 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801941D0 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x18019B8AC (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x18019F984 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x18019FDA0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 *     ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x1801A3090 (-Render@CSpectreCallbackRenderer@@UEAAJXZ.c)
 *     ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x1801AFBCC (-SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1801AFC70 (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilSt.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x1801B6850 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagR.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x180211868 (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x180211ED0 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180212044 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     GetStagingTexture @ 0x180212448 (GetStagingTexture.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18023FB00 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 *     ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x180244A8C (-CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTarget.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802499C0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x180249DC8 (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?CreateD3D12Resource@CLegacySwapChain@@QEBAJIPEAPEAUID3D12Resource@@@Z @ 0x18024A740 (-CreateD3D12Resource@CLegacySwapChain@@QEBAJIPEAPEAUID3D12Resource@@@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18024F3AC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18024FC04 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180250438 (-GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAUIDXGIResource@@PEAUD2D_SIZE_U@@P.c)
 *     ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802513F8 (-Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x180252158 (-Initialize@CCompSwapChain@@IEAAJXZ.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x1802526BC (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180264BB4 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180264EE4 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?MarkFullDirty@CSectionBitmapRealization@@UEAAXXZ @ 0x180267EC4 (-MarkFullDirty@CSectionBitmapRealization@@UEAAXXZ.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180269250 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUnique.c)
 *     ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18026A2C0 (-GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
