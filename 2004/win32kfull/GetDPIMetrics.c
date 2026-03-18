/*
 * XREFs of GetDPIMetrics @ 0x1C00608B0
 * Callers:
 *     MNSetupAnimationDC @ 0x1C0009DFC (MNSetupAnimationDC.c)
 *     xxxSetNCFonts @ 0x1C000B988 (xxxSetNCFonts.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C00633F4 (GetWindowNCMetrics.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionTemp @ 0x1C014B43C (xxxDrawCaptionTemp.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0235F20 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236D04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024D04C (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNAnimate @ 0x1C024D454 (MNAnimate.c)
 *     MNEraseBackground @ 0x1C024D964 (MNEraseBackground.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024F928 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     GetProcessDpiMetrics @ 0x1C00602FC (GetProcessDpiMetrics.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetDPIMetrics(__int64 a1)
{
  __int64 v1; // rcx

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 0 )
    return GetProcessDpiMetrics(v1);
  else
    return Get96DpiMetrics();
}
