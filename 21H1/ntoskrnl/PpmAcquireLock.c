/*
 * XREFs of PpmAcquireLock @ 0x14035D3A4
 * Callers:
 *     PoNotifyVSyncChange @ 0x14035D110 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140369670 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14037F310 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14038A1E0 (PpmCheckResumeStatisticsCollection.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038A270 (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x14038F650 (PpmRegisterPerfCap.c)
 *     PpmPerfClearBootOverrides @ 0x14039FDE0 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x1403BE3C0 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x1403C9804 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14055FD04 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140561BC4 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x140571BF0 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140572110 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x140577F84 (PpmParkSetLpiCap.c)
 *     PpmPerfTelemetryWorker @ 0x1406EA8C0 (PpmPerfTelemetryWorker.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x14070E4E0 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x14070E740 (PpmSetProfilePolicySetting.c)
 *     PopEnforceResiliencyScenarios @ 0x14076525C (PopEnforceResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x1407659B0 (PpmPerfReApplyStates.c)
 *     PopPerfBoostPowerRequest @ 0x140776D40 (PopPerfBoostPowerRequest.c)
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407A5360 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407B03A8 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x1407B0854 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407BDD60 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407BEB20 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x1407BF270 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408DF8B0 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E1824 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E194C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E1BB0 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E1CD0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EB2C0 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408EC450 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1408F141C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F1588 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1408F196C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1408F1A10 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F22A0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F4BF4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F4CF4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A67C34 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall PpmAcquireLock(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}
