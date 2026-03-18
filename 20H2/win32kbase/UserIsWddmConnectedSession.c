/*
 * XREFs of UserIsWddmConnectedSession @ 0x1C0053270
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C000D280 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C000D570 (NtUserDisplayConfigGetDeviceInfo.c)
 *     GreSuspendDirectDraw @ 0x1C0011120 (GreSuspendDirectDraw.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00522D0 (DrvUpdateGraphicsDeviceList.c)
 *     UpdateGraphicsDeviceList @ 0x1C0053230 (UpdateGraphicsDeviceList.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0064594 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C006DF8C (DrvChangeDisplaySettingsPreValidate.c)
 *     EngQueryW32kCddInterface @ 0x1C00B4E30 (EngQueryW32kCddInterface.c)
 *     DrvSetMonitorPowerState @ 0x1C00C91C0 (DrvSetMonitorPowerState.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C9210 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D0244 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D3AF0 (DrvSetDisplayConfigValidateParams.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E0D4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C01229E0 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C01302D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0130C10 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C0135BB0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C000DF90 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 UserIsWddmConnectedSession()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !gProtocolType || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 1;
  return v0;
}
