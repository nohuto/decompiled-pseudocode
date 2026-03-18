/*
 * XREFs of UserIsWddmConnectedSession @ 0x1C0093360
 * Callers:
 *     EngQueryW32kCddInterface @ 0x1C0046B30 (EngQueryW32kCddInterface.c)
 *     UpdateGraphicsDeviceList @ 0x1C0093320 (UpdateGraphicsDeviceList.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0093390 (DrvUpdateGraphicsDeviceList.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0094B40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1C0095DB0 (NtUserQueryDisplayConfig.c)
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C009CA1C (DrvChangeDisplaySettingsPreValidate.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     GreSuspendDirectDraw @ 0x1C00B2010 (GreSuspendDirectDraw.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00B6BAC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvSetMonitorPowerState @ 0x1C00C82D0 (DrvSetMonitorPowerState.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8320 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00CFBB0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D31B0 (DrvSetDisplayConfigValidateParams.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01263B4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0127A34 (VideoPortCalloutThread.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C012AD20 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0138610 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0138C00 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C013DBA0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C0096D70 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 UserIsWddmConnectedSession()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !gProtocolType || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 1;
  return v0;
}
