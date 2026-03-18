/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x1408E438C
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x140567400 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14076E304 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsScenarioStateChange @ 0x14076E350 (PopStatsScenarioStateChange.c)
 */

void __fastcall PopPowerRequestNotifyMobileHotspotChanged(char a1)
{
  unsigned __int64 v2; // rcx

  PopAcquirePowerRequestPushLock(1);
  BYTE1(PopExecutionRequiredContext) = a1;
  PopStatsScenarioStateChange(1LL, a1);
  PopHandleExecutionRequiredEnablementUpdate(v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
