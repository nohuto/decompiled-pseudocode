/*
 * XREFs of PopPdcIdleResiliencyCallback @ 0x1408F284C
 * Callers:
 *     PdcPoResiliencyClient @ 0x1408F2270 (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmQueryTime @ 0x1403C1BB0 (PpmQueryTime.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140564DA4 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x14056785C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x140568FD0 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x140569D4C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14056AC30 (PopFxResumeDeviceAccounting.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140574A7C (PopAccumulateNonActivatedCpuTime.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140574E48 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1405755A8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x140579D64 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopCheckResiliencyScenarios @ 0x14071EB50 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407200D8 (PopSetPowerSettingValueAcDc.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x1408E5A94 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopDripsWatchdogStartWatchdog @ 0x1408F1D54 (PopDripsWatchdogStartWatchdog.c)
 *     PopDripsWatchdogStopWatchdog @ 0x1408F1EC4 (PopDripsWatchdogStopWatchdog.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

void __fastcall __noreturn PopPdcIdleResiliencyCallback(int a1, unsigned __int8 a2)
{
  int v2; // edi
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  PopAcquirePolicyLock(a1);
  PopPdcIdleResiliency = v2;
  v3 = v2;
  PopSetPowerSettingValueAcDc(&GUID_PDC_IDLE_RESILIENCY_ENGAGED, 4u, &v3);
  PopCheckResiliencyScenarios();
  PopAccumulateNonActivatedCpuTime(v2, &qword_140C4FDE8, &qword_140C4FDF0);
  PpmQueryTime();
}
