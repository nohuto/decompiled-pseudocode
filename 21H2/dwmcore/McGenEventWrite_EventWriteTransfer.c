/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x1800B23CC
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800051C4 (-RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DDA4 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18002692C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180026E64 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18002C6B0 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180036FC0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003A2D4 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180041420 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180041600 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180043474 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180043C40 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800479BC (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18006D720 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18006DBD0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006F2C0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18006F5A0 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006F99C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18006FCF0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180071820 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180071888 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x180071B10 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180074F30 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180077330 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007B940 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088930 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008A040 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800908C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18009331C (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18009BA4C (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x18009C0F0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x18009D364 (-CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ.c)
 *     McTemplateU0qqqzzq_EventWriteTransfer @ 0x1800B217C (McTemplateU0qqqzzq_EventWriteTransfer.c)
 *     McTemplateU0xxqqqzzq_EventWriteTransfer @ 0x1800B2294 (McTemplateU0xxqqqzzq_EventWriteTransfer.c)
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1800B4DC0 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800EC2B8 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F2900 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152A24 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180152A88 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180152AF8 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x180152B78 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180152CC4 (McTemplateU0xq_EventWriteTransfer.c)
 *     McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer @ 0x180153114 (McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x18015411C (McTemplateU0qqqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqq_EventWriteTransfer @ 0x1801541B8 (McTemplateU0qqqqq_EventWriteTransfer.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18015426C (McTemplateU0t_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801542D8 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0xqqq_EventWriteTransfer @ 0x18015433C (McTemplateU0xqqq_EventWriteTransfer.c)
 *     McTemplateU0xqxxqq_EventWriteTransfer @ 0x1801543E0 (McTemplateU0xqxxqq_EventWriteTransfer.c)
 *     McTemplateU0xxxxq_EventWriteTransfer @ 0x1801544A4 (McTemplateU0xxxxq_EventWriteTransfer.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x18015455C (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x180156308 (McTemplateU0qqx_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180156394 (McTemplateU0xx_EventWriteTransfer.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer @ 0x180156584 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer @ 0x1801574C4 (McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer.c)
 *     McTemplateU0xzqqqz_EventWriteTransfer @ 0x180157710 (McTemplateU0xzqqqz_EventWriteTransfer.c)
 *     McTemplateU0zqqqq_EventWriteTransfer @ 0x180157820 (McTemplateU0zqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqq_EventWriteTransfer @ 0x1801578FC (McTemplateU0zqqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqx_EventWriteTransfer @ 0x1801579E8 (McTemplateU0zqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xhhxqnttz_EventWriteTransfer @ 0x180161B74 (McTemplateU0xhhxqnttz_EventWriteTransfer.c)
 *     McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer @ 0x180161C98 (McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer.c)
 *     McTemplateU0qff_EventWriteTransfer @ 0x180162798 (McTemplateU0qff_EventWriteTransfer.c)
 *     McTemplateU0qxxff_EventWriteTransfer @ 0x180162818 (McTemplateU0qxxff_EventWriteTransfer.c)
 *     McTemplateU0qNR0_EventWriteTransfer @ 0x18016305C (McTemplateU0qNR0_EventWriteTransfer.c)
 *     McTemplateU0xxf_EventWriteTransfer @ 0x1801630D8 (McTemplateU0xxf_EventWriteTransfer.c)
 *     McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer @ 0x18016316C (McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer.c)
 *     McTemplateU0qqxx_EventWriteTransfer @ 0x180163648 (McTemplateU0qqxx_EventWriteTransfer.c)
 *     McTemplateU0pdsddt_EventWriteTransfer @ 0x180168370 (McTemplateU0pdsddt_EventWriteTransfer.c)
 *     McTemplateU0qqqqxxqx_EventWriteTransfer @ 0x180174164 (McTemplateU0qqqqxxqx_EventWriteTransfer.c)
 *     McTemplateU0qqxqx_EventWriteTransfer @ 0x180174248 (McTemplateU0qqxqx_EventWriteTransfer.c)
 *     McTemplateU0ppffffubr6_EventWriteTransfer @ 0x180178BC0 (McTemplateU0ppffffubr6_EventWriteTransfer.c)
 *     McTemplateU0ppffffubr6q_EventWriteTransfer @ 0x180178CA8 (McTemplateU0ppffffubr6q_EventWriteTransfer.c)
 *     McTemplateU0xxqNR2_EventWriteTransfer @ 0x180179004 (McTemplateU0xxqNR2_EventWriteTransfer.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x1801790AC (McTemplateU0xxq_EventWriteTransfer.c)
 *     McTemplateU0xxxqNR3_EventWriteTransfer @ 0x180179134 (McTemplateU0xxxqNR3_EventWriteTransfer.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18017B018 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     McTemplateU0xd_EventWriteTransfer @ 0x18017D698 (McTemplateU0xd_EventWriteTransfer.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18017D71C (McTemplateU0xddddd_EventWriteTransfer.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x18017D7D8 (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x18017DA48 (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqddddddddddddqqq_EventWriteTransfer @ 0x18017DC3C (McTemplateU0xqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x18017DDEC (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer @ 0x18017DEBC (McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180183C50 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     McTemplateU0xdddddddd_EventWriteTransfer @ 0x180183D14 (McTemplateU0xdddddddd_EventWriteTransfer.c)
 *     ?FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ @ 0x180184854 (-FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180185320 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1801853DC (McTemplateU0qx_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180185460 (McTemplateU0xqq_EventWriteTransfer.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x1801854E4 (McTemplateU0zqq_EventWriteTransfer.c)
 *     McTemplateU0xxddffff_EventWriteTransfer @ 0x18018BFA0 (McTemplateU0xxddffff_EventWriteTransfer.c)
 *     ?FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018C4E4 (-FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018E8E0 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McTemplateU0pxffffffffffffffff_EventWriteTransfer @ 0x18018FDF0 (McTemplateU0pxffffffffffffffff_EventWriteTransfer.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801903B0 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     McTemplateU0xqqf_EventWriteTransfer @ 0x1801A5B18 (McTemplateU0xqqf_EventWriteTransfer.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xxxq_EventWriteTransfer.c)
 *     McTemplateU0ppffffdd_EventWriteTransfer @ 0x1801AC06C (McTemplateU0ppffffdd_EventWriteTransfer.c)
 *     McTemplateU0pffffss_EventWriteTransfer @ 0x1801AF2B4 (McTemplateU0pffffss_EventWriteTransfer.c)
 *     McTemplateU0qqqxxpp_EventWriteTransfer @ 0x1801AF3D4 (McTemplateU0qqqxxpp_EventWriteTransfer.c)
 *     McTemplateU0xxqf_EventWriteTransfer @ 0x1801B6858 (McTemplateU0xxqf_EventWriteTransfer.c)
 *     McTemplateU0xxxqf_EventWriteTransfer @ 0x1801B68FC (McTemplateU0xxxqf_EventWriteTransfer.c)
 *     McTemplateU0pppffff_EventWriteTransfer @ 0x1801BCC54 (McTemplateU0pppffff_EventWriteTransfer.c)
 *     ?GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801BFE50 (-GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     McTemplateU0pxqtq_EventWriteTransfer @ 0x1801C3920 (McTemplateU0pxqtq_EventWriteTransfer.c)
 *     McTemplateU0pqqNR2_EventWriteTransfer @ 0x1801C73F0 (McTemplateU0pqqNR2_EventWriteTransfer.c)
 *     McTemplateU0ppffff_EventWriteTransfer @ 0x1801E39B8 (McTemplateU0ppffff_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801E3A74 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0qxqq_EventWriteTransfer @ 0x1801E3AE8 (McTemplateU0qxqq_EventWriteTransfer.c)
 *     McTemplateU0pxtt_EventWriteTransfer @ 0x1801F0820 (McTemplateU0pxtt_EventWriteTransfer.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x1801F408C (McTemplateU0xxx_EventWriteTransfer.c)
 *     McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer @ 0x1801F92F0 (McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801F9488 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 *     McTemplateU0s_EventWriteTransfer @ 0x1801F96C0 (McTemplateU0s_EventWriteTransfer.c)
 *     McTemplateU0qqppxffffffffffffffff_EventWriteTransfer @ 0x1802225A8 (McTemplateU0qqppxffffffffffffffff_EventWriteTransfer.c)
 *     McTemplateU0qqxq_EventWriteTransfer @ 0x1802227B4 (McTemplateU0qqxq_EventWriteTransfer.c)
 *     McTemplateU0ppqx_EventWriteTransfer @ 0x180228450 (McTemplateU0ppqx_EventWriteTransfer.c)
 *     McTemplateU0qqp_EventWriteTransfer @ 0x180228F2C (McTemplateU0qqp_EventWriteTransfer.c)
 *     McTemplateU0pqnz_EventWriteTransfer @ 0x180241294 (McTemplateU0pqnz_EventWriteTransfer.c)
 *     McTemplateU0xqdddd_EventWriteTransfer @ 0x180241368 (McTemplateU0xqdddd_EventWriteTransfer.c)
 *     McTemplateU0xxdddddd_EventWriteTransfer @ 0x180241430 (McTemplateU0xxdddddd_EventWriteTransfer.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x1802583E0 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     McTemplateU0f_EventWriteTransfer @ 0x18025C6EC (McTemplateU0f_EventWriteTransfer.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x180269388 (McTemplateU0qqqxx_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EventWriteTransfer(*a1, a2, 0LL, 0LL, a4, UserData);
}
