/*
 * XREFs of KeAreInterruptsEnabled @ 0x1402ABBD0
 * Callers:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     MiRetryNonPagedAllocation @ 0x140284C74 (MiRetryNonPagedAllocation.c)
 *     MmCanThreadFault @ 0x140297EF0 (MmCanThreadFault.c)
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402AB9C0 (KeQueryCurrentStackInformationEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     KiScheduleBugcheckRecovery @ 0x140579780 (KiScheduleBugcheckRecovery.c)
 *     MiTrimAllSystemPagableMemory @ 0x1405970A0 (MiTrimAllSystemPagableMemory.c)
 *     ViDeadlockCanProceed @ 0x140A7F8F2 (ViDeadlockCanProceed.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x140A8CA78 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140A8CC6C (VfBeforeCallDriver.c)
 *     VerifierKfRaiseIrql @ 0x140A96540 (VerifierKfRaiseIrql.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140AA3F40 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140AA41A0 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AA4380 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 * Callees:
 *     <none>
 */

bool KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}
