/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x1409D97BC
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x1409C6270 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x1409C62E0 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x1409C6330 (VerifierIoAllocateIrp.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1409C6710 (VerifierIoSetCompletionRoutineEx.c)
 *     VerifierPortIoAllocateIrp @ 0x1409C6830 (VerifierPortIoAllocateIrp.c)
 *     ViKeInjectStatusAlerted @ 0x1409D8FF8 (ViKeInjectStatusAlerted.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x1409D96DC (VfFaultsInjectPoolAllocationFailure.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1409E2D70 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1409E2E60 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1409E2F80 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E30A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x1409E31A0 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1409E3200 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1409E3320 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1409E33A0 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1409E3490 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x1409E3670 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x1409E3920 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E3B70 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1409E3D50 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1409E3E40 (VerifierMmProbeAndLockProcessPages.c)
 * Callees:
 *     VfRandomGetNumber @ 0x1409C3270 (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1409D98F8 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x1409DA10C (ViFaultsInjectionNotification.c)
 *     ViFaultsIsCurrentAppTarget @ 0x1409DA21C (ViFaultsIsCurrentAppTarget.c)
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
    ++dword_140D4740C;
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
      ++dword_140D473FC;
      if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
        return 0LL;
      ++dword_140D47400;
    }
    else
    {
      ++dword_140D473F8;
    }
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  }
  else
  {
    if ( ViInjectInPagePathOnly != 1 || !BYTE6(KeGetCurrentThread()[1].Queue) )
      return 0LL;
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
    ++dword_140D473E8;
  }
  return 1LL;
}
