/*
 * XREFs of KeAreInterruptsEnabled @ 0x1403506D0
 * Callers:
 *     RtlWalkFrameChain @ 0x14021CEB0 (RtlWalkFrameChain.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     KeAreAllApcsDisabled @ 0x14025AC80 (KeAreAllApcsDisabled.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     ObGetCurrentIrql @ 0x14025F590 (ObGetCurrentIrql.c)
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     MiRetryNonPagedAllocation @ 0x140274C3C (MiRetryNonPagedAllocation.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
 *     KeQueryCurrentStackInformationEx @ 0x1403504A0 (KeQueryCurrentStackInformationEx.c)
 *     KiAttemptBugcheckRecovery @ 0x140524D84 (KiAttemptBugcheckRecovery.c)
 *     MiTrimAllSystemPagableMemory @ 0x14053C040 (MiTrimAllSystemPagableMemory.c)
 *     VfFastIoCheckState @ 0x1409C99B4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A8C (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x1409D0E84 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409D1078 (VfBeforeCallDriver.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409DA598 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409DB0B0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409DB180 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409DB440 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409DB4D0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKfRaiseIrql @ 0x1409DBAA0 (VerifierKfRaiseIrql.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DBEF0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409DC27C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409DC3D0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x1409DEE08 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
