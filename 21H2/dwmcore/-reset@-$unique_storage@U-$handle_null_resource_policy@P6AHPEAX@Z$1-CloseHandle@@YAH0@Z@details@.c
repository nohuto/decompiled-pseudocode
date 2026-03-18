/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C
 * Callers:
 *     ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x18002A648 (-EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ.c)
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x18002CBA4 (-Start@CKstBase@@AEAAJPEBG@Z.c)
 *     ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x18002CC5C (--0CDwmRenderThreadWatchdog@@QEAA@XZ.c)
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x18002D910 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ?CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ @ 0x18002DA98 (-CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x180031018 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18003D168 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18003DAFC (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ?GetOcclusionEvent@CDisplayManager@@QEAAPEAXXZ @ 0x18007A4A0 (-GetOcclusionEvent@CDisplayManager@@QEAAPEAXXZ.c)
 *     ?EnsureWatchdogInitialized@CWatchdogTimer@@AEAAXXZ @ 0x18007AB14 (-EnsureWatchdogInitialized@CWatchdogTimer@@AEAAXXZ.c)
 *     ?SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1800D7010 (-SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DD5DC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?StartCompositionThread@CConnection@@AEAAJH@Z @ 0x1800F3E8C (-StartCompositionThread@CConnection@@AEAAJH@Z.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800FDE40 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800FE0C4 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180194B78 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x1801C50C0 (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x1801C51DC (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801C85C0 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_CREATE@@@Z @ 0x1801C8AAC (-ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGE.c)
 *     ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z @ 0x1801E98AC (-CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUID3D12Fence@@@Z.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801E9EA0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x18025E120 (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180276F78 (-Stop@CKstBase@@QEAAXXZ.c)
 *     ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18027BAA0 (-NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x18027D028 (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18027D8EC (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x18027EE78 (-ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z.c)
 *     ??4DDisplayPrimaryBufferResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180282C8C (--4DDisplayPrimaryBufferResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180282EE8 (--4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x1802844E4 (-CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTarget.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x180284934 (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ?CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayVBlankFenceResources@@@Z @ 0x180284B20 (-CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisp.c)
 *     ?Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z @ 0x180289A9C (-Initialize@CDummyRemotingSwapChain@@IEAAJPEBG@Z.c)
 *     ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18028F210 (-NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x18029F7E0 (-Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z.c)
 *     ?GetDDisplayResource@CDxHandleBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1802A4190 (-GetDDisplayResource@CDxHandleBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplay.c)
 *     ?GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1802A57B0 (-GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisp.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
