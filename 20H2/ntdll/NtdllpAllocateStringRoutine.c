/*
 * XREFs of NtdllpAllocateStringRoutine @ 0x18006DBB0
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
 *     RtlpGetTokenNamedObjectPath @ 0x180044080 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x18004595C (RtlpGetRegistryHandle.c)
 *     RtlpQueryRegistryDirect @ 0x18004632C (RtlpQueryRegistryDirect.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800593E0 (RtlUTF8StringToUnicodeString.c)
 *     LdrpAllocateUnicodeString @ 0x18005F43C (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18005F4AC (LdrpGetFullPath.c)
 *     RtlUnicodeStringToOemString @ 0x180060CB0 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180060D90 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180060E80 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180061310 (RtlUnicodeStringToAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x180069B80 (RtlStringFromGUIDEx.c)
 *     RtlpEnsureBufferSize @ 0x18006DD00 (RtlpEnsureBufferSize.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180072094 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x180078E40 (RtlDuplicateUnicodeString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800793F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlDowncaseUnicodeString @ 0x18007BD70 (RtlDowncaseUnicodeString.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D5950 (RtlComputePrivatizedDllName_U.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEEE0 (LdrUpdatePackageSearchPath.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E0410 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB520 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB650 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB760 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F5D4C (RtlpConstructCrossVmObjectPath.c)
 *     RtlUnicodeStringToUTF8String @ 0x1801030C0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpAllocateStringRoutine(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
