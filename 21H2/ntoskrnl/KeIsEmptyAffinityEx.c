/*
 * XREFs of KeIsEmptyAffinityEx @ 0x1402CCE60
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x140246860 (KeRemoveQueueDpcEx.c)
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140269334 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1402C9EA0 (KiGetNextTimerExpirationDueTime.c)
 *     PoExecuteIdleCheck @ 0x1402CC750 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x1402CD760 (PpmParkSteerInterrupts.c)
 *     MmOutSwapProcess @ 0x1402EECE4 (MmOutSwapProcess.c)
 *     EmonQueryInformation @ 0x140376740 (EmonQueryInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C25C4 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalpQueryProfileSourceList @ 0x1404BF250 (HalpQueryProfileSourceList.c)
 *     Amd64QueryInformation @ 0x1404DDFE0 (Amd64QueryInformation.c)
 *     HvlParkedVirtualProcessors @ 0x1404F7ED0 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x14051C5A0 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x140565750 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140567F38 (PpmUnlockProcessors.c)
 *     PspSetEffectiveJobLimits @ 0x14060F644 (PspSetEffectiveJobLimits.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14077D040 (PspSetProcessAffinityUpdateMode.c)
 *     PpmCheckInitProcessors @ 0x1407BA2A8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PpmParkParkingAvailable @ 0x1407BB1A0 (PpmParkParkingAvailable.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1407BC0C8 (PpmHeteroComputeRelativePerformance.c)
 *     RtlUpdateSwapReference @ 0x1407CAFDC (RtlUpdateSwapReference.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A75C (EtwpLoadMicroarchitecturalProfileGroup.c)
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
