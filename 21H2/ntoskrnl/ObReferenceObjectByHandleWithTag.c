/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1406F0B80
 * Callers:
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x1403A5238 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404EE658 (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x14054DC4C (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x140564970 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x140582770 (PspTimerDelayProcess.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405D29EC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D2C9C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D2FAC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtGetNextThread @ 0x1405DAE20 (NtGetNextThread.c)
 *     MiReadWriteVirtualMemory @ 0x1405F6190 (MiReadWriteVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405F8E40 (NtProtectVirtualMemory.c)
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     NtUnmapViewOfSectionEx @ 0x14061E020 (NtUnmapViewOfSectionEx.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x14062027C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     NtResumeThread @ 0x14064CC20 (NtResumeThread.c)
 *     PopPowerRequestActionInfo @ 0x14067C148 (PopPowerRequestActionInfo.c)
 *     NtFlushVirtualMemory @ 0x140688FD0 (NtFlushVirtualMemory.c)
 *     PopEtEnergyTrackerQuery @ 0x14068E738 (PopEtEnergyTrackerQuery.c)
 *     MiLockUnlockCommon @ 0x14069975C (MiLockUnlockCommon.c)
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 *     NtSuspendThread @ 0x1406BBCC0 (NtSuspendThread.c)
 *     NtCreateWorkerFactory @ 0x1406D3E40 (NtCreateWorkerFactory.c)
 *     NtDuplicateObject @ 0x1406D4D20 (NtDuplicateObject.c)
 *     NtTerminateProcess @ 0x1406D9B60 (NtTerminateProcess.c)
 *     NtTerminateThread @ 0x1406DA180 (NtTerminateThread.c)
 *     MiMapViewOfSectionCommon @ 0x1406EAF70 (MiMapViewOfSectionCommon.c)
 *     NtResetWriteWatch @ 0x1406ED050 (NtResetWriteWatch.c)
 *     ObWaitForSingleObject @ 0x1406F08B0 (ObWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     NtSetInformationVirtualMemory @ 0x14070F280 (NtSetInformationVirtualMemory.c)
 *     NtIsProcessInJob @ 0x14071D130 (NtIsProcessInJob.c)
 *     NtAssignProcessToJobObject @ 0x14071F2B0 (NtAssignProcessToJobObject.c)
 *     NtAcquireProcessActivityReference @ 0x140731390 (NtAcquireProcessActivityReference.c)
 *     NtGetNextProcess @ 0x14078A8B0 (NtGetNextProcess.c)
 *     PopCreateHiberFile @ 0x1407919C0 (PopCreateHiberFile.c)
 *     PspAssignPrimaryToken @ 0x1407BBA40 (PspAssignPrimaryToken.c)
 *     PopGetPolicyDeviceObject @ 0x1407C44F4 (PopGetPolicyDeviceObject.c)
 *     PspCreateProcess @ 0x1407CE460 (PspCreateProcess.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14088289C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140882F4C (VrpHandleIoctlModifyFlags.c)
 *     NtDebugActiveProcess @ 0x140885D80 (NtDebugActiveProcess.c)
 *     NtInitializeEnclave @ 0x1408D4170 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D4450 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DF6E0 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E08C0 (PfSnAppLaunchScenarioControl.c)
 *     PspQueryPooledQuotaLimits @ 0x1409080A8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x140908250 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoProcess @ 0x14090BD00 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x14090BF50 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x14090C580 (NtAlertResumeThread.c)
 *     NtResumeProcess @ 0x14090C720 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x14090C7A0 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14090C984 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14090CA18 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x14095A55C (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF40 (NtPssCaptureVaSpaceBulk.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6DC48 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1406F0C00 (ObpReferenceObjectByHandleWithTag.c)
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
