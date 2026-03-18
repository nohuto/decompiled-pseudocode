/*
 * XREFs of GetDPIServerInfo @ 0x1C0060838
 * Callers:
 *     GetCharDimensions @ 0x1C000C0C8 (GetCharDimensions.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C00633F4 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C014BEB8 (CreateCompatiblePublicDC.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3270 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F35D0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F41D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223C70 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022C6C0 (SfnINLPKDRAWSWITCHWND.c)
 *     xxxDrawState @ 0x1C0251DB4 (xxxDrawState.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025F8F8 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     IsSysFontAndDefaultMode @ 0x1C025FFC8 (IsSysFontAndDefaultMode.c)
 * Callees:
 *     GetProcessDpiServerInfo @ 0x1C0060864 (GetProcessDpiServerInfo.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetDPIServerInfo(__int64 a1)
{
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 0 )
    return GetProcessDpiServerInfo();
  else
    return Get96DpiServerInfo();
}
