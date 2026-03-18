/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C
 * Callers:
 *     GreGetSprite @ 0x1C0007704 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001D924 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C001F3C4 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C001F8D0 (GreZorderSprite.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C001FA28 (GreDwmNotifySpriteDPIChange.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0028F80 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GrePtInSprite @ 0x1C002D0E8 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C002D294 (GreDwmGetSurfaceData.c)
 *     vCleanupUMWindowlessSprite @ 0x1C002F0B0 (vCleanupUMWindowlessSprite.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C004C220 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreGetSpriteAttributes @ 0x1C004C520 (GreGetSpriteAttributes.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C004ED50 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00509C8 (GreDwmHasSoftwareCursor.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0050E20 (DwmDestroyDeviceSpecificResources.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026EF9C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C02701B4 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0270354 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C0270B9C (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0271130 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0271370 (GreWindowResizeStarted.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
}
