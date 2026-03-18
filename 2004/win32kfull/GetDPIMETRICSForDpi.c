/*
 * XREFs of GetDPIMETRICSForDpi @ 0x1C0064724
 * Callers:
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C005D240 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GetProcessDpiMetrics @ 0x1C00602FC (GetProcessDpiMetrics.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0063530 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00BACF8 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C01021C0 (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA9F0 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0243708 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0243DEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C0064744 (GetDPIMETRICSForDpiUnsafe.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 GetDPIMETRICSForDpi()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = GetDPIMETRICSForDpiUnsafe();
  if ( !result )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v1) & 0xF) != 0 )
      return GetSessionDpiMetrics();
    else
      return Get96DpiMetrics();
  }
  return result;
}
