/*
 * XREFs of ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 *     _CreateSprite@16 @ 0x1F5C2 (_CreateSprite@16.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     ?SmartRectInRegion@@YGIPAUHRGN__@@PAUtagRECT@@@Z @ 0x34A8E (-SmartRectInRegion@@YGIPAUHRGN__@@PAUtagRECT@@@Z.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     ?IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z @ 0x359D0 (-IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z.c)
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _NtUserUpdateLayeredWindow@40 @ 0xBA93E (_NtUserUpdateLayeredWindow@40.c)
 *     ?FindNewMonitor@@YGPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x144E6D (-FindNewMonitor@@YGPAUtagMONITOR@@PAUtagRECT@@@Z.c)
 *     _xxxRestoreMonitorsAndWindowsRects@8 @ 0x146391 (_xxxRestoreMonitorsAndWindowsRects@8.c)
 *     _TransformRegionBetweenCoordinateSpaces@12 @ 0x151BB7 (_TransformRegionBetweenCoordinateSpaces@12.c)
 *     _NtUserSetWindowShowState@16 @ 0x16A34E (_NtUserSetWindowShowState@16.c)
 *     ?DoesQualifyForResizeOptimization@@YGHPAU_MOVESIZEDATA@@@Z @ 0x171050 (-DoesQualifyForResizeOptimization@@YGHPAU_MOVESIZEDATA@@@Z.c)
 *     ?IsEqualRectToArrangedWindow@@YGHPAUtagWND@@QBUtagRECT@@@Z @ 0x17184A (-IsEqualRectToArrangedWindow@@YGHPAUtagWND@@QBUtagRECT@@@Z.c)
 *     ?MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z @ 0x171A18 (-MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

BOOL __fastcall EqualRectInl(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10u) == 0;
}
