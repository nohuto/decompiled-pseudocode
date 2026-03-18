/*
 * XREFs of ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8
 * Callers:
 *     ?GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z @ 0x1BBC6 (-GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z.c)
 *     _vCleanupUMWindowlessSprite@4 @ 0x1ECE2 (_vCleanupUMWindowlessSprite@4.c)
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     _GreGetSpriteAttributes@28 @ 0x20186 (_GreGetSpriteAttributes@28.c)
 *     _GreDwmGetSurfaceData@12 @ 0x2320E (_GreDwmGetSurfaceData@12.c)
 *     _GrePtInSprite@24 @ 0x23540 (_GrePtInSprite@24.c)
 *     _GreUpdateSpriteClipRgn@16 @ 0x239F2 (_GreUpdateSpriteClipRgn@16.c)
 *     _GreDwmNotifySpriteDPIChange@16 @ 0x23C66 (_GreDwmNotifySpriteDPIChange@16.c)
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     _GreZorderSprite@16 @ 0x244DA (_GreZorderSprite@16.c)
 *     _DwmDestroyDeviceSpecificResources@4 @ 0xB0AC4 (_DwmDestroyDeviceSpecificResources@4.c)
 *     _GreDwmHasSoftwareCursor@8 @ 0xB1736 (_GreDwmHasSoftwareCursor@8.c)
 *     _GreDwmEnableSoftwareCursorRendering@8 @ 0xB250C (_GreDwmEnableSoftwareCursorRendering@8.c)
 *     _GreGetSprite@8 @ 0xC3FF0 (_GreGetSprite@8.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z @ 0x1CD2E0 (-SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z.c)
 *     _GreDeleteSpriteDelayDelete@16 @ 0x1CDFF8 (_GreDeleteSpriteDelayDelete@16.c)
 *     _GreDwmGetRedirectionStyle@12 @ 0x1CE113 (_GreDwmGetRedirectionStyle@12.c)
 *     _GreProtectSpriteContent@16 @ 0x1CE69D (_GreProtectSpriteContent@16.c)
 *     _GreWindowResizeComplete@8 @ 0x1CEAC5 (_GreWindowResizeComplete@8.c)
 *     _GreWindowResizeStarted@20 @ 0x1CEC76 (_GreWindowResizeStarted@20.c)
 * Callees:
 *     <none>
 */

void __thiscall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
    GreReleaseSemaphoreInternal(_ghsemSprite);
  }
}
