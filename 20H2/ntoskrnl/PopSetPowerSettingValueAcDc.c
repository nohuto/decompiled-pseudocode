/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1407200D8
 * Callers:
 *     PopScanIdleList @ 0x140362C84 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403CBCF0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x14056D3E0 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1405D5E24 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x140720B34 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x14077D704 (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14078AAD0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14078ACC0 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1407903BC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1407CC3B8 (PopMonitorProcessLoop.c)
 *     PopEsPublishState @ 0x1407CF9A0 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x1408E9F54 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1408F21F0 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408F284C (PopPdcIdleResiliencyCallback.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408F7AC4 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1406FA718 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(LPCGUID SettingGuid, unsigned int a2, void *Src)
{
  int v6; // eax
  int v7; // ebp
  int v8; // eax

  v6 = PopSetPowerSettingValue(SettingGuid, 0xFFFFFFFF, 0, a2, Src);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  v8 = PopSetPowerSettingValue(SettingGuid, 0xFFFFFFFF, 1, a2, Src);
  if ( v8 < 0 && v7 >= 0 )
    return (unsigned int)v8;
  return (unsigned int)v7;
}
