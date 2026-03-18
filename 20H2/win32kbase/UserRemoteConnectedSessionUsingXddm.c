/*
 * XREFs of UserRemoteConnectedSessionUsingXddm @ 0x1C0013B40
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C000D0C0 (NtUserGetDisplayConfigBufferSizes.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C00139BC (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00BBFE0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00BC040 (AcquireCriticalSectionAndCheckState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D0244 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D000 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 UserRemoteConnectedSessionUsingXddm()
{
  unsigned int v0; // ecx

  v0 = 1;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || gRemoteSessionUseWddm )
    return 0;
  return v0;
}
