/*
 * XREFs of GetDPIServerInfo @ 0x1C00332F0
 * Callers:
 *     GetCharDimensions @ 0x1C0024BC8 (GetCharDimensions.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C0033394 (GetWindowNCMetrics.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D294 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxDrawCaptionTemp @ 0x1C014DC4C (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C014E6C8 (CreateCompatiblePublicDC.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F2600 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2964 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3568 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0222DE0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022B830 (SfnINLPKDRAWSWITCHWND.c)
 *     xxxDrawState @ 0x1C02507A4 (xxxDrawState.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025E2E4 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     IsSysFontAndDefaultMode @ 0x1C025E9A8 (IsSysFontAndDefaultMode.c)
 * Callees:
 *     GetProcessDpiServerInfo @ 0x1C003331C (GetProcessDpiServerInfo.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetDPIServerInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF) != 0 )
    return GetProcessDpiServerInfo();
  else
    return Get96DpiServerInfo();
}
