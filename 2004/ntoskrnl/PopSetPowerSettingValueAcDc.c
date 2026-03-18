/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1406A7304
 * Callers:
 *     PopScanIdleList @ 0x1402DCEA0 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403C90B0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x1405699B0 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1405CF974 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x140712414 (PopEvaluateGlobalUserStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x14076BFE8 (PopUpdateConsoleDisplayState.c)
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14077C4D0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14077C6C0 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14078229C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1407BDB28 (PopMonitorProcessLoop.c)
 *     PopEsPublishState @ 0x1407C1110 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x1408E4344 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1408EC5E0 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408ECC3C (PopPdcIdleResiliencyCallback.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408F1EB4 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1406A7D78 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(LPCGUID SettingGuid, __int64 a2, void *Src)
{
  int v5; // eax
  int v6; // ebp
  int v7; // eax

  v5 = PopSetPowerSettingValue(SettingGuid, Src);
  v6 = 0;
  if ( v5 < 0 )
    v6 = v5;
  v7 = PopSetPowerSettingValue(SettingGuid, Src);
  if ( v7 < 0 && v6 >= 0 )
    return (unsigned int)v7;
  return (unsigned int)v6;
}
