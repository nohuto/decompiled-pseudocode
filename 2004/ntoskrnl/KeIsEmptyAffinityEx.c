/*
 * XREFs of KeIsEmptyAffinityEx @ 0x14021D300
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x14021A340 (KiGetNextTimerExpirationDueTime.c)
 *     PoExecuteIdleCheck @ 0x14021CBF0 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x14021DC00 (PpmParkSteerInterrupts.c)
 *     MmOutSwapProcess @ 0x140280DDC (MmOutSwapProcess.c)
 *     KiIpiSendRequest @ 0x1402FD180 (KiIpiSendRequest.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x1402FD644 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KeRemoveQueueDpcEx @ 0x1402FFC20 (KeRemoveQueueDpcEx.c)
 *     EmonQueryInformation @ 0x1403747D0 (EmonQueryInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C02C4 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalpQueryProfileSourceList @ 0x1404BA120 (HalpQueryProfileSourceList.c)
 *     Amd64QueryInformation @ 0x1404D8E00 (Amd64QueryInformation.c)
 *     HvlParkedVirtualProcessors @ 0x1404F2B40 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x140516EB0 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x140560060 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140562848 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x140656C54 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14076AA90 (PspSetProcessAffinityUpdateMode.c)
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     PpmParkParkingAvailable @ 0x1407A7D90 (PpmParkParkingAvailable.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1407A8CB4 (PpmHeteroComputeRelativePerformance.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x140936F8C (EtwpLoadMicroarchitecturalProfileGroup.c)
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
