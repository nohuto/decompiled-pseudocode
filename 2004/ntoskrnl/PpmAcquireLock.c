/*
 * XREFs of PpmAcquireLock @ 0x1402DF294
 * Callers:
 *     PoNotifyVSyncChange @ 0x1402DF000 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14036A030 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14037FC70 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14038B250 (PpmCheckResumeStatisticsCollection.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038B2E0 (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x1403901C0 (PpmRegisterPerfCap.c)
 *     PpmPerfClearBootOverrides @ 0x1403A0570 (PpmPerfClearBootOverrides.c)
 *     PopIntSteerSetMode @ 0x1403BF350 (PopIntSteerSetMode.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CA5E4 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140560354 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140562214 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x140572240 (PopDeepSleepEvaluateCallback.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140572760 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkSetLpiCap @ 0x1405785D4 (PpmParkSetLpiCap.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1406A723C (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x1406A74A0 (PpmSetProfilePolicySetting.c)
 *     PpmPerfTelemetryWorker @ 0x14070E530 (PpmPerfTelemetryWorker.c)
 *     PopEnforceResiliencyScenarios @ 0x140766C1C (PopEnforceResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x140767370 (PpmPerfReApplyStates.c)
 *     PopPerfBoostPowerRequest @ 0x140779150 (PopPerfBoostPowerRequest.c)
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407A7AB0 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407B3518 (PpmRegisterProfiles.c)
 *     PpmEnableProfile @ 0x1407B39C4 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407C0F80 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407C1E10 (PopSetupHighPerfPowerRequest.c)
 *     PpmEventTraceControlCallback @ 0x1407C2770 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E0B10 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E2AA4 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E2BCC (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E2E30 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E2F50 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EC540 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408ED6D0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1408F270C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F2878 (PpmDisableProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1408F2C5C (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1408F2D00 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F3590 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F5EE4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F5FE4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A680B4 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
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
