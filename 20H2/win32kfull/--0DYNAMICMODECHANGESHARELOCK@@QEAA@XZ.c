/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034
 * Callers:
 *     GreAccNotifyWindow @ 0x1C000E198 (GreAccNotifyWindow.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00144F4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C002AA98 (GreLddmProcessDesktopSwitch.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00687E0 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00A0B9C (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00B4DE0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00C2630 (vCleanupUMWindowlessSprite.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00C2848 (GreSetRedirectionSurfaceSignaling.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00EE180 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreGetBitmapBits @ 0x1C00F1B94 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00F1EF0 (GreSetBitmapBits.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00FA3E0 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C010B8BC (GreEndGdiRenderingToDxSurface.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C010CAB8 (GreBeginGdiRenderingToDxSurface.c)
 *     GreRealizePalette @ 0x1C01134BC (GreRealizePalette.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0115980 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     GreCreateDIBitmapComp @ 0x1C0118928 (GreCreateDIBitmapComp.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C011FEE8 (GreDxgkPreSessionDisconnected.c)
 *     GreRealizeDefaultPalette @ 0x1C0121FD0 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C0123848 (GreGetSystemPaletteUse.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026D3AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026D97C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026DAB4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026F1D0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026F318 (GreHLsurfSetUpdateId.c)
 *     NtGdiGetMonitorID @ 0x1C0273900 (NtGdiGetMonitorID.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C027564C (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02759BC (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C02764D0 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C02774A0 (GreDxDwmShutdown.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C029FFCC (GreCreateBitmapFromDxSurface.c)
 *     GreCreateHalftonePalette @ 0x1C02B635C (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B64E0 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02B6800 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B6F90 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BBCE0 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02BF950 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02BF9F4 (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
