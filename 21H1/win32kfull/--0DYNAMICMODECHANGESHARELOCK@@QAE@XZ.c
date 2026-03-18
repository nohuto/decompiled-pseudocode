/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE
 * Callers:
 *     _GreGetSystemPaletteUse@4 @ 0x125E2 (_GreGetSystemPaletteUse@4.c)
 *     _GreRealizeDefaultPalette@8 @ 0x12656 (_GreRealizeDefaultPalette@8.c)
 *     _vCleanupUMWindowlessSprite@4 @ 0x1ECE2 (_vCleanupUMWindowlessSprite@4.c)
 *     _GreAccNotifyWindow@8 @ 0x20D36 (_GreAccNotifyWindow@8.c)
 *     _GreSetBitmapBits@16 @ 0x20D9E (_GreSetBitmapBits@16.c)
 *     _GreSetRedirectionSurfaceSignaling@24 @ 0x21A20 (_GreSetRedirectionSurfaceSignaling@24.c)
 *     ?TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0x5A290 (-TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z.c)
 *     ?iSelect@DC@@QAEHPAVREGION@@H@Z @ 0x5A6CE (-iSelect@DC@@QAEHPAVREGION@@H@Z.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     ?iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z @ 0x7A3DE (-iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z.c)
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 *     ?bSaveRegion@@YGHAAVDCOBJ@@J@Z @ 0x9309C (-bSaveRegion@@YGHAAVDCOBJ@@J@Z.c)
 *     _GreBeginGdiRenderingToDxSurface@12 @ 0xA5D46 (_GreBeginGdiRenderingToDxSurface@12.c)
 *     _GreEndGdiRenderingToDxSurface@16 @ 0xA6DFC (_GreEndGdiRenderingToDxSurface@16.c)
 *     _GreDxgkPreSessionDisconnected@4 @ 0xAEF78 (_GreDxgkPreSessionDisconnected@4.c)
 *     _GreLddmProcessDesktopSwitch@0 @ 0xB2310 (_GreLddmProcessDesktopSwitch@0.c)
 *     ?bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z @ 0xB3164 (-bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z.c)
 *     _GreRealizePalette@4 @ 0xBF88E (_GreRealizePalette@4.c)
 *     _NtGdiDdDDIDestroyDCFromMemory@4 @ 0xCB254 (_NtGdiDdDDIDestroyDCFromMemory@4.c)
 *     _GreGetBitmapBits@16 @ 0xE2B7A (_GreGetBitmapBits@16.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z @ 0x1CD2E0 (-SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z @ 0x1CD3D4 (-SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z.c)
 *     _GreHLsurfSetPresentFlags@12 @ 0x1CE44E (_GreHLsurfSetPresentFlags@12.c)
 *     _GreHLsurfSetUpdateId@16 @ 0x1CE54B (_GreHLsurfSetUpdateId@16.c)
 *     _NtGdiGetMonitorID@12 @ 0x1D1907 (_NtGdiGetMonitorID@12.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z @ 0x1D2FCB (-DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z @ 0x1D32E2 (-DxLddmSharedPrimaryUnLockNotification@@YGJU_LUID@@I@Z.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 *     _GreDxDwmShutdown@0 @ 0x1D4492 (_GreDxDwmShutdown@0.c)
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 *     _GreGetSystemPaletteEntries@16 @ 0x21E38F (_GreGetSystemPaletteEntries@16.c)
 *     _GreSetSystemPaletteUse@8 @ 0x21E4BA (_GreSetSystemPaletteUse@8.c)
 *     _NtGdiUpdateColors@4 @ 0x21EB48 (_NtGdiUpdateColors@4.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z @ 0x223193 (-ulAnimatePalette@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z.c)
 *     _GreCreateDIBitmapComp@44 @ 0x226A90 (_GreCreateDIBitmapComp@44.c)
 *     _GreGetBitmapDimension@8 @ 0x226B65 (_GreGetBitmapDimension@8.c)
 *     _GreSetBitmapDimension@16 @ 0x226BE6 (_GreSetBitmapDimension@16.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGESHARELOCK *__thiscall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  return this;
}
