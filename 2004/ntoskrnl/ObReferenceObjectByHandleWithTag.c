/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1405F5C50
 * Callers:
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x1403A24A8 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404E94E8 (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x14054877C (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x14055F4D0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x14057D330 (PspTimerDelayProcess.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C9A44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C9E2C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405CA0DC (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405CA3EC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtDuplicateObject @ 0x1405E8200 (NtDuplicateObject.c)
 *     MiReadWriteVirtualMemory @ 0x1405EA680 (MiReadWriteVirtualMemory.c)
 *     ObWaitForSingleObject @ 0x1405F7AC0 (ObWaitForSingleObject.c)
 *     NtResetWriteWatch @ 0x1405F8BD0 (NtResetWriteWatch.c)
 *     MiMapViewOfSectionCommon @ 0x1405FEEE0 (MiMapViewOfSectionCommon.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     NtUnmapViewOfSectionEx @ 0x140600D00 (NtUnmapViewOfSectionEx.c)
 *     NtSetInformationVirtualMemory @ 0x140606910 (NtSetInformationVirtualMemory.c)
 *     MiLockUnlockCommon @ 0x140607244 (MiLockUnlockCommon.c)
 *     NtCreateWorkerFactory @ 0x14060D350 (NtCreateWorkerFactory.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PopEtEnergyTrackerQuery @ 0x14064BCCC (PopEtEnergyTrackerQuery.c)
 *     PopPowerRequestActionInfo @ 0x14064C9F0 (PopPowerRequestActionInfo.c)
 *     NtIsProcessInJob @ 0x140657C30 (NtIsProcessInJob.c)
 *     NtAssignProcessToJobObject @ 0x140657F30 (NtAssignProcessToJobObject.c)
 *     PspQueryQuotaLimits @ 0x140660C58 (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x1406889F0 (NtQueryInformationThread.c)
 *     NtProtectVirtualMemory @ 0x140696D50 (NtProtectVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     NtResumeThread @ 0x1406B30A0 (NtResumeThread.c)
 *     NtTerminateThread @ 0x1406B39D0 (NtTerminateThread.c)
 *     NtTerminateProcess @ 0x1406B4060 (NtTerminateProcess.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 *     NtFlushVirtualMemory @ 0x1406FF7A0 (NtFlushVirtualMemory.c)
 *     NtGetNextThread @ 0x140703180 (NtGetNextThread.c)
 *     NtSuspendThread @ 0x140709B10 (NtSuspendThread.c)
 *     NtAcquireProcessActivityReference @ 0x14071F010 (NtAcquireProcessActivityReference.c)
 *     NtGetNextProcess @ 0x1407784D0 (NtGetNextProcess.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 *     PspAssignPrimaryToken @ 0x1407A5D14 (PspAssignPrimaryToken.c)
 *     PopGetPolicyDeviceObject @ 0x1407B2238 (PopGetPolicyDeviceObject.c)
 *     PspCreateProcess @ 0x1407BB910 (PspCreateProcess.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087F7AC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14087FE5C (VrpHandleIoctlModifyFlags.c)
 *     NtDebugActiveProcess @ 0x140882C90 (NtDebugActiveProcess.c)
 *     NtInitializeEnclave @ 0x1408D0B70 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DC0E0 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408DD2C0 (PfSnAppLaunchScenarioControl.c)
 *     PspQueryPooledQuotaLimits @ 0x140904CD8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x140904E80 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoProcess @ 0x140908930 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x140908B80 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x1409091B0 (NtAlertResumeThread.c)
 *     NtResumeProcess @ 0x140909350 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x1409093D0 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x1409095B4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x140909648 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x140956F1C (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6A3BC (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
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
