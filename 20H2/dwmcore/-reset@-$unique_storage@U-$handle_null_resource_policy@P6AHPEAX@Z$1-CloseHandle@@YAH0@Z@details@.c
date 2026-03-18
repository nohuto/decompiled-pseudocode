/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB34
 * Callers:
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x18002EE88 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ?CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ @ 0x18002F01C (-CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ.c)
 *     ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x1800341C0 (--0CDwmRenderThreadWatchdog@@QEAA@XZ.c)
 *     ??0CWatchdogTimer@@QEAA@XZ @ 0x1800342A4 (--0CWatchdogTimer@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x18003B618 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18003BA60 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18003DAA0 (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007ACAC (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007B000 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX_N@Z @ 0x1800BEA30 (-SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX_N@Z.c)
 *     ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x1800DA0B8 (-EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800DFDF4 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRen.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800E0190 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayVBlankFenceResources@@@Z @ 0x1800EBABC (-CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisp.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180163C2C (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x180163F40 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x1801874F8 (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180187608 (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_CREATE@@@Z @ 0x18018BEDC (-ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGE.c)
 *     ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x1801A3C50 (-CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUIDisplayFence@Core.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801A4094 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x18020A96C (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z.c)
 *     ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180237830 (-NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18023C268 (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x18023D87C (-ShareToD3D12@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z.c)
 *     ??4DDisplayPrimaryBufferResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18023FED4 (--4DDisplayPrimaryBufferResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18024003C (--4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x1802410CC (-CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTarget.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x180241584 (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x180259F30 (-Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z.c)
 *     ?GetDDisplayResource@CDxHandleBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1802619B0 (-GetDDisplayResource@CDxHandleBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplay.c)
 *     ?GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180263050 (-GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisp.c)
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
