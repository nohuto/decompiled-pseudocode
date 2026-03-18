/*
 * XREFs of PpmAcquireLock @ 0x14033EE5C
 * Callers:
 *     PoNotifyVSyncChange @ 0x14033D9B0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14036C010 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140381A30 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038D57C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038D60C (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x140392680 (PpmRegisterPerfCap.c)
 *     PpmPerfClearBootOverrides @ 0x1403A2A40 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x1403C09D0 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CD224 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140563D34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140565BF4 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x140575C70 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140576190 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x14057C004 (PpmParkSetLpiCap.c)
 *     PpmPerfTelemetryWorker @ 0x1406E0B60 (PpmPerfTelemetryWorker.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PpmSetProfilePolicySetting @ 0x1406F9E44 (PpmSetProfilePolicySetting.c)
 *     PopCheckResiliencyScenarios @ 0x14071EB50 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140775C4C (PopEnforceResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x1407763A0 (PpmPerfReApplyStates.c)
 *     PopPerfBoostPowerRequest @ 0x140787750 (PopPerfBoostPowerRequest.c)
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B5080 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407B5AA0 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407C1468 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x1407C1914 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407CF810 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D0610 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x1407D0F70 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E6950 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E88E4 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E8A0C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E8C70 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E8D90 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408F2150 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408F32E0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1408F831C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F8488 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1408F886C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1408F8910 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F91A0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408FBAF4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408FBBF4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A6E8E4 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
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
