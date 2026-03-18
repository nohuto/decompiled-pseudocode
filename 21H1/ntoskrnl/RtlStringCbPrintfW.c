/*
 * XREFs of RtlStringCbPrintfW @ 0x14025B494
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BCD24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PfSnOperationProcess @ 0x1405D3CA8 (PfSnOperationProcess.c)
 *     PfpSourceGetPrefetchSupport @ 0x1405D4148 (PfpSourceGetPrefetchSupport.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1405F28DC (EtwpGetSecurityDescriptorByGuid.c)
 *     IopGetLegacyVetoListDrivers @ 0x140615B5C (IopGetLegacyVetoListDrivers.c)
 *     PfSnGetPrefetchInstructions @ 0x140652B5C (PfSnGetPrefetchInstructions.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140670968 (PfSnOpenVolumesForPrefetch.c)
 *     EtwpGenerateFileName @ 0x140677150 (EtwpGenerateFileName.c)
 *     EtwpRealtimeCreateLogfile @ 0x14067B6D0 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateNtFileName @ 0x14067C60C (EtwpCreateNtFileName.c)
 *     WmipInsertStaticNames @ 0x14068103C (WmipInsertStaticNames.c)
 *     EtwpExpandFileName @ 0x1406B5CC4 (EtwpExpandFileName.c)
 *     WmipSecurityMethod @ 0x1406CCC50 (WmipSecurityMethod.c)
 *     ExProcessorCounterSetCallback @ 0x1406F0210 (ExProcessorCounterSetCallback.c)
 *     PopDiagTracePowerRequestCreate @ 0x1406FFAEC (PopDiagTracePowerRequestCreate.c)
 *     PnpUnloadAttachedDriver @ 0x140723C9C (PnpUnloadAttachedDriver.c)
 *     WmipPrepareWnodeSI @ 0x1407400D4 (WmipPrepareWnodeSI.c)
 *     MiDriverLoadSucceeded @ 0x140745004 (MiDriverLoadSucceeded.c)
 *     PiNormalizeDeviceText @ 0x140755F00 (PiNormalizeDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140757044 (PiBuildDeviceNodeInstancePath.c)
 *     PipMakeGloballyUniqueId @ 0x140757BAC (PipMakeGloballyUniqueId.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407789C0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14077D4C0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14077DAE0 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140784A24 (EtwpLoadMicroarchitecturalPmcs.c)
 *     CmpCreatePerfKeys @ 0x14078EE60 (CmpCreatePerfKeys.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407A035C (EtwpEnumerateAutologgerPath.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1407B095C (EtwpGetAutoLoggerEventNameFilter.c)
 *     PpmWmiRegisterInfo @ 0x1407B0BD8 (PpmWmiRegisterInfo.c)
 *     SepSetSystemPaths @ 0x1407B35D8 (SepSetSystemPaths.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1407B5418 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     SepReadAndPopulateCapes @ 0x1407B819C (SepReadAndPopulateCapes.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14089D380 (PipServiceInstanceToDeviceInstance.c)
 *     KiSynchCounterSetCallback @ 0x1408B6A80 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408B6B90 (KiSynchNumaCounterSetCallback.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408F267C (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408F26E8 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     WmipIncludeStaticNames @ 0x14092DF2C (WmipIncludeStaticNames.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1409348C0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140934BE0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1409358B0 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x140935CEC (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140936308 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1409690C4 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     BiGetPhysicalDriveName @ 0x14096B504 (BiGetPhysicalDriveName.c)
 *     SiGetEfiSystemDevice @ 0x14096F348 (SiGetEfiSystemDevice.c)
 *     LkmdTelCreateReport @ 0x14097E548 (LkmdTelCreateReport.c)
 *     CreateSystemRootLink @ 0x140A6BBC0 (CreateSystemRootLink.c)
 *     VhdInitialize @ 0x140A6F7F8 (VhdInitialize.c)
 *     MfgInitSystem @ 0x140A6F9A4 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140A6FAE8 (PoFxRegisterDebugger.c)
 *     VhdiGetVolumeNumber @ 0x140A92610 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A92790 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
 * Callees:
 *     _vsnwprintf @ 0x1403CCC30 (_vsnwprintf.c)
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
