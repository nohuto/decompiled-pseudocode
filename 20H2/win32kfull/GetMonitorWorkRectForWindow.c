/*
 * XREFs of GetMonitorWorkRectForWindow @ 0x1C0018B80
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     IsSmallerThanScreen @ 0x1C0018AD0 (IsSmallerThanScreen.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C001BA50 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     GetMonitorMaxArea @ 0x1C00C6E4C (GetMonitorMaxArea.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01CF98C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     NtUserSetWindowShowState @ 0x1C0202F50 (NtUserSetWindowShowState.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C020A710 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C020B49C (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C020BB04 (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C020C22C (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020C470 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CA90 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C020E19C (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020E500 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F894 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C021027C (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 *     UpdateSizeTrackingInfo @ 0x1C0210CC8 (UpdateSizeTrackingInfo.c)
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 *     FindBestPos @ 0x1C024A110 (FindBestPos.c)
 * Callees:
 *     GetMonitorWorkRectForDpiContext @ 0x1C00D3D3C (GetMonitorWorkRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00D3E20 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

_OWORD *__fastcall GetMonitorWorkRectForWindow(_OWORD *a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  v6 = *(_OWORD *)GetMonitorWorkRectForDpiContext(v8, v5, WindowCompositedDpiContext);
  result = a1;
  *a1 = v6;
  return result;
}
