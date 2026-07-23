/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1402696D0
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14022DD90 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x14024D01C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x140269670 (ExpGetSystemProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x140391378 (ExpAllocateFannedOutPushLock.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x140391420 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14039153C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1403915D4 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5920 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403CA4CC (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1405157A0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x14051BE0C (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405AEE60 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA70C (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x1406B4C60 (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x14079ADF8 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x1409398D0 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942488 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140942A18 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x140A3DEBC (ExpInitSystemPhase1.c)
 *     HalpDmaAllocateMappingResources @ 0x140A66DA8 (HalpDmaAllocateMappingResources.c)
 *     PpmInitHeteroEngine @ 0x140A73E48 (PpmInitHeteroEngine.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rcx
  int v3; // edx

  if ( KeDynamicPartitioningSupported )
  {
    if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    {
      LODWORD(v1) = KeMaximumProcessors;
    }
    else
    {
      v3 = 0;
      if ( GroupNumber < (unsigned __int16)KiMaximumGroups )
        v3 = KiMaximumGroupSize;
      LODWORD(v1) = v3;
    }
  }
  else if ( GroupNumber == 0xFFFF )
  {
    LODWORD(v1) = KeNumberProcessors_0;
  }
  else if ( GroupNumber >= (unsigned __int16)KiActiveGroups )
  {
    LODWORD(v1) = 0;
  }
  else
  {
    v2 = qword_140CFC848[GroupNumber] - (((unsigned __int64)qword_140CFC848[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
