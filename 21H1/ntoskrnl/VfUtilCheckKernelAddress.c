/*
 * XREFs of VfUtilCheckKernelAddress @ 0x1409C356C
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AEC (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoFreeMdl @ 0x1409C6600 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1409C6660 (VerifierIoInitializeWorkItem.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409D7528 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1409D7610 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1409D76F8 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1409D77F8 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeReleaseMutant @ 0x1409D81C0 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutantNoReboot @ 0x1409D8240 (VerifierKeReleaseMutantNoReboot.c)
 *     VerifierKeReleaseMutex @ 0x1409D82A0 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseMutexNoReboot @ 0x1409D8300 (VerifierKeReleaseMutexNoReboot.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409D83D0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409D8460 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1409D85A0 (VerifierKeSetEvent.c)
 *     VerifierPortKeAcquireSpinLock @ 0x1409D8AC0 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1409D8B50 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     VfKeInsertQueueDpc @ 0x1409D8D90 (VfKeInsertQueueDpc.c)
 *     VfKeRemoveQueueDpc @ 0x1409D8E50 (VfKeRemoveQueueDpc.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409D8E80 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1409D8F20 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409D92F0 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409D9360 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VerifierObGetObjectSecurity @ 0x1409E4A70 (VerifierObGetObjectSecurity.c)
 *     VerifierObReferenceObjectByPointer @ 0x1409E4BE0 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObReferenceObjectByPointerWithTag @ 0x1409E4C70 (VerifierObReferenceObjectByPointerWithTag.c)
 *     VerifierObfDereferenceObject @ 0x1409E4D00 (VerifierObfDereferenceObject.c)
 *     VerifierObfDereferenceObjectWithTag @ 0x1409E4D30 (VerifierObfDereferenceObjectWithTag.c)
 *     VerifierObfReferenceObject @ 0x1409E4D70 (VerifierObfReferenceObject.c)
 *     VerifierObfReferenceObjectWithTag @ 0x1409E4DE0 (VerifierObfReferenceObjectWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfUtilCheckKernelAddress(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 )
  {
    result = 0x7FFFFFFEFFFFLL;
    if ( BugCheckParameter2 < 0x7FFFFFFEFFFFLL || BugCheckParameter2 + BugCheckParameter3 < BugCheckParameter2 )
      return VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
  return result;
}
