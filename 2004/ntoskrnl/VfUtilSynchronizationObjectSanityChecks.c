/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AFC
 * Callers:
 *     VerifierKeInitializeEvent @ 0x1409D7B70 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x1409D7C90 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x1409D7D00 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x1409D8FE0 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x1409D901C (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409D95FC (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409DE190 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409DE2E0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409DE400 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF1F0 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140275140 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1405316C0 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1409C357C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfUtilSynchronizationObjectSanityChecks(PVOID VirtualAddress, ULONG_PTR a2)
{
  int v3; // eax

  LOBYTE(v3) = VfUtilCheckKernelAddress((ULONG_PTR)VirtualAddress, a2);
  if ( (MmVerifierData & 0x800) != 0 )
  {
    LOBYTE(v3) = MmIsSessionAddress((unsigned __int64)VirtualAddress);
    if ( v3 )
      LOBYTE(v3) = VerifierBugCheckIfAppropriate(0xC4u, 0xDFuLL, (ULONG_PTR)VirtualAddress, 0LL, 0LL);
    if ( (MmVerifierData & 0x800) != 0 )
    {
      LOBYTE(v3) = MmIsNonPagedSystemAddressValid(VirtualAddress);
      if ( !(_BYTE)v3 )
        LOBYTE(v3) = VerifierBugCheckIfAppropriate(0xC4u, 0xE1uLL, (ULONG_PTR)VirtualAddress, 0LL, 0LL);
    }
  }
  return v3;
}
