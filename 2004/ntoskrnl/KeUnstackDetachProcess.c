/*
 * XREFs of KeUnstackDetachProcess @ 0x140205990
 * Callers:
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405C7C90 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405C8288 (PspProcessDynamicEnforcedAddressRanges.c)
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     NtResetWriteWatch @ 0x1405F8BD0 (NtResetWriteWatch.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x140606910 (NtSetInformationVirtualMemory.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     PspQueryQuotaLimits @ 0x140660C58 (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtProtectVirtualMemory @ 0x140696D50 (NtProtectVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 *     CmpStartCLFSLog @ 0x14076F174 (CmpStartCLFSLog.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140881DA4 (DbgkpPostFakeThreadMessages.c)
 *     NtInitializeEnclave @ 0x1408D0B70 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D3200 (NtFreeUserPhysicalPages.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408DD2C0 (PfSnAppLaunchScenarioControl.c)
 *     PspApplyWorkingSetLimits @ 0x1409056B4 (PspApplyWorkingSetLimits.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ADB50 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiDetachProcess @ 0x1402059D0 (KiDetachProcess.c)
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
