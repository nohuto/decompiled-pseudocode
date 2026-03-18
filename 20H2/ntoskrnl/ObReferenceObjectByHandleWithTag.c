/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140611880
 * Callers:
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x1403A4978 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404ECD78 (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x14054C14C (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x140562EA0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x140580D60 (PspTimerDelayProcess.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405CFFEC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D029C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D05AC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtQueryInformationThread @ 0x1405F1760 (NtQueryInformationThread.c)
 *     NtDuplicateObject @ 0x1405FACE0 (NtDuplicateObject.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     ObWaitForSingleObject @ 0x1406115B0 (ObWaitForSingleObject.c)
 *     MiMapViewOfSectionCommon @ 0x140621360 (MiMapViewOfSectionCommon.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140624640 (NtResetWriteWatch.c)
 *     NtSetInformationVirtualMemory @ 0x14062AB80 (NtSetInformationVirtualMemory.c)
 *     NtIsProcessInJob @ 0x14062C2E0 (NtIsProcessInJob.c)
 *     NtAssignProcessToJobObject @ 0x14062C430 (NtAssignProcessToJobObject.c)
 *     PspQueryQuotaLimits @ 0x140635F3C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     MiReadWriteVirtualMemory @ 0x140678EE0 (MiReadWriteVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x14067BA90 (NtProtectVirtualMemory.c)
 *     NtUnmapViewOfSectionEx @ 0x140685760 (NtUnmapViewOfSectionEx.c)
 *     NtTerminateProcess @ 0x1406991D0 (NtTerminateProcess.c)
 *     NtTerminateThread @ 0x14069A180 (NtTerminateThread.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     PopEtEnergyTrackerQuery @ 0x1406B5E14 (PopEtEnergyTrackerQuery.c)
 *     NtResumeThread @ 0x1406BC330 (NtResumeThread.c)
 *     MiLockUnlockCommon @ 0x1406BD73C (MiLockUnlockCommon.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 *     NtFlushVirtualMemory @ 0x1406D23F0 (NtFlushVirtualMemory.c)
 *     NtGetNextThread @ 0x1406D61C0 (NtGetNextThread.c)
 *     NtSuspendThread @ 0x1406DC060 (NtSuspendThread.c)
 *     NtCreateWorkerFactory @ 0x140709330 (NtCreateWorkerFactory.c)
 *     PopPowerRequestActionInfo @ 0x14071DF18 (PopPowerRequestActionInfo.c)
 *     NtAcquireProcessActivityReference @ 0x14072D060 (NtAcquireProcessActivityReference.c)
 *     NtGetNextProcess @ 0x140786AD0 (NtGetNextProcess.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     PspAssignPrimaryToken @ 0x1407B6DE0 (PspAssignPrimaryToken.c)
 *     PopGetPolicyDeviceObject @ 0x1407C0180 (PopGetPolicyDeviceObject.c)
 *     PspCreateProcess @ 0x1407CA1A0 (PspCreateProcess.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408852FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408859AC (VrpHandleIoctlModifyFlags.c)
 *     NtDebugActiveProcess @ 0x1408887E0 (NtDebugActiveProcess.c)
 *     NtInitializeEnclave @ 0x1408D69B0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408E1F20 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E3100 (PfSnAppLaunchScenarioControl.c)
 *     PspQueryPooledQuotaLimits @ 0x14090A8F8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x14090AAA0 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoProcess @ 0x14090E550 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x14090E7A0 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x14090EDD0 (NtAlertResumeThread.c)
 *     NtResumeProcess @ 0x14090EF70 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x14090EFF0 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14090F1D4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14090F268 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x14095CCDC (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A70CC8 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
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
