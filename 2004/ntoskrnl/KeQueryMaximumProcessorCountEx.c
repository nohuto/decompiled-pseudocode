/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1402DE650
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x1402DD500 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemProcessorInformation @ 0x1402DE5F0 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1402DF404 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x14038E868 (ExpAllocateFannedOutPushLock.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14038E910 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14038EA2C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14038EAC4 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038F428 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C2620 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403C6CFC (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1405100F0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x14051671C (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405A96D0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B4F38 (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x1406CB22C (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x140936100 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093ED28 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x14093F2B8 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x140A3935C (ExpInitSystemPhase1.c)
 *     HalpDmaAllocateMappingResources @ 0x140A5D428 (HalpDmaAllocateMappingResources.c)
 *     PpmInitHeteroEngine @ 0x140A6F9A8 (PpmInitHeteroEngine.c)
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
