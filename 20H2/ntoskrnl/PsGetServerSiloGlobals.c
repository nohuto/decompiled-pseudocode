/*
 * XREFs of PsGetServerSiloGlobals @ 0x140245E34
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1403204A8 (SepRmDispatchDataToLsa.c)
 *     ExpCenturyDpcRoutine @ 0x14035AEC0 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140394780 (ExpTimeZoneDpcRoutine.c)
 *     ExpNextYearDpcRoutine @ 0x1405B0AD0 (ExpNextYearDpcRoutine.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405CF794 (ExpTimeZoneCleanupSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x1405CF840 (ExpTimeZoneInitSiloState.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     PspTerminateProcessesJobCallback @ 0x14062C030 (PspTerminateProcessesJobCallback.c)
 *     ObQueryDeviceMapInformation @ 0x14063A950 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x14063ADE4 (ObfDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x14064EA20 (DbgkFlushErrorPort.c)
 *     ExpWnfGenerateStateName @ 0x1406524A4 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x140654854 (ExpWnfResolveScopeInstance.c)
 *     ObDereferenceDeviceMap @ 0x14065EC78 (ObDereferenceDeviceMap.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     SepIsNgenImage @ 0x14068FF98 (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x1406905B8 (SepIsMinTCB.c)
 *     PspCaptureUserProcessParameters @ 0x1406A63D0 (PspCaptureUserProcessParameters.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406ACE1C (PspSetupUserProcessAddressSpace.c)
 *     MmMapApiSetView @ 0x1406AD340 (MmMapApiSetView.c)
 *     ObpSetDeviceMap @ 0x1406DD7AC (ObpSetDeviceMap.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406E0778 (ExpWnfEnumerateScopeInstances.c)
 *     RtlGetHostNtSystemRoot @ 0x1406E4200 (RtlGetHostNtSystemRoot.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x1407836C0 (MiInitializeSessionGlobals.c)
 *     EtwpProcessEnumCallback @ 0x14078D390 (EtwpProcessEnumCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14078E1F8 (EtwpUpdateGlobalGroupMasks.c)
 *     CmpSetVersionData @ 0x14079DD6C (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x14079E80C (PsBootPhaseComplete.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1407A4480 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407A4600 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1407C4E20 (ObInitServerSilo.c)
 *     DbgkpGetServerSiloState @ 0x1407C6588 (DbgkpGetServerSiloState.c)
 *     DbgkInitializeServerSilo @ 0x140886DE8 (DbgkInitializeServerSilo.c)
 *     DbgkRegisterErrorPort @ 0x1408894A4 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140889AD4 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 *     PspCompleteServerSiloShutdown @ 0x140908750 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409087B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteExternalServerSiloState @ 0x140908A88 (PspDeleteExternalServerSiloState.c)
 *     PspInitializeServerSiloDeferred @ 0x140908CC0 (PspInitializeServerSiloDeferred.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140909310 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x14090943C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140909564 (PspSiloLoadApiSets.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140909634 (PspTerminateSiloSubsystemProcesses.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     PspFreezeProcessWorker @ 0x14090D910 (PspFreezeProcessWorker.c)
 *     SeInitServerSilo @ 0x14091E8F4 (SeInitServerSilo.c)
 *     ExpTimeZoneWork @ 0x14094E440 (ExpTimeZoneWork.c)
 *     ExShutdownSystem @ 0x1409B5C58 (ExShutdownSystem.c)
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
