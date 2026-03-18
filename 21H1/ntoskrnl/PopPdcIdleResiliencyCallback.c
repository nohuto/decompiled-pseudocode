/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x1408EB9BC
 * Callers:
 *     PdcPoResiliencyClient @ 0x1408EB3E0 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x1403BF46C (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140560D74 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x14056382C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x140564F80 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x140565CC8 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140566BB0 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1405709FC (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140570DC8 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140571528 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x140575CE4 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopCheckResiliencyScenarios @ 0x14070E4E0 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x14070E5A8 (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408DE9F4 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408EAEC4 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408EB034 (PopDripsWatchdogStopWatchdog.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
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
  PopAccumulateNonActivatedCpuTime(v2, &qword_140C4FEA8, &qword_140C4FEB0);
  PpmQueryTime();
}
