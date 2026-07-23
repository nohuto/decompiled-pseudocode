/*
 * XREFs of DbgPrintEx @ 0x180051450
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
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180047690 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     RtlpWaitOnCriticalSection @ 0x180064970 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180065FB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800660D0 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x180071A70 (RtlDeactivateActivationContext.c)
 *     RtlGetAssemblyStorageRoot @ 0x180072FA0 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800730C4 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073680 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180073AA4 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073BCC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlCreateActivationContext @ 0x180073E90 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180073FE4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x180074068 (RtlpValidateActivationContextData.c)
 *     RtlpQueryRunLevel @ 0x180078F58 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180079048 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x18007941C (RtlpCrackActivationContextStringSectionHeader.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007AE00 (RtlQueryActivationContextApplicationSettings.c)
 *     UninitUser32Proc @ 0x18008C660 (UninitUser32Proc.c)
 *     AVrfInitializeVerifier @ 0x1800D9908 (AVrfInitializeVerifier.c)
 *     AvrfMiniLoadDll @ 0x1800DB690 (AvrfMiniLoadDll.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DFBA8 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DFE38 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0180 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E90D0 (RtlpNotOwnerCriticalSection.c)
 *     RtlAssert @ 0x1800ED7F0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FF43C (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100940 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x180051B08 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal(&Flags, ComponentId, Level, Format, (__int64 *)va, 1);
}
