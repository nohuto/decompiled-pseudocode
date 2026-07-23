/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140707F60
 * Callers:
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x1403A5388 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404EE898 (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x14054DE8C (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x140564BB0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x1405829A0 (PspTimerDelayProcess.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405D29EC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D2C9C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D2FAC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtFlushVirtualMemory @ 0x1405E8460 (NtFlushVirtualMemory.c)
 *     PopEtEnergyTrackerQuery @ 0x1405EE5A8 (PopEtEnergyTrackerQuery.c)
 *     MiLockUnlockCommon @ 0x1405F8920 (MiLockUnlockCommon.c)
 *     NtIsProcessInJob @ 0x1405FD290 (NtIsProcessInJob.c)
 *     PspSetQuotaLimits @ 0x140603BC4 (PspSetQuotaLimits.c)
 *     NtSuspendThread @ 0x14061AD40 (NtSuspendThread.c)
 *     NtResumeThread @ 0x140641A40 (NtResumeThread.c)
 *     PopPowerRequestActionInfo @ 0x14066F888 (PopPowerRequestActionInfo.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     NtUnmapViewOfSectionEx @ 0x140687C90 (NtUnmapViewOfSectionEx.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x140689EEC (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     NtCreateWorkerFactory @ 0x1406AB120 (NtCreateWorkerFactory.c)
 *     NtDuplicateObject @ 0x1406AC000 (NtDuplicateObject.c)
 *     NtTerminateProcess @ 0x1406B0E40 (NtTerminateProcess.c)
 *     NtTerminateThread @ 0x1406B1460 (NtTerminateThread.c)
 *     NtSetInformationVirtualMemory @ 0x1406BD8D0 (NtSetInformationVirtualMemory.c)
 *     NtGetNextThread @ 0x1406CA5A0 (NtGetNextThread.c)
 *     MiReadWriteVirtualMemory @ 0x1406E58F0 (MiReadWriteVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1406E85A0 (NtProtectVirtualMemory.c)
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 *     NtAssignProcessToJobObject @ 0x1406F6D90 (NtAssignProcessToJobObject.c)
 *     MiMapViewOfSectionCommon @ 0x140702350 (MiMapViewOfSectionCommon.c)
 *     NtResetWriteWatch @ 0x140704430 (NtResetWriteWatch.c)
 *     ObWaitForSingleObject @ 0x140707C90 (ObWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     NtAcquireProcessActivityReference @ 0x140731550 (NtAcquireProcessActivityReference.c)
 *     NtGetNextProcess @ 0x14078AA70 (NtGetNextProcess.c)
 *     PopCreateHiberFile @ 0x140792F70 (PopCreateHiberFile.c)
 *     PspAssignPrimaryToken @ 0x1407BC1D0 (PspAssignPrimaryToken.c)
 *     PopGetPolicyDeviceObject @ 0x1407C4A14 (PopGetPolicyDeviceObject.c)
 *     PspCreateProcess @ 0x1407CE5D0 (PspCreateProcess.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408829FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408830AC (VrpHandleIoctlModifyFlags.c)
 *     NtDebugActiveProcess @ 0x140885EE0 (NtDebugActiveProcess.c)
 *     NtInitializeEnclave @ 0x1408D42D0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DF840 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E0A20 (PfSnAppLaunchScenarioControl.c)
 *     PspQueryPooledQuotaLimits @ 0x140908208 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409083B0 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoProcess @ 0x14090BE60 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x14090C0B0 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x14090C6E0 (NtAlertResumeThread.c)
 *     NtResumeProcess @ 0x14090C880 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x14090C900 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14090CAE4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14090CB78 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x14095A72C (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095C110 (NtPssCaptureVaSpaceBulk.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6EC48 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
