/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x14070E5A8
 * Callers:
 *     PopScanIdleList @ 0x14035C514 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x1403C82A0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x140569360 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1405CE5A4 (PopSessionWinlogonNotification.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406FEC90 (PopEvaluateGlobalUserStatus.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x14076AC6C (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x14076D0B4 (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14077A0C0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14077A2B0 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140787CBC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1407BA9B8 (PopMonitorProcessLoop.c)
 *     PopEsPublishState @ 0x1407BDEF0 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x1408E30C4 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1408EB360 (PdcPoReportLidState.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408EB9BC (PopPdcIdleResiliencyCallback.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408F0BC4 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x14070F018 (PopSetPowerSettingValue.c)
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
