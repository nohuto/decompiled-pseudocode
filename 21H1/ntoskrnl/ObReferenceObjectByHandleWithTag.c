/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x14062B1C0
 * Callers:
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x1403A1D18 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404E8EB8 (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x14054812C (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x14055EE80 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x14057CCF0 (PspTimerDelayProcess.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C8674 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C8A5C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405C8D0C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405C901C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PspQueryQuotaLimits @ 0x1405DA958 (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     NtProtectVirtualMemory @ 0x1405ED850 (NtProtectVirtualMemory.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 *     NtDuplicateObject @ 0x14061D820 (NtDuplicateObject.c)
 *     MiReadWriteVirtualMemory @ 0x14061FCA0 (MiReadWriteVirtualMemory.c)
 *     ObWaitForSingleObject @ 0x14062CB00 (ObWaitForSingleObject.c)
 *     NtResetWriteWatch @ 0x14062DC10 (NtResetWriteWatch.c)
 *     MiMapViewOfSectionCommon @ 0x140633F20 (MiMapViewOfSectionCommon.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     NtUnmapViewOfSectionEx @ 0x140635D40 (NtUnmapViewOfSectionEx.c)
 *     NtSetInformationVirtualMemory @ 0x14063BA60 (NtSetInformationVirtualMemory.c)
 *     MiLockUnlockCommon @ 0x14063C394 (MiLockUnlockCommon.c)
 *     NtCreateWorkerFactory @ 0x1406424A0 (NtCreateWorkerFactory.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     NtAssignProcessToJobObject @ 0x140674F70 (NtAssignProcessToJobObject.c)
 *     NtIsProcessInJob @ 0x140675090 (NtIsProcessInJob.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PopEtEnergyTrackerQuery @ 0x1406BDE14 (PopEtEnergyTrackerQuery.c)
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 *     NtFlushVirtualMemory @ 0x1406DC800 (NtFlushVirtualMemory.c)
 *     NtGetNextThread @ 0x1406E03F0 (NtGetNextThread.c)
 *     NtSuspendThread @ 0x1406E5DF0 (NtSuspendThread.c)
 *     PopPowerRequestActionInfo @ 0x1407000C0 (PopPowerRequestActionInfo.c)
 *     NtResumeThread @ 0x140708EF0 (NtResumeThread.c)
 *     NtTerminateThread @ 0x140709820 (NtTerminateThread.c)
 *     NtTerminateProcess @ 0x140709EB0 (NtTerminateProcess.c)
 *     NtAcquireProcessActivityReference @ 0x14071D390 (NtAcquireProcessActivityReference.c)
 *     NtGetNextProcess @ 0x1407760C0 (NtGetNextProcess.c)
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 *     PspAssignPrimaryToken @ 0x1407A34C4 (PspAssignPrimaryToken.c)
 *     PopGetPolicyDeviceObject @ 0x1407AF054 (PopGetPolicyDeviceObject.c)
 *     PspCreateProcess @ 0x1407B87A0 (PspCreateProcess.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087E4BC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14087EB6C (VrpHandleIoctlModifyFlags.c)
 *     NtDebugActiveProcess @ 0x140881970 (NtDebugActiveProcess.c)
 *     NtInitializeEnclave @ 0x1408CF820 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DAD70 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408DBF50 (PfSnAppLaunchScenarioControl.c)
 *     PopSetSpecialRequest @ 0x1408DD27C (PopSetSpecialRequest.c)
 *     PspQueryPooledQuotaLimits @ 0x1409039F8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x140903BA0 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoProcess @ 0x140907680 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x1409078D0 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x140907F00 (NtAlertResumeThread.c)
 *     NtResumeProcess @ 0x1409080A0 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x140908120 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x140908304 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140908398 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x14095584C (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140957230 (NtPssCaptureVaSpaceBulk.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6A15C (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
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
