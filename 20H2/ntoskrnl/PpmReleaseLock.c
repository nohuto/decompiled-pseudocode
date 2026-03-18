/*
 * XREFs of PpmReleaseLock @ 0x140288880
 * Callers:
 *     PpmCheckRun @ 0x1402887D0 (PpmCheckRun.c)
 *     PoNotifyVSyncChange @ 0x14033D9B0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14036C010 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x14038D57C (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckPausePpmEngineForSx @ 0x14038D60C (PpmCheckPausePpmEngineForSx.c)
 *     PpmRegisterPerfCap @ 0x140392680 (PpmRegisterPerfCap.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CD224 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140563D34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140565BF4 (PpmSetExitLatencySamplingPercentage.c)
 *     PopDeepSleepEvaluateCallback @ 0x140575C70 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14057C004 (PpmParkSetLpiCap.c)
 *     PpmPerfTelemetryWorker @ 0x1406E0B60 (PpmPerfTelemetryWorker.c)
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 *     PpmInfoReleaseLocks @ 0x1406FAF58 (PpmInfoReleaseLocks.c)
 *     PopCheckResiliencyScenarios @ 0x14071EB50 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140775C4C (PopEnforceResiliencyScenarios.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407877FC (PpmPerfUpdateDomainPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B5080 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407B5AA0 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1407C1468 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407CF810 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x1407D0F70 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408E6950 (PopWnfFullscreenVideoCallback.c)
 *     PpmClearSimulatedLoad @ 0x1408E88E4 (PpmClearSimulatedLoad.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E8A0C (PpmPerfGetBrandedFrequency.c)
 *     PpmSetSimulatedLoad @ 0x1408E8C70 (PpmSetSimulatedLoad.c)
 *     PpmUpdatePerfStates @ 0x1408E8D90 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x1408F2150 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F2FC0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x1408F831C (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x1408F8488 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x1408F8910 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1408F91A0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1408FBAF4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408FBBF4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x140A6E8E4 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
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
