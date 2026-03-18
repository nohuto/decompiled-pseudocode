/*
 * XREFs of PsGetCurrentServerSiloGlobals @ 0x1402D9560
 * Callers:
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     NtTraceEvent @ 0x1402D5FC0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1402D68C0 (EtwpTraceMessageVa.c)
 *     EtwpAdjustTraceBuffers @ 0x140312AD0 (EtwpAdjustTraceBuffers.c)
 *     EtwWriteKMSecurityEvent @ 0x1403BC914 (EtwWriteKMSecurityEvent.c)
 *     EtwSendTraceBuffer @ 0x1405A0370 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1405A04E0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A0988 (EtwTraceRaw.c)
 *     WmiGetClock @ 0x1405A0BA0 (WmiGetClock.c)
 *     EtwpGetCurrentSiloState @ 0x1405A4B64 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1405A7744 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405A7C14 (EtwpSetCompressionSettings.c)
 *     ObQueryDeviceMapInformation @ 0x1405DF8B0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x1405DFEE0 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ExpWnfDeleteScopeById @ 0x140662C0C (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x140668DC4 (ExpWnfResolveScopeInstance.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
 *     ExpWnfGenerateStateName @ 0x14066B970 (ExpWnfGenerateStateName.c)
 *     ntoskrnl_27 @ 0x140674760 (ntoskrnl_27.c)
 *     NtQueryLicenseValue @ 0x1406747F0 (NtQueryLicenseValue.c)
 *     EtwpRealtimeConnect @ 0x140677318 (EtwpRealtimeConnect.c)
 *     NtOpenPrivateNamespace @ 0x14067DAC0 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x14067DC90 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x14067E0DC (ObpRegisterPrivateNamespace.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14068A3D4 (ExpWnfGetNameStoreRegistryRoot.c)
 *     EtwpExpandFileName @ 0x1406B5CC4 (EtwpExpandFileName.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406C192C (ObpDeleteSymbolicLinkName.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1406C1EA8 (ObSetCurrentProcessDeviceMap.c)
 *     RtlIsMultiSessionSku @ 0x1406CCA90 (RtlIsMultiSessionSku.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406D52FC (ObpRemoveNamespaceFromTable.c)
 *     RtlGetSuiteMask @ 0x1406D82C0 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406DECB0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     ExpWatchProductTypeWork @ 0x1406DF6A0 (ExpWatchProductTypeWork.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E3D08 (ObpCreateSymbolicLinkName.c)
 *     RtlGetNtSystemRoot @ 0x1406E62F0 (RtlGetNtSystemRoot.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EA720 (ExpWnfEnumerateScopeInstances.c)
 *     ExUpdateLicenseData @ 0x1406EDCD0 (ExUpdateLicenseData.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x14071F104 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     PsQueryCurrentApiSetSchema @ 0x140746300 (PsQueryCurrentApiSetSchema.c)
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
 *     MmUnloadSystemImage @ 0x14075D670 (MmUnloadSystemImage.c)
 *     EtwShutdown @ 0x140760200 (EtwShutdown.c)
 *     MmIsSessionLeaderProcess @ 0x14076CE10 (MmIsSessionLeaderProcess.c)
 *     MiInitializeSessionGlobals @ 0x140772CB0 (MiInitializeSessionGlobals.c)
 *     WmiQueryTraceInformation @ 0x140774290 (WmiQueryTraceInformation.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x14077502C (EtwQueryTraceHandleByLoggerName.c)
 *     EtwEnableTrace @ 0x140775430 (EtwEnableTrace.c)
 *     RtlSetActiveConsoleId @ 0x14077A280 (RtlSetActiveConsoleId.c)
 *     ExInitLicenseData @ 0x140791B78 (ExInitLicenseData.c)
 *     EtwStartAutoLogger @ 0x1407A05CC (EtwStartAutoLogger.c)
 *     SepSetSystemPaths @ 0x1407B35D8 (SepSetSystemPaths.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407B8710 (ObIsDosDeviceLocallyMapped.c)
 *     NtSetDefaultHardErrorPort @ 0x1407BC630 (NtSetDefaultHardErrorPort.c)
 *     ExInitLicenseCallback @ 0x1407BED78 (ExInitLicenseCallback.c)
 *     ObpGetShadowDirectory @ 0x1408D798C (ObpGetShadowDirectory.c)
 *     PsGetCurrentServerSiloName @ 0x1409018A0 (PsGetCurrentServerSiloName.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x14090B9A0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlGetSessionProperties @ 0x14090F200 (RtlGetSessionProperties.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x14091F490 (SepRmSetSharedUserSessionWrkr.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 *     EtwRegisterEventCallback @ 0x140938680 (EtwRegisterEventCallback.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14093A6B0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093A77C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093ADC4 (EtwpUpdatePeriodicCaptureState.c)
 *     ExFetchLicenseData @ 0x140948780 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x1409488E0 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1409489A0 (ExSetLicenseTamperState.c)
 *     ExUpdateOsPfnInRegistry @ 0x140948AC0 (ExUpdateOsPfnInRegistry.c)
 *     ExpRaiseHardError @ 0x140951A4C (ExpRaiseHardError.c)
 *     EtwpEventTracingCounterSetCallback @ 0x14097E330 (EtwpEventTracingCounterSetCallback.c)
 *     ExpTimeRefreshWork @ 0x14098B3D0 (ExpTimeRefreshWork.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1402D95B0 (PsGetEffectiveServerSilo.c)
 */

void *PsGetCurrentServerSiloGlobals()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 EffectiveServerSilo; // rax

  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    EffectiveServerSilo = *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(Blink);
  if ( EffectiveServerSilo )
    return *(void **)(EffectiveServerSilo + 1272);
  else
    return &PspHostSiloGlobals;
}
