/*
 * XREFs of McTemplateU0x_EventWriteTransfer @ 0x180155A68
 * Callers:
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003F000 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18005BFE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005F3BC (-ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x18007A254 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18007CDF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800A6250 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800AE22C (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800AFA10 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800D6550 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017BAC0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018E05C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?DeactivateIfIdle@CComputeScribbleRenderer@@AEAAXXZ @ 0x1801A0E74 (-DeactivateIfIdle@CComputeScribbleRenderer@@AEAAXXZ.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801A10F0 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A62F0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ??0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z @ 0x1801F04C4 (--0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z.c)
 *     ??1CSynchronousSuperWetInk@@UEAA@XZ @ 0x1801F066C (--1CSynchronousSuperWetInk@@UEAA@XZ.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801F9D94 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1801FA2B0 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x180223CB0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180224FFC (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180248374 (-PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18024BF9C (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180256024 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0x_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 8;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 2u, &v4);
}
