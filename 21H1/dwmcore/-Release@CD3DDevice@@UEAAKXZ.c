/*
 * XREFs of ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x18000C30C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x180027438 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18002BA70 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180031370 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180032214 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180032370 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x180045940 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18004F430 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18008BC74 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18008CF18 (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x1800938D8 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800A2B0C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1800A42F8 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x1800A43CC (--4-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800C2318 (-CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@@Z @ 0x1800C7514 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@@Z.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800CF6C8 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x1800D4088 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1800D49FC (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800D4BE0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800DE330 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1800DEB5C (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 *     ?Release@CD3DDevice@@WBA@EAAKXZ @ 0x1800EE5F0 (-Release@CD3DDevice@@WBA@EAAKXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016856C (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18016C8A0 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18017A588 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180189880 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18018A1CC (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18018B7D0 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018D914 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18018DE54 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x18018E7CC (--1CLocalAppRenderTarget@@MEAA@XZ.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18018F5E8 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x180191C60 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x180198CBC (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180199A6C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x18019CF30 (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x1801A9EB4 (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BD418 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801C6AA4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1801C8E48 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801F56DC (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801FC754 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@2@AEAUDDisplayTaskPoolResources@@AEAUDDisplayVBlankFenceResources@@AEAUDDisplayTargetResources@@AEAV?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180242D7C (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Win.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802433FC (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180244534 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?Present@CDDASwapChain@@UEAAJII@Z @ 0x180251650 (-Present@CDDASwapChain@@UEAAJII@Z.c)
 *     ??1CCompSwapChain@@MEAA@XZ @ 0x180251AF4 (--1CCompSwapChain@@MEAA@XZ.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x18026663C (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180266E90 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802674FC (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18006A044 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800CC60C (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 */

unsigned int __fastcall CD3DDevice::Release(CD3DDevice *this)
{
  if ( *((_DWORD *)this + 2) == 2 )
  {
    *((_QWORD *)this + 178) = GetCurrentFrameId() + 5;
    ScheduleCompositionPass(1000LL, 0x20000LL);
  }
  return CRenderTargetBitmap::Release(this);
}
