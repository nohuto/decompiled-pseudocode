/*
 * XREFs of KeUnstackDetachProcess @ 0x1402ABEC0
 * Callers:
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x140338C80 (NtUnlockVirtualMemory.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405CEFB0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405CF6F4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspSetQuotaLimits @ 0x140603BC4 (PspSetQuotaLimits.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x140689EEC (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     NtSetInformationVirtualMemory @ 0x1406BD8D0 (NtSetInformationVirtualMemory.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 *     NtProtectVirtualMemory @ 0x1406E85A0 (NtProtectVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140704430 (NtResetWriteWatch.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     CmpStartCLFSLog @ 0x14077DB44 (CmpStartCLFSLog.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884FF4 (DbgkpPostFakeThreadMessages.c)
 *     NtInitializeEnclave @ 0x1408D42D0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6960 (NtFreeUserPhysicalPages.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E0A20 (PfSnAppLaunchScenarioControl.c)
 *     PspApplyWorkingSetLimits @ 0x140908BE4 (PspApplyWorkingSetLimits.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095C110 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B18F0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
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
