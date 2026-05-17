/*
 * XREFs of NtQueryValueKey @ 0x18009D920
 * Callers:
 *     LdrpQueryValueKey @ 0x18003F680 (LdrpQueryValueKey.c)
 *     ReadUlongFromKey @ 0x18003F7B4 (ReadUlongFromKey.c)
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180049DEC (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpGetRegDwordValue @ 0x180049ED4 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x18004A1C8 (EtwpQueryRegString.c)
 *     RtlGetPersistedStateLocation @ 0x18004A370 (RtlGetPersistedStateLocation.c)
 *     WerpGlobalFlagsForProcess @ 0x180061C84 (WerpGlobalFlagsForProcess.c)
 *     RtlpLookupCurDirSetting @ 0x18006DF40 (RtlpLookupCurDirSetting.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076530 (RtlpProcessIFEOKeyFilter.c)
 *     RtlQueryImageFileKeyOption @ 0x18007B4D0 (RtlQueryImageFileKeyOption.c)
 *     RtlpNtQueryValueKey @ 0x18007C030 (RtlpNtQueryValueKey.c)
 *     LdrpCodeAuthzInitialize @ 0x18007C370 (LdrpCodeAuthzInitialize.c)
 *     RtlpTestHookInitialize @ 0x18007D5E0 (RtlpTestHookInitialize.c)
 *     RtlpIsCustomLocale @ 0x180087CB0 (RtlpIsCustomLocale.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008A8B0 (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlInitializeRXact @ 0x18008BB70 (RtlInitializeRXact.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB690 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CBA20 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0BE0 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D0FCC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D108C (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4780 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800D9948 (AVrfInitializeVerifier.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800DE75C (WerpEscalationReadUlongFromKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DF03C (RtlpLookupSafeCurDirList.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E01C0 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E1B10 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E2620 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3AB8 (RtlpQueryEafPlusModuleList.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EE3DC (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EE770 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1800F4434 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F4748 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetUserLocaleName @ 0x1800FD45C (RtlpGetUserLocaleName.c)
 *     RtlOsDeploymentState @ 0x1801020B0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x1801021F0 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106F54 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180119F50 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     QueryRegistryValue @ 0x18011A22C (QueryRegistryValue.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryValueKey()
{
  __int64 result; // rax

  result = 23LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
