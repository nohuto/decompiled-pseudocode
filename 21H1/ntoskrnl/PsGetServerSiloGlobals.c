/*
 * XREFs of PsGetServerSiloGlobals @ 0x1402D70B4
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x140312098 (SepRmDispatchDataToLsa.c)
 *     ObQueryDeviceMapInformation @ 0x1405DF8B0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x1405DFD44 (ObfDereferenceDeviceMap.c)
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x14065E844 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x140663500 (DbgkFlushErrorPort.c)
 *     ExpWnfResolveScopeInstance @ 0x140668DC4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x14066B970 (ExpWnfGenerateStateName.c)
 *     SepIsMinTCB @ 0x14066EA54 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x14066EF0C (SepIsNgenImage.c)
 *     PspTerminateProcessesJobCallback @ 0x1406751B0 (PspTerminateProcessesJobCallback.c)
 *     PspCaptureUserProcessParameters @ 0x1406B6660 (PspCaptureUserProcessParameters.c)
 *     ObpSetDeviceMap @ 0x1406E7654 (ObpSetDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EA720 (ExpWnfEnumerateScopeInstances.c)
 *     RtlGetHostNtSystemRoot @ 0x1406EDD50 (RtlGetHostNtSystemRoot.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406F98FC (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x1406F9E20 (MmMapApiSetView.c)
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x140772CB0 (MiInitializeSessionGlobals.c)
 *     EtwpProcessEnumCallback @ 0x140780460 (EtwpProcessEnumCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140787014 (EtwpUpdateGlobalGroupMasks.c)
 *     CmpSetVersionData @ 0x14078F0CC (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x14078FB6C (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407953A0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140795520 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1407B3480 (ObInitServerSilo.c)
 *     DbgkpGetServerSiloState @ 0x1407B4B8C (DbgkpGetServerSiloState.c)
 *     DbgkInitializeServerSilo @ 0x14087FF78 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140882634 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140882C64 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140901CE0 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140901D40 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x140902018 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1409022A0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409028E0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140902A0C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140902B34 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140902C04 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x140906A40 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x140917A10 (SeInitServerSilo.c)
 *     ExShutdownSystem @ 0x1409AEE88 (ExShutdownSystem.c)
 * Callees:
 *     <none>
 */

void *__fastcall PsGetServerSiloGlobals(__int64 a1)
{
  void *result; // rax

  result = &PspHostSiloGlobals;
  if ( a1 )
    return *(void **)(a1 + 1272);
  return result;
}
