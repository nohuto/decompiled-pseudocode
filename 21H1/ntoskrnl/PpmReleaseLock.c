/*
 * XREFs of PpmReleaseLock @ 0x140278680
 * Callers:
 *     PpmCheckRun @ 0x1402785D0 (PpmCheckRun.c)
 *     PoNotifyVSyncChange @ 0x14035D110 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140369670 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14038A1E0 (PpmCheckResumeStatisticsCollection.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038A218 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmRegisterPerfCap @ 0x14038F650 (PpmRegisterPerfCap.c)
 *     PpmHeteroHgsBackupInit @ 0x1403C9804 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14055FD04 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140561BC4 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x140571BF0 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x140577F84 (PpmParkSetLpiCap.c)
 *     PpmPerfTelemetryWorker @ 0x1406EA8C0 (PpmPerfTelemetryWorker.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x14070E4E0 (PopCheckResiliencyScenarios.c)
 *     PpmInfoReleaseLocks @ 0x14070F858 (PpmInfoReleaseLocks.c)
 *     PopEnforceResiliencyScenarios @ 0x14076525C (PopEnforceResiliencyScenarios.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140776DEC (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407A5360 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407B03A8 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407BDD60 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x1407BF270 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408DF8B0 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E1824 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E194C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E1BB0 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E1CD0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EB2C0 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408EC130 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x1408F141C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F1588 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x1408F1A10 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F22A0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F4BF4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F4CF4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A67C34 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  return result;
}
