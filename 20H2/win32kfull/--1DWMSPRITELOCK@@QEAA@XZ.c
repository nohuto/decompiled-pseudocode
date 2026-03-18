/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C008CACC
 * Callers:
 *     GreGetSprite @ 0x1C00075A4 (GreGetSprite.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C002A1A0 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C002A800 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C002ACF0 (GreDwmHasSoftwareCursor.c)
 *     GreGetSpriteAttributes @ 0x1C0082C34 (GreGetSpriteAttributes.c)
 *     GreUpdateSpriteClipRgn @ 0x1C008F964 (GreUpdateSpriteClipRgn.c)
 *     GreZorderSprite @ 0x1C0096E3C (GreZorderSprite.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0096F94 (GreDwmNotifySpriteDPIChange.c)
 *     GreHintSpriteShape @ 0x1C0097240 (GreHintSpriteShape.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C0EEC (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00C2630 (vCleanupUMWindowlessSprite.c)
 *     GrePtInSprite @ 0x1C00C2CB8 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C00C2E64 (GreDwmGetSurfaceData.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00C6A5C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026D3AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026D97C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026EB94 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026ED34 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C026F57C (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026FB10 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026FD50 (GreWindowResizeStarted.c)
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
