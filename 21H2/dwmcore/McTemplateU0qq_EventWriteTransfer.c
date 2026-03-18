/*
 * XREFs of McTemplateU0qq_EventWriteTransfer @ 0x1801117F6
 * Callers:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18001DFD8 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180020984 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x18007A584 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007A840 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180080698 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800816C0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z @ 0x18008198C (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJPEAIPEAH@Z.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800819E0 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180094480 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800B1970 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800C085C (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D39E0 (-Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x1800D6D50 (-CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D8DC4 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18017D174 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18017E1F4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18017FDCC (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180194320 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IL@@@@Z @ 0x1801B07D0 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180277788 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180277F70 (-DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180278740 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180278AB0 (-FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802792E8 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18028EAB0 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qq_EventWriteTransfer(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2, int a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-48h] BYREF
  int *v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  int *v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  int v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v7 = 4;
  v8 = 0;
  v9 = &v13;
  v10 = 4;
  v11 = 0;
  return McGenEventWrite_EventWriteTransfer(a1, a2, 4LL, 3u, &v5);
}
