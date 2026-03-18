/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x1408DD23C
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x1405633D0 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14075D984 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsScenarioStateChange @ 0x14075D9D0 (PopStatsScenarioStateChange.c)
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
