/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x140327170
 * Callers:
 *     ExpGetSystemEmulationProcessorInformation @ 0x140326C5C (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x140327110 (ExpGetSystemProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140327220 (KeQueryLogicalProcessorRelationship.c)
 *     ExpAllocateFannedOutPushLock @ 0x14038DCF8 (ExpAllocateFannedOutPushLock.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14038DDA0 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14038DEBC (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14038DF54 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038E8B8 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C1760 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403C5D8C (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x14050FAA0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x1405160CC (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405A8FE0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B4818 (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x1406790CC (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x140934E60 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093DAA8 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x14093E038 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x140A394EC (ExpInitSystemPhase1.c)
 *     HalpDmaAllocateMappingResources @ 0x140A5E388 (HalpDmaAllocateMappingResources.c)
 *     PpmInitHeteroEngine @ 0x140A6EF84 (PpmInitHeteroEngine.c)
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
    v2 = qword_140CFC838[GroupNumber] - (((unsigned __int64)qword_140CFC838[GroupNumber] >> 1) & 0x5555555555555555LL);
    return (0x101010101010101LL
          * (((v2 & 0x3333333333333333LL)
            + ((v2 >> 2) & 0x3333333333333333LL)
            + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  return v1;
}
