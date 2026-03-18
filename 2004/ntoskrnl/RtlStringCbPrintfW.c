/*
 * XREFs of RtlStringCbPrintfW @ 0x14027DBC4
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BD444 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     WmipInsertStaticNames @ 0x140645EDC (WmipInsertStaticNames.c)
 *     PopDiagTracePowerRequestCreate @ 0x14064D4B8 (PopDiagTracePowerRequestCreate.c)
 *     IopGetLegacyVetoListDrivers @ 0x14066853C (IopGetLegacyVetoListDrivers.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14066ABD4 (EtwpGetSecurityDescriptorByGuid.c)
 *     ExProcessorCounterSetCallback @ 0x1406A6580 (ExProcessorCounterSetCallback.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406BD56C (PfSnOpenVolumesForPrefetch.c)
 *     EtwpGenerateFileName @ 0x1406C6434 (EtwpGenerateFileName.c)
 *     EtwpCreateNtFileName @ 0x1406C95FC (EtwpCreateNtFileName.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406CA74C (EtwpRealtimeCreateLogfile.c)
 *     EtwpExpandFileName @ 0x1406CBAA4 (EtwpExpandFileName.c)
 *     PfSnGetPrefetchInstructions @ 0x1406CD1D8 (PfSnGetPrefetchInstructions.c)
 *     PfpSourceGetPrefetchSupport @ 0x1406D2590 (PfpSourceGetPrefetchSupport.c)
 *     WmipSecurityMethod @ 0x1406EDF50 (WmipSecurityMethod.c)
 *     PfSnOperationProcess @ 0x1407085C4 (PfSnOperationProcess.c)
 *     PnpUnloadAttachedDriver @ 0x14072AB3C (PnpUnloadAttachedDriver.c)
 *     WmipPrepareWnodeSI @ 0x140741C54 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x140746B84 (MiDriverLoadSucceeded.c)
 *     PiNormalizeDeviceText @ 0x140757E70 (PiNormalizeDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140758CC4 (PiBuildDeviceNodeInstancePath.c)
 *     PipMakeGloballyUniqueId @ 0x1407597C8 (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14077ADD0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14077CAA4 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14077D0C4 (EtwpGetAutoLoggerProviderFilter.c)
 *     CmpCreatePerfKeys @ 0x140791260 (CmpCreatePerfKeys.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14079A188 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079C8A0 (EtwpEnumerateAutologgerPath.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1407B3ACC (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x1407B3D48 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x1407B6748 (SepSetSystemPaths.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1407B8588 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepReadAndPopulateCapes @ 0x1407BB30C (SepReadAndPopulateCapes.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14089E6A0 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1408B7DA0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408B7EB0 (KiSynchNumaCounterSetCallback.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408F396C (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408F39D8 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x14092F1DC (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140935B60 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140935E80 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x140936B50 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x140936F8C (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409375A8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14096A464 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x14096C8A4 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x1409706E8 (SiGetEfiSystemDevice.c)
 *     LkmdTelCreateReport @ 0x14097F8E8 (LkmdTelCreateReport.c)
 *     CreateSystemRootLink @ 0x140A6BE48 (CreateSystemRootLink.c)
 *     VhdInitialize @ 0x140A703C0 (VhdInitialize.c)
 *     MfgInitSystem @ 0x140A7056C (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140A706B0 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x140A91D20 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A91EA0 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A92778 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403CDA70 (_vsnwprintf.c)
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
