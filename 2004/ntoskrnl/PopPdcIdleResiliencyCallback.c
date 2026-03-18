/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x1408ECC3C
 * Callers:
 *     PdcPoResiliencyClient @ 0x1408EC660 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x1403C03FC (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1405613C4 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x140563E7C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1405655D0 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x140566318 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140567200 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14057104C (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140571418 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140571B78 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x140576334 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopCheckResiliencyScenarios @ 0x1406A723C (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A7304 (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408DFC54 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408EC144 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408EC2B4 (PopDripsWatchdogStopWatchdog.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

void __fastcall __noreturn PopPdcIdleResiliencyCallback(int a1, unsigned __int8 a2)
{
  int v2; // edi
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  PopAcquirePolicyLock(a1);
  PopPdcIdleResiliency = v2;
  v3 = v2;
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4LL, &v3);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(v2, &qword_140C4FD68, &qword_140C4FD70);
  PpmQueryTime();
}
