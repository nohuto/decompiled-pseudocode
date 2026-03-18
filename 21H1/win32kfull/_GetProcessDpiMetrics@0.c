/*
 * XREFs of _GetProcessDpiMetrics@0 @ 0x91BCE
 * Callers:
 *     _GetWindowNCMetrics@4 @ 0x91522 (_GetWindowNCMetrics@4.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _GetDPIMetrics@0 @ 0xCCA30 (_GetDPIMetrics@0.c)
 *     _MNSetupAnimationDC@4 @ 0xD6DB0 (_MNSetupAnimationDC@4.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     ?MNCheckScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagMONITOR@@@Z @ 0x196697 (-MNCheckScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@ABV-$SmartObjStackRef@UtagMENU@@@@PAUt.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     ?xxxDrawItemUnderline@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z @ 0x1A90F9 (-xxxDrawItemUnderline@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGJ@Z.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 *     _MNEraseBackground@24 @ 0x1A98B1 (_MNEraseBackground@24.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 */

int __stdcall GetProcessDpiMetrics()
{
  void *v0; // ecx

  v0 = (void *)*(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 160);
  if ( (_WORD)v0 == *(_WORD *)(_gpsi + 6242) )
    return GetSessionDpiMetrics();
  else
    return GetDPIMETRICSForDpi(v0);
}
