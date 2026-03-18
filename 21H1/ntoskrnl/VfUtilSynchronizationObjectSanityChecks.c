/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AEC
 * Callers:
 *     VerifierKeInitializeEvent @ 0x1409D7B10 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x1409D7C30 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x1409D7CA0 (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x1409D8F80 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x1409D8FBC (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x1409D959C (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409DE130 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409DE280 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409DE3A0 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x1409DF190 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140531070 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1409C356C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
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
