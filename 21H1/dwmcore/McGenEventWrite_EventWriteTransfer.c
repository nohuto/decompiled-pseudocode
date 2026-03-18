/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x18008AA6C
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000C020 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000E158 (-RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18002C010 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800300B0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180030290 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180031098 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18003C3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18003C860 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18003DF50 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18003E230 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18003E62C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800404B0 (-TryDebouncingParallelMode@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180040518 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18004384C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180043940 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180065300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006A6C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18006CF60 (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800774A0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18007A834 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x18007B0B8 (-CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ.c)
 *     McTemplateU0qqqzzq_EventWriteTransfer @ 0x18008A81C (McTemplateU0qqqzzq_EventWriteTransfer.c)
 *     McTemplateU0xxqqqzzq_EventWriteTransfer @ 0x18008A934 (McTemplateU0xxqqqzzq_EventWriteTransfer.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18008B768 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x18008C3F4 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x18009E448 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800A3360 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1800AE400 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D7C0C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800D8144 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800E54C4 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EB6DC (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180155DC4 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180155E28 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180155E98 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer @ 0x180155F18 (McTemplateU0qqqqqqqqqqqqq_EventWriteTransfer.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180156064 (McTemplateU0xq_EventWriteTransfer.c)
 *     McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer @ 0x1801564B4 (McTemplateU0qQR0qQR2qQR4qQR6qQR8_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x180157538 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     McTemplateU0qqqqq_EventWriteTransfer @ 0x1801575D4 (McTemplateU0qqqqq_EventWriteTransfer.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180157688 (McTemplateU0t_EventWriteTransfer.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801576F4 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0xqqq_EventWriteTransfer @ 0x180157758 (McTemplateU0xqqq_EventWriteTransfer.c)
 *     McTemplateU0xqxxqq_EventWriteTransfer @ 0x1801577FC (McTemplateU0xqxxqq_EventWriteTransfer.c)
 *     McTemplateU0xxxxq_EventWriteTransfer @ 0x1801578C0 (McTemplateU0xxxxq_EventWriteTransfer.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x180157978 (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x18015A794 (McTemplateU0qqx_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x18015A820 (McTemplateU0xx_EventWriteTransfer.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer @ 0x18015AA14 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer.c)
 *     McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer @ 0x18015B914 (McTemplateU0xxqqxxqzqqqqqqzzqq_EventWriteTransfer.c)
 *     McTemplateU0xzqqqz_EventWriteTransfer @ 0x18015BB60 (McTemplateU0xzqqqz_EventWriteTransfer.c)
 *     McTemplateU0zqqqq_EventWriteTransfer @ 0x18015BC70 (McTemplateU0zqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqq_EventWriteTransfer @ 0x18015BD4C (McTemplateU0zqqqqq_EventWriteTransfer.c)
 *     McTemplateU0zqqqqx_EventWriteTransfer @ 0x18015BE38 (McTemplateU0zqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xhhxqnttz_EventWriteTransfer @ 0x180165FC4 (McTemplateU0xhhxqnttz_EventWriteTransfer.c)
 *     McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer @ 0x1801660E8 (McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer.c)
 *     McTemplateU0qff_EventWriteTransfer @ 0x180166BE8 (McTemplateU0qff_EventWriteTransfer.c)
 *     McTemplateU0qxxff_EventWriteTransfer @ 0x180166C68 (McTemplateU0qxxff_EventWriteTransfer.c)
 *     McTemplateU0qNR0_EventWriteTransfer @ 0x1801674AC (McTemplateU0qNR0_EventWriteTransfer.c)
 *     McTemplateU0xxf_EventWriteTransfer @ 0x180167528 (McTemplateU0xxf_EventWriteTransfer.c)
 *     McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer @ 0x1801675BC (McTemplateU0xxxtxxxxxxxxqN16_EventWriteTransfer.c)
 *     McTemplateU0qqxx_EventWriteTransfer @ 0x180167A98 (McTemplateU0qqxx_EventWriteTransfer.c)
 *     McTemplateU0pdsddt_EventWriteTransfer @ 0x18016C7B0 (McTemplateU0pdsddt_EventWriteTransfer.c)
 *     McTemplateU0qqqqxxqx_EventWriteTransfer @ 0x180178544 (McTemplateU0qqqqxxqx_EventWriteTransfer.c)
 *     McTemplateU0qqxqx_EventWriteTransfer @ 0x180178628 (McTemplateU0qqxqx_EventWriteTransfer.c)
 *     McTemplateU0ppffffubr6_EventWriteTransfer @ 0x18017CF44 (McTemplateU0ppffffubr6_EventWriteTransfer.c)
 *     McTemplateU0ppffffubr6q_EventWriteTransfer @ 0x18017D02C (McTemplateU0ppffffubr6q_EventWriteTransfer.c)
 *     McTemplateU0xxqNR2_EventWriteTransfer @ 0x18017D388 (McTemplateU0xxqNR2_EventWriteTransfer.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x18017D430 (McTemplateU0xxq_EventWriteTransfer.c)
 *     McTemplateU0xxxqNR3_EventWriteTransfer @ 0x18017D4B8 (McTemplateU0xxxqNR3_EventWriteTransfer.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18017F398 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     McTemplateU0xd_EventWriteTransfer @ 0x180181A18 (McTemplateU0xd_EventWriteTransfer.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x180181A9C (McTemplateU0xddddd_EventWriteTransfer.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x180181B58 (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x180181DC8 (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqddddddddddddqqq_EventWriteTransfer @ 0x180181FBC (McTemplateU0xqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x18018216C (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer @ 0x18018223C (McTemplateU0xqqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180187CF0 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     McTemplateU0xdddddddd_EventWriteTransfer @ 0x180187DB4 (McTemplateU0xdddddddd_EventWriteTransfer.c)
 *     ?FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ @ 0x1801888F0 (-FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180189330 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x1801893EC (McTemplateU0qx_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180189470 (McTemplateU0xqq_EventWriteTransfer.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x1801894F4 (McTemplateU0zqq_EventWriteTransfer.c)
 *     McTemplateU0xxddffff_EventWriteTransfer @ 0x18018FEE0 (McTemplateU0xxddffff_EventWriteTransfer.c)
 *     ?FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ @ 0x1801903EC (-FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x180192700 (McTemplateU0ffff_EventWriteTransfer.c)
 *     McTemplateU0pxffffffffffffffff_EventWriteTransfer @ 0x180193C10 (McTemplateU0pxffffffffffffffff_EventWriteTransfer.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801941D0 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     McTemplateU0xqqf_EventWriteTransfer @ 0x1801A99C8 (McTemplateU0xqqf_EventWriteTransfer.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x1801AAC08 (McTemplateU0xxxq_EventWriteTransfer.c)
 *     McTemplateU0ppffffdd_EventWriteTransfer @ 0x1801AFEFC (McTemplateU0ppffffdd_EventWriteTransfer.c)
 *     McTemplateU0pffffss_EventWriteTransfer @ 0x1801B3144 (McTemplateU0pffffss_EventWriteTransfer.c)
 *     McTemplateU0qqqxxpp_EventWriteTransfer @ 0x1801B3264 (McTemplateU0qqqxxpp_EventWriteTransfer.c)
 *     McTemplateU0xxqf_EventWriteTransfer @ 0x1801BA6F8 (McTemplateU0xxqf_EventWriteTransfer.c)
 *     McTemplateU0xxxqf_EventWriteTransfer @ 0x1801BA79C (McTemplateU0xxxqf_EventWriteTransfer.c)
 *     McTemplateU0pppffff_EventWriteTransfer @ 0x1801C0AD8 (McTemplateU0pppffff_EventWriteTransfer.c)
 *     ?GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801C3C00 (-GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     McTemplateU0pxqtq_EventWriteTransfer @ 0x1801C75E0 (McTemplateU0pxqtq_EventWriteTransfer.c)
 *     McTemplateU0pqqNR2_EventWriteTransfer @ 0x1801CB080 (McTemplateU0pqqNR2_EventWriteTransfer.c)
 *     McTemplateU0ppffff_EventWriteTransfer @ 0x1801E76D8 (McTemplateU0ppffff_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801E7794 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0qxqq_EventWriteTransfer @ 0x1801E7808 (McTemplateU0qxqq_EventWriteTransfer.c)
 *     McTemplateU0pxtt_EventWriteTransfer @ 0x1801F4270 (McTemplateU0pxtt_EventWriteTransfer.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x1801F7B1C (McTemplateU0xxx_EventWriteTransfer.c)
 *     McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer @ 0x1801FCD80 (McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801FCF18 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 *     McTemplateU0s_EventWriteTransfer @ 0x1801FD150 (McTemplateU0s_EventWriteTransfer.c)
 *     McTemplateU0qqppxffffffffffffffff_EventWriteTransfer @ 0x180223778 (McTemplateU0qqppxffffffffffffffff_EventWriteTransfer.c)
 *     McTemplateU0qqxq_EventWriteTransfer @ 0x180223984 (McTemplateU0qqxq_EventWriteTransfer.c)
 *     McTemplateU0ppqx_EventWriteTransfer @ 0x1802295D0 (McTemplateU0ppqx_EventWriteTransfer.c)
 *     McTemplateU0qqp_EventWriteTransfer @ 0x18022A0AC (McTemplateU0qqp_EventWriteTransfer.c)
 *     McTemplateU0pqnz_EventWriteTransfer @ 0x180241FA4 (McTemplateU0pqnz_EventWriteTransfer.c)
 *     McTemplateU0xqdddd_EventWriteTransfer @ 0x180242078 (McTemplateU0xqdddd_EventWriteTransfer.c)
 *     McTemplateU0xxdddddd_EventWriteTransfer @ 0x180242140 (McTemplateU0xxdddddd_EventWriteTransfer.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x180258FD0 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     McTemplateU0f_EventWriteTransfer @ 0x18025D28C (McTemplateU0f_EventWriteTransfer.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x180269F28 (McTemplateU0qqqxx_EventWriteTransfer.c)
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
