/*
 * XREFs of VfUtilCheckKernelAddress @ 0x1409C959C
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C9B1C (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoFreeMdl @ 0x1409CC630 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1409CC690 (VerifierIoInitializeWorkItem.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409DD5A8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1409DD690 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1409DD778 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1409DD878 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeReleaseMutant @ 0x1409DE240 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutantNoReboot @ 0x1409DE2C0 (VerifierKeReleaseMutantNoReboot.c)
 *     VerifierKeReleaseMutex @ 0x1409DE320 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseMutexNoReboot @ 0x1409DE380 (VerifierKeReleaseMutexNoReboot.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409DE450 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409DE4E0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1409DE620 (VerifierKeSetEvent.c)
 *     VerifierPortKeAcquireSpinLock @ 0x1409DEB40 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1409DEBD0 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     VfKeInsertQueueDpc @ 0x1409DEE10 (VfKeInsertQueueDpc.c)
 *     VfKeRemoveQueueDpc @ 0x1409DEED0 (VfKeRemoveQueueDpc.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DEF00 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1409DEFA0 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409DF370 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409DF3E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VerifierObGetObjectSecurity @ 0x1409EAAF0 (VerifierObGetObjectSecurity.c)
 *     VerifierObReferenceObjectByPointer @ 0x1409EAC60 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObReferenceObjectByPointerWithTag @ 0x1409EACF0 (VerifierObReferenceObjectByPointerWithTag.c)
 *     VerifierObfDereferenceObject @ 0x1409EAD80 (VerifierObfDereferenceObject.c)
 *     VerifierObfDereferenceObjectWithTag @ 0x1409EADB0 (VerifierObfDereferenceObjectWithTag.c)
 *     VerifierObfReferenceObject @ 0x1409EADF0 (VerifierObfReferenceObject.c)
 *     VerifierObfReferenceObjectWithTag @ 0x1409EAE60 (VerifierObfReferenceObjectWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
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
