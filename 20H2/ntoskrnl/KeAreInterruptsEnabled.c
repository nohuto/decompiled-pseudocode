/*
 * XREFs of KeAreInterruptsEnabled @ 0x140226820
 * Callers:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     EtwpLogKernelEvent @ 0x140226150 (EtwpLogKernelEvent.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402265F0 (KeQueryCurrentStackInformationEx.c)
 *     RtlWalkFrameChain @ 0x140228EA0 (RtlWalkFrameChain.c)
 *     KeAreAllApcsDisabled @ 0x1402339C0 (KeAreAllApcsDisabled.c)
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     MiRetryNonPagedAllocation @ 0x140333F40 (MiRetryNonPagedAllocation.c)
 *     KiAttemptBugcheckRecovery @ 0x1405232A4 (KiAttemptBugcheckRecovery.c)
 *     MiTrimAllSystemPagableMemory @ 0x14053A540 (MiTrimAllSystemPagableMemory.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x1409D3E94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409D4088 (VfBeforeCallDriver.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409DD5A8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409DE0C0 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409DE190 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409DE450 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409DE4E0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKfRaiseIrql @ 0x1409DEAB0 (VerifierKfRaiseIrql.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DEF00 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409DF28C (ViKeRaiseIrqlSanityChecks.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409DF3E0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     ViDeadlockCanProceed @ 0x1409E1E18 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
