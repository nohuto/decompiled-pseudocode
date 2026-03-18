/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1402631C0
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x140259EC4 (ExpAllocateFannedOutPushLock.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1402630FC (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x140263154 (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14039E71C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14039F0DC (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14039F294 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403A0424 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpHvInitMcaPcrContext @ 0x1403D2700 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403D9134 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x14056D7D0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x14057158C (KeStartProfile.c)
 *     PpmEventHgsHardwareTable @ 0x1405D997C (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsNormalizedTable @ 0x1405D9B84 (PpmEventHgsNormalizedTable.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406360C0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpInitLoggerContext @ 0x1406EFD44 (EtwpInitLoggerContext.c)
 *     KeInitializeProcess @ 0x14070A268 (KeInitializeProcess.c)
 *     EtwpInitializeSiloState @ 0x140851114 (EtwpInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x1409E01E4 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EEA80 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1409EF014 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x140AFCEF0 (ExpInitSystemPhase1.c)
 *     HalpDmaAllocateMappingResources @ 0x140B1DD34 (HalpDmaAllocateMappingResources.c)
 *     PpmInitHeteroEngine @ 0x140B2E208 (PpmInitHeteroEngine.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rcx
  unsigned __int64 v3; // rax

  if ( KeDynamicPartitioningSupported )
  {
    if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
      return KeMaximumProcessors;
    else
      return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
  }
  else
  {
    if ( GroupNumber == 0xFFFF )
    {
      LODWORD(v1) = KeNumberProcessors_0;
    }
    else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
    {
      LODWORD(v1) = 0;
    }
    else
    {
      v3 = qword_140D06E48[GroupNumber] - (((unsigned __int64)qword_140D06E48[GroupNumber] >> 1) & 0x5555555555555555LL);
      return (0x101010101010101LL
            * (((v3 & 0x3333333333333333LL)
              + ((v3 >> 2) & 0x3333333333333333LL)
              + (((v3 & 0x3333333333333333LL) + ((v3 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
    return v1;
  }
}
