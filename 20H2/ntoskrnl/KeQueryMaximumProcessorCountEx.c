/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1403603C0
 * Callers:
 *     ExpGetSystemEmulationProcessorInformation @ 0x14035FA18 (ExpGetSystemEmulationProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14035FA70 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemProcessorInformation @ 0x14036035C (ExpGetSystemProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x140390D58 (ExpAllocateFannedOutPushLock.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x140390E00 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x140390F1C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140390FB4 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C4D90 (HalpHvInitMcaPcrContext.c)
 *     ExpSaInitialize @ 0x1403C978C (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x140513A20 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x14051A0EC (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405AD230 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405B8A98 (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x140713360 (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x14093BF30 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x140944AE8 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140945078 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x140A3F33C (ExpInitSystemPhase1.c)
 *     HalpDmaAllocateMappingResources @ 0x140A64788 (HalpDmaAllocateMappingResources.c)
 *     PpmInitHeteroEngine @ 0x140A75EC8 (PpmInitHeteroEngine.c)
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
