/*
 * XREFs of _GetDPIMETRICSForDpi@4 @ 0x91A1E
 * Callers:
 *     ?UpdateFrameControlMetricsSize@@YGFPAUOEMBITMAPSET@@I@Z @ 0x9139A (-UpdateFrameControlMetricsSize@@YGFPAUOEMBITMAPSET@@I@Z.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z @ 0xB68B6 (-GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     ?GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z @ 0xE4980 (-GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 *     ?xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z @ 0x1A0AB9 (-xxxHotTrackMenu@@YGHPAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z @ 0x1A0FFC (-xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetDPIMETRICSForDpiUnsafe@4 @ 0x91A30 (_GetDPIMETRICSForDpiUnsafe@4.c)
 */

// positive sp value has been detected, the output may be wrong!
int __thiscall GetDPIMETRICSForDpi(void *this)
{
  int result; // eax

  result = GetDPIMETRICSForDpiUnsafe(this, this);
  if ( !result )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      return GetSessionDpiMetrics();
    else
      return Get96DpiMetrics();
  }
  return result;
}
