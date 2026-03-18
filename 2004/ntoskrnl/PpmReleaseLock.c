/*
 * XREFs of PpmReleaseLock @ 0x14021F630
 * Callers:
 *     PpmCheckRun @ 0x14021F580 (PpmCheckRun.c)
 *     PoNotifyVSyncChange @ 0x1402DF000 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14036A030 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumeStatisticsCollection @ 0x14038B250 (PpmCheckResumeStatisticsCollection.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038B288 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmRegisterPerfCap @ 0x1403901C0 (PpmRegisterPerfCap.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CA5E4 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140560354 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140562214 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x140572240 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x1405785D4 (PpmParkSetLpiCap.c)
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x1406A723C (PopCheckResiliencyScenarios.c)
 *     PpmInfoReleaseLocks @ 0x1406A85B8 (PpmInfoReleaseLocks.c)
 *     PpmPerfTelemetryWorker @ 0x14070E530 (PpmPerfTelemetryWorker.c)
 *     PopEnforceResiliencyScenarios @ 0x140766C1C (PopEnforceResiliencyScenarios.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407791FC (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407A7AB0 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407B3518 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407C0F80 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x1407C2770 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E0B10 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E2AA4 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E2BCC (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E2E30 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E2F50 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408EC540 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408ED3B0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x1408F270C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F2878 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x1408F2D00 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F3590 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408F5EE4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F5FE4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A680B4 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}
