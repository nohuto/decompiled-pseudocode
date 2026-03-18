/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4
 * Callers:
 *     GreGetSprite @ 0x1C0007704 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001D924 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C001F3C4 (GreHintSpriteShape.c)
 *     GreZorderSprite @ 0x1C001F8D0 (GreZorderSprite.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C001FA28 (GreDwmNotifySpriteDPIChange.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0028F80 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     vCleanupUMWindowlessSprite @ 0x1C002F0B0 (vCleanupUMWindowlessSprite.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C004C220 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreGetSpriteAttributes @ 0x1C004C520 (GreGetSpriteAttributes.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C004ED50 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreDwmHasSoftwareCursor @ 0x1C00509C8 (GreDwmHasSoftwareCursor.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0050E20 (DwmDestroyDeviceSpecificResources.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026EF9C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C02701B4 (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C0270B9C (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0271130 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0271370 (GreWindowResizeStarted.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

DWMSPRITELOCK *__fastcall DWMSPRITELOCK::DWMSPRITELOCK(DWMSPRITELOCK *this, struct PDEVOBJ *a2, int a3, int a4)
{
  __int64 ThreadWin32Thread; // rax

  *(_DWORD *)this = 0;
  if ( !a3 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || a4 == 1 || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      *(_DWORD *)this = 1;
    }
  }
  return this;
}
