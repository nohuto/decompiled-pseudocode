/*
 * XREFs of ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920
 * Callers:
 *     ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1800DFD80 (-Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1800E01BC (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 *     ?CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayVBlankFenceResources@@@Z @ 0x1800EB3EC (-CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisp.c)
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801681F0 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z @ 0x180189178 (-ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180189288 (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x1801960EC (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x1801964D8 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 *     ?CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x1801A5A70 (-CreateWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@PEAPEAUIDisplayFence@Core.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A62F0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A66D4 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A6954 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x1801A6A48 (-WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x1801A7960 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801AB8D4 (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x1801BE280 (--1CCompositionTextLine@@MEAA@XZ.c)
 *     ?Initialize@CCompositionTextLine@@MEAAJXZ @ 0x1801BE4B0 (-Initialize@CCompositionTextLine@@MEAAJXZ.c)
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801C3B30 (-CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComp.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C3CC8 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@@Z @ 0x1801C4520 (-IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@@Z.c)
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801E9E80 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 *     ?OnSceneLost@CSceneMesh@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801EA220 (-OnSceneLost@CSceneMesh@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x1801EAEB8 (-SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z.c)
 *     ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801EB9D0 (-OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 *     ?OnSceneLost@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801EBAF0 (-OnSceneLost@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1801ECA10 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1801ECB0C (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?OnSceneFrameTick@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801ED1D0 (-OnSceneFrameTick@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 *     ?OnSceneLost@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801ED2A0 (-OnSceneLost@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?ProcessSetBitmapInterpolationMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETBITMAPINTERPOLATIONMODE@@@Z @ 0x1801ED2BC (-ProcessSetBitmapInterpolationMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagM.c)
 *     ?ProcessSetWrappingUMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGUMODE@@@Z @ 0x1801ED40C (-ProcessSetWrappingUMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCEN.c)
 *     ?ProcessSetWrappingVMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGVMODE@@@Z @ 0x1801ED434 (-ProcessSetWrappingVMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCEN.c)
 *     ?OnSceneLost@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801F5B20 (-OnSceneLost@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?OnSceneReady@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801F5B40 (-OnSceneReady@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x18020AA60 (-OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x18020AA90 (-OnSceneReady@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18020EFD0 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 *     FlushAndWait @ 0x18020F888 (FlushAndWait.c)
 *     ?CreateDDisplayDeviceAndTarget@CDisplayManager@@QEAAJPEAUIDXGIOutputDWM@@PEAPEAUIDisplayDevice@Core@Display@Devices@Windows@@PEAPEAUIDisplayTarget@4567@@Z @ 0x1802366B4 (-CreateDDisplayDeviceAndTarget@CDisplayManager@@QEAAJPEAUIDXGIOutputDWM@@PEAPEAUIDisplayDevice@C.c)
 *     ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802387C0 (-NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x18023C050 (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x18023C650 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 *     ?CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z @ 0x18023D1F8 (-CreateSharedFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAVCSharedFence@@@Z.c)
 *     ?EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z @ 0x18023D6E4 (-EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180241B04 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x18024205C (-CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTarget.c)
 *     ?CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@PEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x1802421C0 (-CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBU.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x180242514 (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x180243084 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 *     ?ReleaseD2DResources@CD2DGenericInk@@UEAAXXZ @ 0x18024B6F0 (-ReleaseD2DResources@CD2DGenericInk@@UEAAXXZ.c)
 *     ?SupportsTemporaryMono@CLegacyStereoSwapChain@@UEBA_NXZ @ 0x18024C2F0 (-SupportsTemporaryMono@CLegacyStereoSwapChain@@UEBA_NXZ.c)
 *     ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18024F7F0 (-NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?GetDDisplayResource@CDxHandleBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180262790 (-GetDDisplayResource@CDxHandleBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplay.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180262B40 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180263E30 (-GetDDisplayResource@CDxHandleYUVBitmapRealization@@UEAAJPEAUIDisplayDeviceInterop@@PEAPEAUIDisp.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802646CC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
