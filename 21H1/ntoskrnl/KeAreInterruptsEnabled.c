/*
 * XREFs of KeAreInterruptsEnabled @ 0x140208590
 * Callers:
 *     KeQueryCurrentStackInformationEx @ 0x140208360 (KeQueryCurrentStackInformationEx.c)
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAreAllApcsDisabled @ 0x1402A5D40 (KeAreAllApcsDisabled.c)
 *     MiRetryNonPagedAllocation @ 0x140326EE4 (MiRetryNonPagedAllocation.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     RtlWalkFrameChain @ 0x14032C980 (RtlWalkFrameChain.c)
 *     KiAttemptBugcheckRecovery @ 0x14051F284 (KiAttemptBugcheckRecovery.c)
 *     MiTrimAllSystemPagableMemory @ 0x140536520 (MiTrimAllSystemPagableMemory.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x1409CDE64 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409CE058 (VfBeforeCallDriver.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409D7528 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409D8040 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409D8110 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409D83D0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409D8460 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKfRaiseIrql @ 0x1409D8A30 (VerifierKfRaiseIrql.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409D8E80 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D920C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409D9360 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x1409DBD98 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
