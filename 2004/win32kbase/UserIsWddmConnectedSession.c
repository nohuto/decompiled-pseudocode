/*
 * XREFs of UserIsWddmConnectedSession @ 0x1C00B4A70
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C004F950 (GreSuspendDirectDraw.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00A4358 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C00B13D0 (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 *     NtUserQueryDisplayConfig @ 0x1C00B3D90 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C00B4150 (NtUserDisplayConfigGetDeviceInfo.c)
 *     UpdateGraphicsDeviceList @ 0x1C00B4A30 (UpdateGraphicsDeviceList.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00B4AA0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     EngQueryW32kCddInterface @ 0x1C00B7170 (EngQueryW32kCddInterface.c)
 *     DrvSetMonitorPowerState @ 0x1C00C8900 (DrvSetMonitorPowerState.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8950 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D05B0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D3C30 (DrvSetDisplayConfigValidateParams.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0120424 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0124D30 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0132620 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0132F60 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C0137F00 (NtUserSetDisplayConfig.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C00B39E0 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 UserIsWddmConnectedSession()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !gProtocolType || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 1;
  return v0;
}
