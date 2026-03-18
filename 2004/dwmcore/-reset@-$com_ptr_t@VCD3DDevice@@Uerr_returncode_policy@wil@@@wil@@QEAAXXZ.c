/*
 * XREFs of ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18003CA70
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x18000FFA0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x180024E10 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180033A88 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18003422C (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18003C490 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003C90C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18004B0A4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18004C100 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180062434 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007B624 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18008FFF8 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180092F94 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800C91B8 (-CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800D7628 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@@Z @ 0x1800D9DF0 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@@Z.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800DF990 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1800E7FF8 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlip.c)
 *     ?NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ @ 0x1800E813C (-NotifyDeviceInvalid@CDeviceManager@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180169DD4 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18016A4B0 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x180177978 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180186AC0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18018740C (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180188AD4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018ABA4 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ @ 0x18018BBAC (-EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ.c)
 *     ?ReleaseSwapChain@CLocalAppRenderTarget@@IEAAXXZ @ 0x18018C01C (-ReleaseSwapChain@CLocalAppRenderTarget@@IEAAXXZ.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18018C8F8 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x18018F090 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x1801960EC (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180196E9C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x18019A350 (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801C4174 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1801C6518 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801F9D94 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180241B04 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180263BCC (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180264420 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180264A8C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 */

int __fastcall wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(CD3DDevice **a1)
{
  CD3DDevice *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = CD3DDevice::Release(v1);
  return (int)v1;
}
