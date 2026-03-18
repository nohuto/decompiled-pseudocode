/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C002B060 (DrvEnumDisplaySettings.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002EC90 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     GreSfmDwmShutdown @ 0x1C003F900 (GreSfmDwmShutdown.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00433F0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ldevLoadInternal @ 0x1C0044270 (ldevLoadInternal.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0046DB0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     GreLockPointer @ 0x1C004C710 (GreLockPointer.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C004DE20 (DrvInitializeDxgkrnlDpiCache.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C004E3B8 (DrvCleanupAndDestroyMDEV.c)
 *     GreLockDynamicModeChange @ 0x1C0050450 (GreLockDynamicModeChange.c)
 *     hdcOpenDCW @ 0x1C0069E20 (hdcOpenDCW.c)
 *     DrvGetHDEV @ 0x1C006A170 (DrvGetHDEV.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00749B0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreLockDwmState @ 0x1C0074C80 (GreLockDwmState.c)
 *     GreLockSprite @ 0x1C0075E70 (GreLockSprite.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00779B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C008B9DC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0090650 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C00A9B18 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ldevUnloadImage @ 0x1C00AD180 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C00AD2C0 (ldevLoadDriver.c)
 *     DrvDestroyMDEV @ 0x1C00ADC00 (DrvDestroyMDEV.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00ADDC4 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B03A4 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     DrvDisableMDEV @ 0x1C00B0730 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C00B09B8 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B0C7C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ApplyPathsModality @ 0x1C00B125C (ApplyPathsModality.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00B2230 (DrvNotifyModeChangeStartStop.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C00B4640 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreLockDisplayDevice @ 0x1C00B5170 (GreLockDisplayDevice.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00B6BAC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C5914 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00CA410 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C00CA600 (HDXDrvEscape.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00CA8B0 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CB454 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CF0B4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0147A04 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014896C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C014D860 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C014DBD4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014E7D8 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014EC64 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C0150514 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C01507C0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0150DD0 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C01510C0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C01513B4 (DrvFunctionalizeDisplayConfig.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C0155140 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C0155EA0 (EngDeleteDriverObj.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C01566C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreExclusive(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(a1, a2, a3, a2, a3, a1);
  }
  return result;
}
