/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x14076BFE8
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x1406A723C (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A7304 (PopSetPowerSettingValueAcDc.c)
 *     PopUpdateLastUserInputTime @ 0x14076C124 (PopUpdateLastUserInputTime.c)
 *     PopSpoilBatteryEstimate @ 0x14076C16C (PopSpoilBatteryEstimate.c)
 *     PopRecordDisplayState @ 0x14076C29C (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x14076C2E8 (PopDiagTraceConsoleDisplayState.c)
 */

void __fastcall PopUpdateConsoleDisplayState(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    v5 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4LL, &v5);
    PopRecordDisplayState(a1);
    v5 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4LL, &v5);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v5);
    PopSpoilBatteryEstimate(0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
    PopUpdateLastUserInputTime(v3, v2, v4);
    dword_140C0F1A0 = a1;
    PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  }
}
