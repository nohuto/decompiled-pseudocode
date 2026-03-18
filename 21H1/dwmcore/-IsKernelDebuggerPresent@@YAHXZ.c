/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18021850C
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800335F0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18003C860 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003CCB0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJXZ @ 0x18003D4A4 (-Present@CRenderTargetManager@@QEAAJXZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18003D678 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003D750 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x18003D7DC (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x18003DAD0 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18003DF50 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18003E230 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003E5A0 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18003E62C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180043940 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18004F430 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z @ 0x1800B9500 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4CompositionReason@@@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180156E54 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180218580 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x18023C7E0 (-DrawLegacyCommandList@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18023D0C0 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802592D4 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_180347AE8;
  if ( !(_BYTE)word_180347AE8 )
    return 0;
  v1 = HIBYTE(word_180347AE8);
  v2 = 1;
  if ( HIBYTE(word_180347AE8) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_180347AE8, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_180347AE8);
      v0 = word_180347AE8;
    }
    else
    {
      v0 = 1;
      word_180347AE8 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
