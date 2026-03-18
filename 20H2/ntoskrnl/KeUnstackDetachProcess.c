/*
 * XREFs of KeUnstackDetachProcess @ 0x1402688E0
 * Callers:
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405CCFB0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405CD684 (PspProcessDynamicEnforcedAddressRanges.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140624640 (NtResetWriteWatch.c)
 *     NtSetInformationVirtualMemory @ 0x14062AB80 (NtSetInformationVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x140635F3C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     NtProtectVirtualMemory @ 0x14067BA90 (NtProtectVirtualMemory.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     CmpStartCLFSLog @ 0x140779BA4 (CmpStartCLFSLog.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408878F4 (DbgkpPostFakeThreadMessages.c)
 *     NtInitializeEnclave @ 0x1408D69B0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D7528 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E3100 (PfSnAppLaunchScenarioControl.c)
 *     PspApplyWorkingSetLimits @ 0x14090B2D4 (PspApplyWorkingSetLimits.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B3AC0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = &KeGetCurrentThread()->SavedApcState;
    KiDetachProcess(ApcState, 0LL);
  }
}
