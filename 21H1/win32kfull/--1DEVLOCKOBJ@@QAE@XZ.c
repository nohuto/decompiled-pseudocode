/*
 * XREFs of ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936
 * Callers:
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YGJQAUHDEV__@@PAUHLSURF__@@PAU_SURFOBJ@@H@Z @ 0x23086 (-SpNotifyLSurfaceRedirSurfAssoc@@YGJQAUHDEV__@@PAUHLSURF__@@PAU_SURFOBJ@@H@Z.c)
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     _vAccNotifyDeleteSurfaceWrap@4 @ 0x9A326 (_vAccNotifyDeleteSurfaceWrap@4.c)
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     _GreDesktopSwitch@20 @ 0xB23DE (_GreDesktopSwitch@20.c)
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 *     _GreSetDeviceGammaRamp@16 @ 0xCEB1A (_GreSetDeviceGammaRamp@16.c)
 *     _GreDwmShutdown@4 @ 0xCF60A (_GreDwmShutdown@4.c)
 *     _GreGetDeviceGammaRamp@8 @ 0xD0F8E (_GreGetDeviceGammaRamp@8.c)
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 *     ?SpCreateSurface@@YG?AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z @ 0xF5BC4 (-SpCreateSurface@@YG-AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z @ 0xF62D8 (-DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QAE@XZ @ 0xF6AB4 (--1DEVLOCKOBJ_WNDOBJ@@QAE@XZ.c)
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D84D0 (-iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     _NtGdiSetPixelFormat@8 @ 0x222992 (_NtGdiSetPixelFormat@8.c)
 *     _NtGdiSwapBuffers@4 @ 0x222B79 (_NtGdiSwapBuffers@4.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 */

void __thiscall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  if ( *((_DWORD *)this + 5) )
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 20));
}
