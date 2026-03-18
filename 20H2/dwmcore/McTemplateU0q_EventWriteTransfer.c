/*
 * XREFs of McTemplateU0q_EventWriteTransfer @ 0x180152344
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180008640 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x1800387E0 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18003A74C (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x18005270C (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006D4F4 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180078EE0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007B000 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007CB30 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007CE20 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x1800820C0 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180082FD8 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180083F50 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18009AEB0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x18009B9A0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x1800ABDE0 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800ABE70 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z @ 0x1800BEDE0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800C1A64 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800C1E94 (-PostPresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800C5300 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E6D94 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18017AB48 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801840D0 (-IsComputeScribbleSupported@CLegacyRenderTarget@@UEBA_NXZ.c)
 *     ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x180194418 (-CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z.c)
 *     ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x18019446C (-CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x1801945E0 (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180194858 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 *     ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@@Z @ 0x1801C2650 (-IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@@Z.c)
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801EEA00 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801EEE60 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 *     ?EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180235EDC (-EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 *     ?LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180236080 (-LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023A328 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x18023B6C0 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 *     ?IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ @ 0x180247260 (-IsComputeScribbleSupported@CLegacySwapChain@@UEBA_NXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0q_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  int *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  int v8; // [rsp+80h] [rbp+18h] BYREF

  v8 = a3;
  v5 = &v8;
  v7 = 0;
  v6 = 4;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 2u, &v4);
}
