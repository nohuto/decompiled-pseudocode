/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140228560
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1402255A0 (KiGetNextTimerExpirationDueTime.c)
 *     PoExecuteIdleCheck @ 0x140227E50 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x140228E60 (PpmParkSteerInterrupts.c)
 *     MmOutSwapProcess @ 0x14024A494 (MmOutSwapProcess.c)
 *     KiIpiSendRequest @ 0x14027AED0 (KiIpiSendRequest.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x14027B394 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x1402C8000 (KeRemoveQueueDpcEx.c)
 *     EmonQueryInformation @ 0x140376BF0 (EmonQueryInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C2194 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalpQueryProfileSourceList @ 0x1404BF010 (HalpQueryProfileSourceList.c)
 *     Amd64QueryInformation @ 0x1404DDDA0 (Amd64QueryInformation.c)
 *     HvlParkedVirtualProcessors @ 0x1404F7F50 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x14051C360 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x140565510 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140567CF8 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1406B0614 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14077CE80 (PspSetProcessAffinityUpdateMode.c)
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     PpmParkParkingAvailable @ 0x1407BAA10 (PpmParkParkingAvailable.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1407BB938 (PpmHeteroComputeRelativePerformance.c)
 *     RtlUpdateSwapReference @ 0x1407CACBC (RtlUpdateSwapReference.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A58C (EtwpLoadMicroarchitecturalProfileGroup.c)
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
