/*
 * XREFs of _GetProcessDpiServerInfo@0 @ 0x91B9E
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _GetDPIServerInfo@0 @ 0xEC39A (_GetDPIServerInfo@0.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E (-InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z @ 0x15CD33 (-xxxPaintSwitchWindow@@YGXPAUtagWND@@@Z.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     ?PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z @ 0x18512F (-PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 *     ?DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z @ 0x1B7EEA (-DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z.c)
 *     _IsSysFontAndDefaultMode@4 @ 0x1B847A (_IsSysFontAndDefaultMode@4.c)
 * Callees:
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 */

int __stdcall GetProcessDpiServerInfo()
{
  void *v0; // ecx

  v0 = (void *)*(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 160);
  if ( (_WORD)v0 == *(_WORD *)(_gpsi + 6242) )
    return GetSessionDpiServerInfo();
  else
    return GetDPIServerInfoForDpi(v0);
}
