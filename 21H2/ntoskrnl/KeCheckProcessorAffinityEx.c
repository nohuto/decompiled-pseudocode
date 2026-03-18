/*
 * XREFs of KeCheckProcessorAffinityEx @ 0x140345D30
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x14020EE7C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KiCheckKeepAlive @ 0x1402F36BC (KiCheckKeepAlive.c)
 *     PoIdle @ 0x140305BD0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
 *     PpmCheckContinueExecution @ 0x140343BA0 (PpmCheckContinueExecution.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403CF26C (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonEnableMonitoring @ 0x140520330 (EmonEnableMonitoring.c)
 *     EmonRemoveProfileSource @ 0x140521670 (EmonRemoveProfileSource.c)
 *     Amd64EnableMonitoring @ 0x14052B860 (Amd64EnableMonitoring.c)
 *     Amd64RemoveProfileSource @ 0x14052C660 (Amd64RemoveProfileSource.c)
 *     KiProcessProfileList @ 0x140571980 (KiProcessProfileList.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057A2A0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405C7798 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmTestAndLockProcessor @ 0x1405C8D78 (PpmTestAndLockProcessor.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405C94E0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmParkReportParkedCore @ 0x1405DD1A8 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1405DD260 (PpmParkReportSoftParkChange.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14084A618 (PopDetectSimulatedHeteroProcessors.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 *     KiSetCacheInformationAmd @ 0x140A69A2C (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // rdx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  v4 = v3 >> 6;
  if ( (unsigned int)v4 >= *a1 )
    return 0LL;
  else
    return (*(_QWORD *)&a1[4 * v4 + 4] >> (v3 & 0x3F)) & 1LL;
}
