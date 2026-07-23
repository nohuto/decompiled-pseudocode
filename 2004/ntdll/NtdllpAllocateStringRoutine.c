/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x18006DAA0
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
 *     RtlpGetTokenNamedObjectPath @ 0x180044030 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x18004590C (RtlpGetRegistryHandle.c)
 *     RtlpQueryRegistryDirect @ 0x1800462DC (RtlpQueryRegistryDirect.c)
 *     RtlUTF8StringToUnicodeString @ 0x180059390 (RtlUTF8StringToUnicodeString.c)
 *     LdrpAllocateUnicodeString @ 0x18005F32C (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18005F39C (LdrpGetFullPath.c)
 *     RtlUnicodeStringToOemString @ 0x180060BA0 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180060C80 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180060D70 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180061200 (RtlUnicodeStringToAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x180069A70 (RtlStringFromGUIDEx.c)
 *     RtlpEnsureBufferSize @ 0x18006DBF0 (RtlpEnsureBufferSize.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180071F94 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072550 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072A9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x180078D40 (RtlDuplicateUnicodeString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800792F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlDowncaseUnicodeString @ 0x18007BC70 (RtlDowncaseUnicodeString.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D55B0 (RtlComputePrivatizedDllName_U.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEB40 (LdrUpdatePackageSearchPath.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0070 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB010 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB140 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB250 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F583C (RtlpConstructCrossVmObjectPath.c)
 *     RtlUnicodeStringToUTF8String @ 0x180102BB0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
