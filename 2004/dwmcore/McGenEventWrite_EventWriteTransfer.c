/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x1800D600C
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180007044 (-RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000FCB4 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800268FC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180026E34 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x18002AB00 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180034650 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180035134 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18003A720 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x18003A900 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003F000 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x180040B80 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18004114C (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x1800455B4 (-CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180059A10 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180059EC0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005B5B0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005B890 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005BC8C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18005BFE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DB10 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18005DB78 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180060ED0 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180063270 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800748A0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180075FB0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007B624 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18007E07C (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180098880 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B1190 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B5CB8 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     McTemplateU0qqqzzq_EventWriteTransfer @ 0x1800D5DBC (McTemplateU0qqqzzq_EventWriteTransfer.c)
 *     McTemplateU0xxqqqzzq_EventWriteTransfer @ 0x1800D5ED4 (McTemplateU0xxqqqzzq_EventWriteTransfer.c)
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E6388 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EC3EC (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180154254 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801542B8 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180154328 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x1801543A8 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801544F4 (McTemplateU0xq_EventWriteTransfer.c)
 *     McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer @ 0x1801548A8 (McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801558AC (McTemplateU0qqqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqq_EventWriteTransfer @ 0x180155948 (McTemplateU0qqqqq_EventWriteTransfer.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x1801559FC (McTemplateU0t_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180155A68 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0xqqq_EventWriteTransfer @ 0x180155ACC (McTemplateU0xqqq_EventWriteTransfer.c)
 *     McTemplateU0xqxxqq_EventWriteTransfer @ 0x180155B70 (McTemplateU0xqxxqq_EventWriteTransfer.c)
 *     McTemplateU0xxxxq_EventWriteTransfer @ 0x180155C34 (McTemplateU0xxxxq_EventWriteTransfer.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x180155CEC (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x180157C30 (McTemplateU0qqx_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180157CBC (McTemplateU0xx_EventWriteTransfer.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer @ 0x180157EB4 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer @ 0x180158DB4 (McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer.c)
 *     McTemplateU0xzqqqz_EventWriteTransfer @ 0x180159000 (McTemplateU0xzqqqz_EventWriteTransfer.c)
 *     McTemplateU0zqqqq_EventWriteTransfer @ 0x180159110 (McTemplateU0zqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqq_EventWriteTransfer @ 0x1801591EC (McTemplateU0zqqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqx_EventWriteTransfer @ 0x1801592D8 (McTemplateU0zqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xhhxqnttz_EventWriteTransfer @ 0x180163464 (McTemplateU0xhhxqnttz_EventWriteTransfer.c)
 *     McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer @ 0x180163588 (McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer.c)
 *     McTemplateU0qff_EventWriteTransfer @ 0x180164088 (McTemplateU0qff_EventWriteTransfer.c)
 *     McTemplateU0qxxff_EventWriteTransfer @ 0x180164108 (McTemplateU0qxxff_EventWriteTransfer.c)
 *     McTemplateU0qNR0_EventWriteTransfer @ 0x18016494C (McTemplateU0qNR0_EventWriteTransfer.c)
 *     McTemplateU0xxf_EventWriteTransfer @ 0x1801649C8 (McTemplateU0xxf_EventWriteTransfer.c)
 *     McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer @ 0x180164A5C (McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer.c)
 *     McTemplateU0qqxx_EventWriteTransfer @ 0x180164F38 (McTemplateU0qqxx_EventWriteTransfer.c)
 *     McTemplateU0pdsddt_EventWriteTransfer @ 0x180169C50 (McTemplateU0pdsddt_EventWriteTransfer.c)
 *     McTemplateU0qqqqxxqx_EventWriteTransfer @ 0x1801759B4 (McTemplateU0qqqqxxqx_EventWriteTransfer.c)
 *     McTemplateU0qqxqx_EventWriteTransfer @ 0x180175A98 (McTemplateU0qqxqx_EventWriteTransfer.c)
 *     McTemplateU0ppffffubr6_EventWriteTransfer @ 0x18017A340 (McTemplateU0ppffffubr6_EventWriteTransfer.c)
 *     McTemplateU0ppffffubr6q_EventWriteTransfer @ 0x18017A428 (McTemplateU0ppffffubr6q_EventWriteTransfer.c)
 *     McTemplateU0xxqNR2_EventWriteTransfer @ 0x18017A784 (McTemplateU0xxqNR2_EventWriteTransfer.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x18017A82C (McTemplateU0xxq_EventWriteTransfer.c)
 *     McTemplateU0xxxqNR3_EventWriteTransfer @ 0x18017A8B4 (McTemplateU0xxxqNR3_EventWriteTransfer.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18017C798 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     McTemplateU0xd_EventWriteTransfer @ 0x18017EE18 (McTemplateU0xd_EventWriteTransfer.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18017EE9C (McTemplateU0xddddd_EventWriteTransfer.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x18017EF58 (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x18017F1C8 (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqddddddddddddqqq_EventWriteTransfer @ 0x18017F3BC (McTemplateU0xqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x18017F56C (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer @ 0x18017F63C (McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180184E70 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     McTemplateU0xdddddddd_EventWriteTransfer @ 0x180184F34 (McTemplateU0xdddddddd_EventWriteTransfer.c)
 *     ?FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ @ 0x180185AA8 (-FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180186570 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x18018662C (McTemplateU0qx_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x1801866B0 (McTemplateU0xqq_EventWriteTransfer.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180186734 (McTemplateU0zqq_EventWriteTransfer.c)
 *     McTemplateU0xxddffff_EventWriteTransfer @ 0x18018D1F0 (McTemplateU0xxddffff_EventWriteTransfer.c)
 *     ?FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018D734 (-FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018FB30 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McTemplateU0pxffffffffffffffff_EventWriteTransfer @ 0x180191040 (McTemplateU0pxffffffffffffffff_EventWriteTransfer.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180191600 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     McTemplateU0xqqf_EventWriteTransfer @ 0x1801A6F68 (McTemplateU0xqqf_EventWriteTransfer.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x1801A81A8 (McTemplateU0xxxq_EventWriteTransfer.c)
 *     McTemplateU0ppffffdd_EventWriteTransfer @ 0x1801AD59C (McTemplateU0ppffffdd_EventWriteTransfer.c)
 *     McTemplateU0pffffss_EventWriteTransfer @ 0x1801B07F4 (McTemplateU0pffffss_EventWriteTransfer.c)
 *     McTemplateU0qqqxxpp_EventWriteTransfer @ 0x1801B0914 (McTemplateU0qqqxxpp_EventWriteTransfer.c)
 *     McTemplateU0xxqf_EventWriteTransfer @ 0x1801B7D88 (McTemplateU0xxqf_EventWriteTransfer.c)
 *     McTemplateU0xxxqf_EventWriteTransfer @ 0x1801B7E2C (McTemplateU0xxxqf_EventWriteTransfer.c)
 *     McTemplateU0pppffff_EventWriteTransfer @ 0x1801BE1B8 (McTemplateU0pppffff_EventWriteTransfer.c)
 *     ?GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801C12E0 (-GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     McTemplateU0pxqtq_EventWriteTransfer @ 0x1801C4CB0 (McTemplateU0pxqtq_EventWriteTransfer.c)
 *     McTemplateU0pqqNR2_EventWriteTransfer @ 0x1801C8750 (McTemplateU0pqqNR2_EventWriteTransfer.c)
 *     McTemplateU0ppffff_EventWriteTransfer @ 0x1801E4D58 (McTemplateU0ppffff_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801E4E14 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0qxqq_EventWriteTransfer @ 0x1801E4E88 (McTemplateU0qxqq_EventWriteTransfer.c)
 *     McTemplateU0pxtt_EventWriteTransfer @ 0x1801F18F0 (McTemplateU0pxtt_EventWriteTransfer.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x1801F515C (McTemplateU0xxx_EventWriteTransfer.c)
 *     McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer @ 0x1801FA3C0 (McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801FA558 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 *     McTemplateU0s_EventWriteTransfer @ 0x1801FA790 (McTemplateU0s_EventWriteTransfer.c)
 *     McTemplateU0qqppxffffffffffffffff_EventWriteTransfer @ 0x180220DA8 (McTemplateU0qqppxffffffffffffffff_EventWriteTransfer.c)
 *     McTemplateU0qqxq_EventWriteTransfer @ 0x180220FB4 (McTemplateU0qqxq_EventWriteTransfer.c)
 *     McTemplateU0ppqx_EventWriteTransfer @ 0x180226C00 (McTemplateU0ppqx_EventWriteTransfer.c)
 *     McTemplateU0qqp_EventWriteTransfer @ 0x1802276EC (McTemplateU0qqp_EventWriteTransfer.c)
 *     McTemplateU0pqnz_EventWriteTransfer @ 0x18023F574 (McTemplateU0pqnz_EventWriteTransfer.c)
 *     McTemplateU0xqdddd_EventWriteTransfer @ 0x18023F648 (McTemplateU0xqdddd_EventWriteTransfer.c)
 *     McTemplateU0xxdddddd_EventWriteTransfer @ 0x18023F710 (McTemplateU0xxdddddd_EventWriteTransfer.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x180256560 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     McTemplateU0f_EventWriteTransfer @ 0x18025A81C (McTemplateU0f_EventWriteTransfer.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x1802674B8 (McTemplateU0qqqxx_EventWriteTransfer.c)
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
