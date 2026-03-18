/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x1409DF83C
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x1409CC2A0 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x1409CC310 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x1409CC360 (VerifierIoAllocateIrp.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1409CC740 (VerifierIoSetCompletionRoutineEx.c)
 *     VerifierPortIoAllocateIrp @ 0x1409CC860 (VerifierPortIoAllocateIrp.c)
 *     ViKeInjectStatusAlerted @ 0x1409DF078 (ViKeInjectStatusAlerted.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x1409DF75C (VfFaultsInjectPoolAllocationFailure.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E8DF0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E8EE0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E9000 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E9120 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x1409E9220 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E9280 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1409E93A0 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E9420 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E9510 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x1409E96F0 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x1409E99A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E9BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409E9DD0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409E9EC0 (VerifierMmProbeAndLockProcessPages.c)
 * Callees:
 *     VfRandomGetNumber @ 0x1409C92A0 (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1409DF978 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x1409E018C (ViFaultsInjectionNotification.c)
 *     ViFaultsIsCurrentAppTarget @ 0x1409E029C (ViFaultsIsCurrentAppTarget.c)
 */

__int64 __fastcall VfFaultsInjectResourceFailure(int a1)
{
  ULONG v3; // edi
  unsigned int v4; // esi

  if ( !ViFaultsInitialized )
  {
    ++ViFaultsDecisions;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140D4A40C;
    return 0LL;
  }
  if ( (MmVerifierData & 4) != 0 )
  {
    v3 = VfFaultInjectionProbability;
    v4 = VfFaultInjectionMaxProbability;
    if ( !VfFaultInjectionProbability
      || VfFaultInjectionProbability > (unsigned int)VfFaultInjectionMaxProbability
      || !(unsigned int)VfFaultsIsSystemSufficientlyBooted()
      || !a1 && ViHaveFaultTags && !ViFaultsForceAllAPIs
      || !(unsigned int)ViFaultsIsCurrentAppTarget() )
    {
      return 0LL;
    }
    if ( VfRandomGetNumber(0, v4) >= v3 )
    {
      ++dword_140D4A3FC;
      if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
        return 0LL;
      ++dword_140D4A400;
    }
    else
    {
      ++dword_140D4A3F8;
    }
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  }
  else
  {
    if ( ViInjectInPagePathOnly != 1 || !BYTE6(KeGetCurrentThread()[1].Queue) )
      return 0LL;
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
    ++dword_140D4A3E8;
  }
  return 1LL;
}
