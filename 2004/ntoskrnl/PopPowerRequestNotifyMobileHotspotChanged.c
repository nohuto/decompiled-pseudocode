/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x1408DE54C
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x140563A20 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A85E8 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14075FC94 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsScenarioStateChange @ 0x14075FCE0 (PopStatsScenarioStateChange.c)
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
