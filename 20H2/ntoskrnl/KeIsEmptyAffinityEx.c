/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140286FE0
 * Callers:
 *     PoExecuteIdleCheck @ 0x14027D7F0 (PoExecuteIdleCheck.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140284DB0 (KiGetNextTimerExpirationDueTime.c)
 *     PpmParkSteerInterrupts @ 0x1402878E0 (PpmParkSteerInterrupts.c)
 *     MmOutSwapProcess @ 0x1402DD934 (MmOutSwapProcess.c)
 *     KiIpiSendRequest @ 0x1402EA7B0 (KiIpiSendRequest.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x1402EAC74 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x1403605E0 (KeRemoveQueueDpcEx.c)
 *     EmonQueryInformation @ 0x140376760 (EmonQueryInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C1944 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalpQueryProfileSourceList @ 0x1404BD640 (HalpQueryProfileSourceList.c)
 *     Amd64QueryInformation @ 0x1404DC390 (Amd64QueryInformation.c)
 *     HvlParkedVirtualProcessors @ 0x1404F63B0 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x14051A880 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x140563A40 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140566228 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1406D2934 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407790A0 (PspSetProcessAffinityUpdateMode.c)
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B5080 (PpmRegisterPerfStates.c)
 *     PpmParkParkingAvailable @ 0x1407B5DB0 (PpmParkParkingAvailable.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1407B6CD8 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093CDBC (EtwpLoadMicroarchitecturalProfileGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax

  v1 = 0;
  if ( !*a1 )
    return 1LL;
  while ( !*(_QWORD *)&a1[4 * v1 + 4] )
  {
    if ( ++v1 >= *a1 )
      return 1LL;
  }
  return 0LL;
}
