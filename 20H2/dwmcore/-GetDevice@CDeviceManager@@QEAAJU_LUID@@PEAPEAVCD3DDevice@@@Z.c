/*
 * XREFs of ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006A610
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x180031C40 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003D42C (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x1800466E0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180047BAC (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800C87F8 (-CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800DFC00 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1800E8A04 (-GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlip.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180167FD4 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180184E40 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180186E54 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180188F24 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180189464 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18018AC78 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x18018D410 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x1801986D0 (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180235F38 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180235FBC (-GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180240B74 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z @ 0x180255080 (-Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180262DEC (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x180263640 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180263CAC (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003B31C (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005ACE4 (-GetAvailableDevice@CDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CDeviceManager::GetDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  CDeviceManager *v5; // rcx
  int AvailableDevice; // eax
  CDeviceManager *v7; // rcx
  unsigned int v8; // ebx
  int NewDevice; // eax
  __int64 v11; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v12 = &stru_180348570;
  EnterCriticalSection(&stru_180348570);
  AvailableDevice = CDeviceManager::GetAvailableDevice(v5, a2, a3);
  if ( AvailableDevice )
  {
    v8 = -2003304307;
    if ( AvailableDevice != 2 )
      v8 = 0;
  }
  else
  {
    NewDevice = CDeviceManager::CreateNewDevice(v7, a2, a3);
    v8 = NewDevice;
    if ( NewDevice < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802AA538, 2u, NewDevice, 0xABu, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v8;
}
