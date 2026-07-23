/*
 * XREFs of DbgPrintEx @ 0x180050340
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x18001C6C0 (RtlFindActivationContextSectionString.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001CA18 (RtlpFindUnicodeStringInSection.c)
 *     RtlFindActivationContextSectionGuid @ 0x18001CD80 (RtlFindActivationContextSectionGuid.c)
 *     RtlpLocateActivationContextSection @ 0x18001D0FC (RtlpLocateActivationContextSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18001D278 (RtlpFindActivationContextSection_CheckParameters.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180053A5C (TppCallbackCheckThreadAfterCallback.c)
 *     TpCheckTerminateWorker @ 0x1800546A0 (TpCheckTerminateWorker.c)
 *     RtlpWaitOnCriticalSection @ 0x180063480 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180064AC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180064BE0 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x180070A40 (RtlDeactivateActivationContext.c)
 *     RtlGetAssemblyStorageRoot @ 0x180071F70 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180072094 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180072A74 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlCreateActivationContext @ 0x180072E60 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180072FB4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x180073038 (RtlpValidateActivationContextData.c)
 *     RtlpQueryRunLevel @ 0x180077F28 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180078018 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x1800783EC (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180079DD0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081D50 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     UninitUser32Proc @ 0x18008C060 (UninitUser32Proc.c)
 *     AVrfInitializeVerifier @ 0x1800D9B98 (AVrfInitializeVerifier.c)
 *     AvrfMiniLoadDll @ 0x1800DB920 (AvrfMiniLoadDll.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DFE38 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800E00C8 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0410 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E9280 (RtlpNotOwnerCriticalSection.c)
 *     RtlAssert @ 0x1800ED9A0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FF5DC (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100AE0 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800509F8 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, Format, (__int64 *)va, 1);
}
