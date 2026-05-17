/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x18006EBE0
 * Callers:
 *     RtlUpcaseUnicodeString @ 0x180015D20 (RtlUpcaseUnicodeString.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     RtlDosSearchPath_Ustr @ 0x180019C40 (RtlDosSearchPath_Ustr.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18001A930 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlGetFullPathName_UstrEx @ 0x18001D890 (RtlGetFullPathName_UstrEx.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044040 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x18004591C (RtlpGetRegistryHandle.c)
 *     RtlpQueryRegistryDirect @ 0x1800462EC (RtlpQueryRegistryDirect.c)
 *     RtlUTF8StringToUnicodeString @ 0x18005A910 (RtlUTF8StringToUnicodeString.c)
 *     LdrpAllocateUnicodeString @ 0x18006092C (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18006099C (LdrpGetFullPath.c)
 *     RtlUnicodeStringToOemString @ 0x1800621A0 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180062280 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180062370 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180062800 (RtlUnicodeStringToAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x18006B070 (RtlStringFromGUIDEx.c)
 *     RtlpEnsureBufferSize @ 0x18006ED30 (RtlpEnsureBufferSize.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800730C4 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073680 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073BCC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x180079E70 (RtlDuplicateUnicodeString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18007A428 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlDowncaseUnicodeString @ 0x18007C710 (RtlDowncaseUnicodeString.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D5700 (RtlComputePrivatizedDllName_U.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEC90 (LdrUpdatePackageSearchPath.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E01C0 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB3B0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB4E0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB5F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F5BDC (RtlpConstructCrossVmObjectPath.c)
 *     RtlUnicodeStringToUTF8String @ 0x180102F60 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpAllocateStringRoutine(__int64 a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
