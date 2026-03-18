/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C000C480 (DrvEnumDisplaySettings.c)
 *     ApplyPathsModality @ 0x1C00109B4 (ApplyPathsModality.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0010CB0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00113EC (DrvNotifyModeChangeStartStop.c)
 *     GreLockDisplayDevice @ 0x1C0011AC0 (GreLockDisplayDevice.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0014818 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00158F4 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0015994 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0015E30 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C00160B8 (DrvEnableMDEV.c)
 *     DrvDestroyMDEV @ 0x1C0016458 (DrvDestroyMDEV.c)
 *     ldevLoadDriver @ 0x1C00167D0 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1C0017DD0 (ldevUnloadImage.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001D6D4 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038370 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004BE7C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C004D220 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 *     DrvGetHDEV @ 0x1C005E220 (DrvGetHDEV.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005E5E0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreLockDwmState @ 0x1C005E790 (GreLockDwmState.c)
 *     GreLockSprite @ 0x1C005E870 (GreLockSprite.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C0060600 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0064594 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00A0850 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     GreSfmDwmShutdown @ 0x1C00AD5E0 (GreSfmDwmShutdown.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00B15B0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ldevLoadInternal @ 0x1C00B1C10 (ldevLoadInternal.c)
 *     GreLockPointer @ 0x1C00BA0C0 (GreLockPointer.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C00BBD50 (DrvInitializeDxgkrnlDpiCache.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00BC1E8 (DrvCleanupAndDestroyMDEV.c)
 *     GreLockDynamicModeChange @ 0x1C00BE3A0 (GreLockDynamicModeChange.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1350 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C52A4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00C9B60 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C00C9D50 (HDXDrvEscape.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00CA000 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CAE48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CF804 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013F1F4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014014C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0145040 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01453B4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0145FB8 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0146444 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C0147CF4 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0147FA0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C01485B0 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C01488A0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0148B94 (DrvFunctionalizeDisplayConfig.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C014C9A0 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C014D5A0 (EngDeleteDriverObj.c)
 * Callees:
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014DDC8 (McTemplateK0pqz_EtwWriteTransfer.c)
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
