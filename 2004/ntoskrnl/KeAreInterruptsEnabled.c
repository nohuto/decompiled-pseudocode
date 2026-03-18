/*
 * XREFs of KeAreInterruptsEnabled @ 0x14029B0A0
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAreAllApcsDisabled @ 0x14024CD10 (KeAreAllApcsDisabled.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     KeQueryCurrentStackInformationEx @ 0x14029AE70 (KeQueryCurrentStackInformationEx.c)
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 *     MiRetryNonPagedAllocation @ 0x1402E1CAC (MiRetryNonPagedAllocation.c)
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     RtlWalkFrameChain @ 0x1402E7840 (RtlWalkFrameChain.c)
 *     KiAttemptBugcheckRecovery @ 0x14051F8D4 (KiAttemptBugcheckRecovery.c)
 *     MiTrimAllSystemPagableMemory @ 0x140536B70 (MiTrimAllSystemPagableMemory.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x1409CDE74 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409CE068 (VfBeforeCallDriver.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409D7588 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409D80A0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409D8170 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409D8430 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409D84C0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKfRaiseIrql @ 0x1409D8A90 (VerifierKfRaiseIrql.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409D8EE0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D926C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409D93C0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x1409DBDF8 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
