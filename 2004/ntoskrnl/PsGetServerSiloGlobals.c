/*
 * XREFs of PsGetServerSiloGlobals @ 0x14026D714
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x140328D70 (ExpCenturyDpcRoutine.c)
 *     SepRmDispatchDataToLsa @ 0x14034F888 (SepRmDispatchDataToLsa.c)
 *     ExpTimeZoneDpcRoutine @ 0x1403922C0 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405ACF70 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405C9798 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1405C9844 (ExpTimeZoneInitSiloState.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     SepIsMinTCB @ 0x1406174A4 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x140617A84 (SepIsNgenImage.c)
 *     ObDereferenceDeviceMap @ 0x140619124 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x14061DDE0 (DbgkFlushErrorPort.c)
 *     ExpWnfResolveScopeInstance @ 0x1406236A4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x140626250 (ExpWnfGenerateStateName.c)
 *     PspTerminateProcessesJobCallback @ 0x140657A70 (PspTerminateProcessesJobCallback.c)
 *     PspSetupUserProcessAddressSpace @ 0x14065D2E4 (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x14065D808 (MmMapApiSetView.c)
 *     ObQueryDeviceMapInformation @ 0x140665BB0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140666044 (ObfDereferenceDeviceMap.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 *     PspCaptureUserProcessParameters @ 0x1406D49F0 (PspCaptureUserProcessParameters.c)
 *     ObpSetDeviceMap @ 0x14070B584 (ObpSetDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14070E388 (ExpWnfEnumerateScopeInstances.c)
 *     RtlGetHostNtSystemRoot @ 0x1407116E0 (RtlGetHostNtSystemRoot.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x1407750C0 (MiInitializeSessionGlobals.c)
 *     EtwpProcessEnumCallback @ 0x14077FA80 (EtwpProcessEnumCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140780310 (EtwpUpdateGlobalGroupMasks.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     CmpSetVersionData @ 0x1407914CC (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x140791F6C (PsBootPhaseComplete.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     SepRmCommandServerThread @ 0x140795150 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407952D0 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1407B65F0 (ObInitServerSilo.c)
 *     DbgkpGetServerSiloState @ 0x1407B7CFC (DbgkpGetServerSiloState.c)
 *     DbgkInitializeServerSilo @ 0x140881298 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x140883954 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140883F84 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140902B40 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140902BA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x140902E78 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x1409030A0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409036F0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x14090381C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140903944 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140903A14 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x140907CF0 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x140918CC4 (SeInitServerSilo.c)
 *     ExpTimeZoneWork @ 0x140948680 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x1409AFCE8 (ExShutdownSystem.c)
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
