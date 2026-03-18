/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4
 * Callers:
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001B944 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C002D8E0 (GreSetRedirectionSurfaceSignaling.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C002DAE0 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C002E0B8 (GreBeginGdiRenderingToDxSurface.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C002E1FC (GreEndGdiRenderingToDxSurface.c)
 *     GreAccNotifyWindow @ 0x1C002E2CC (GreAccNotifyWindow.c)
 *     GreGetBitmapBits @ 0x1C002E424 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C002E780 (GreSetBitmapBits.c)
 *     vCleanupUMWindowlessSprite @ 0x1C002F0B0 (vCleanupUMWindowlessSprite.c)
 *     GreRealizePalette @ 0x1C003075C (GreRealizePalette.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C0050B78 (GreLddmProcessDesktopSwitch.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00584D4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00754BC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0079160 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C00BBEF8 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C00BC03C (GreGetSystemPaletteUse.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00F3DF0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0114920 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     GreCreateDIBitmapComp @ 0x1C01173D8 (GreCreateDIBitmapComp.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C011E788 (GreDxgkPreSessionDisconnected.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026EF9C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026F0D4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C02707F0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0270938 (GreHLsurfSetUpdateId.c)
 *     NtGdiGetMonitorID @ 0x1C0274ED0 (NtGdiGetMonitorID.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0276BBC (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0276F2C (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0277A40 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C0278A10 (GreDxDwmShutdown.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C02A141C (GreCreateBitmapFromDxSurface.c)
 *     GreCreateHalftonePalette @ 0x1C02B78FC (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B7A80 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02B7DA0 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B84F0 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BD240 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02C0EB0 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02C0F54 (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, a2, a3, a4);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
