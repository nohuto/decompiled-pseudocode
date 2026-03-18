/*
 * XREFs of RtlStringCbPrintfW @ 0x14020AEFC
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405FDDF0 (IopGetLegacyVetoListDrivers.c)
 *     WmipInsertStaticNames @ 0x1406474CC (WmipInsertStaticNames.c)
 *     PfSnGetPrefetchInstructions @ 0x140659F38 (PfSnGetPrefetchInstructions.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14066A5AC (EtwpGetSecurityDescriptorByGuid.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406B96B8 (PfpSourceGetPrefetchSupport.c)
 *     WmipSecurityMethod @ 0x1406C1ED0 (WmipSecurityMethod.c)
 *     EtwpExpandFileName @ 0x1406E08A0 (EtwpExpandFileName.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406E7EB4 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnOperationProcess @ 0x1406F146C (PfSnOperationProcess.c)
 *     ExProcessorCounterSetCallback @ 0x1406F8CE0 (ExProcessorCounterSetCallback.c)
 *     EtwpGenerateFileName @ 0x140711F88 (EtwpGenerateFileName.c)
 *     EtwpRealtimeCreateLogfile @ 0x140715AB0 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateNtFileName @ 0x1407169EC (EtwpCreateNtFileName.c)
 *     PopDiagTracePowerRequestCreate @ 0x14071D408 (PopDiagTracePowerRequestCreate.c)
 *     PnpUnloadAttachedDriver @ 0x1407395CC (PnpUnloadAttachedDriver.c)
 *     WmipPrepareWnodeSI @ 0x140750834 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x140755764 (MiDriverLoadSucceeded.c)
 *     PiNormalizeDeviceText @ 0x140766AB0 (PiNormalizeDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140767904 (PiBuildDeviceNodeInstancePath.c)
 *     PipMakeGloballyUniqueId @ 0x140767F84 (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407893D0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14078EE9C (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14078F4BC (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x14079DB00 (CmpCreatePerfKeys.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A94B8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407ABBD0 (EtwpEnumerateAutologgerPath.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1407C1A1C (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x1407C1C98 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x1407C4F78 (SepSetSystemPaths.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1407C6E18 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepReadAndPopulateCapes @ 0x1407C9B9C (SepReadAndPopulateCapes.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408A41D0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1408BD9C0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BDAD0 (KiSynchNumaCounterSetCallback.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408F957C (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408F95E8 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x14093500C (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x14093B990 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x14093BCB0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14093C980 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x14093CDBC (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093D3D8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140970234 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x140972674 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x1409764B8 (SiGetEfiSystemDevice.c)
 *     LkmdTelCreateReport @ 0x1409856B8 (LkmdTelCreateReport.c)
 *     CreateSystemRootLink @ 0x140A7272C (CreateSystemRootLink.c)
 *     VhdInitialize @ 0x140A767F8 (VhdInitialize.c)
 *     MfgInitSystem @ 0x140A769A4 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140A76AE8 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x140A97984 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A97B00 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403D0700 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      pszDest[v6] = 0;
      return v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      pszDest[v6] = 0;
      return -2147483643;
    }
  }
  return v5;
}
