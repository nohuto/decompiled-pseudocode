/*
 * XREFs of KeIsEmptyAffinityEx @ 0x140276350
 * Callers:
 *     MmOutSwapProcess @ 0x1402446DC (MmOutSwapProcess.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140273390 (KiGetNextTimerExpirationDueTime.c)
 *     PoExecuteIdleCheck @ 0x140275C40 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x140276C50 (PpmParkSteerInterrupts.c)
 *     KeRemoveQueueDpcEx @ 0x140340050 (KeRemoveQueueDpcEx.c)
 *     KiIpiSendRequest @ 0x140359160 (KiIpiSendRequest.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140359624 (KiIpiEnlightenedGuestPriorityKick.c)
 *     EmonQueryInformation @ 0x1403739C0 (EmonQueryInformation.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403BF334 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalpQueryProfileSourceList @ 0x1404B9A40 (HalpQueryProfileSourceList.c)
 *     Amd64QueryInformation @ 0x1404D88F0 (Amd64QueryInformation.c)
 *     HvlParkedVirtualProcessors @ 0x1404F24F0 (HvlParkedVirtualProcessors.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     KiStopProfileTarget @ 0x140516860 (KiStopProfileTarget.c)
 *     PoInitiateProcessorWake @ 0x14055FA10 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x1405621F8 (PpmUnlockProcessors.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspSetEffectiveJobLimits @ 0x1406DCD44 (PspSetEffectiveJobLimits.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407686B0 (PspSetProcessAffinityUpdateMode.c)
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PpmParkParkingAvailable @ 0x1407A5640 (PpmParkParkingAvailable.c)
 *     PopInitializeHeteroProcessors @ 0x1407A5838 (PopInitializeHeteroProcessors.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x140935CEC (EtwpLoadMicroarchitecturalProfileGroup.c)
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
