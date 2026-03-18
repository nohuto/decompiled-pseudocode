/*
 * XREFs of _GetMonitorWorkRectForWindow@8 @ 0x71F30
 * Callers:
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     _GetMonitorMaxArea@8 @ 0x7307A (_GetMonitorMaxArea@8.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z @ 0x13F619 (-ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z.c)
 *     _NtUserSetWindowShowState@16 @ 0x16A34E (_NtUserSetWindowShowState@16.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x170EAA (-ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PA.c)
 *     ?MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z @ 0x171A18 (-MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z @ 0x171F4C (-PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@3PAUtagWND@@33@Z @ 0x172538 (-TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIREC.c)
 *     ?VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x172710 (-VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtagMONITOR@@H@Z @ 0x174001 (-xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtag.c)
 *     ?xxxForceSizeRecToDockTarget@@YGHPAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagMONITOR@@PAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x174294 (-xxxForceSizeRecToDockTarget@@YGHPAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagMONITOR@.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 *     ?xxxSizeRectFromHitTarget@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x175C45 (-xxxSizeRectFromHitTarget@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     _UpdateSizeTrackingInfo@12 @ 0x1764E7 (_UpdateSizeTrackingInfo@12.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     _IsSmallerThanScreen@8 @ 0x19E5B1 (_IsSmallerThanScreen@8.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z @ 0x335EE (-GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z.c)
 *     _GetMonitorWorkRectForDpiContext@8 @ 0x71F62 (_GetMonitorWorkRectForDpiContext@8.c)
 */

_DWORD *__fastcall GetMonitorWorkRectForWindow(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *MonitorWorkRectForDpiContext; // esi
  _DWORD *result; // eax
  _BYTE v5[20]; // [esp+8h] [ebp-14h] BYREF

  GetWindowCompositedDpiContext(a2);
  MonitorWorkRectForDpiContext = (_DWORD *)GetMonitorWorkRectForDpiContext(v5);
  result = a3;
  *a3 = *MonitorWorkRectForDpiContext++;
  a3[1] = *MonitorWorkRectForDpiContext++;
  a3[2] = *MonitorWorkRectForDpiContext;
  a3[3] = MonitorWorkRectForDpiContext[1];
  return result;
}
