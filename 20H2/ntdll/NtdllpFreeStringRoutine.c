/*
 * XREFs of NtdllpFreeStringRoutine @ 0x180022E70
 * Callers:
 *     RtlUpcaseUnicodeString @ 0x180015D20 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x18001D890 (RtlGetFullPathName_UstrEx.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x18001DBEC (LdrpFindLoadedDllInternal.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     RtlpGetRegistryHandle @ 0x18004595C (RtlpGetRegistryHandle.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800593E0 (RtlUTF8StringToUnicodeString.c)
 *     LdrpGetNtPathFromDosPath @ 0x18005F31C (LdrpGetNtPathFromDosPath.c)
 *     LdrpGetFullPath @ 0x18005F4AC (LdrpGetFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18005F610 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x18005F8E0 (LdrpFreeUnicodeString.c)
 *     LdrpMapDllFullPath @ 0x18005F9D0 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180060588 (LdrpMapDllRetry.c)
 *     RtlUnicodeStringToOemString @ 0x180060CB0 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180060D90 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180060E80 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180061310 (RtlUnicodeStringToAnsiString.c)
 *     LdrpInitShimEngine @ 0x18006B74C (LdrpInitShimEngine.c)
 *     RtlpEnsureBufferSize @ 0x18006DD00 (RtlpEnsureBufferSize.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x180078E40 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x18007BD70 (RtlDowncaseUnicodeString.c)
 *     LdrpCorInitialize @ 0x180082BB4 (LdrpCorInitialize.c)
 *     RtlFreeOemString @ 0x18008AB70 (RtlFreeOemString.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CD5BC (LdrpEnclaveAddDependentModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D0960 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4EE4 (LdrpAddRedirectedFunction.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEEE0 (LdrUpdatePackageSearchPath.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB520 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB650 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB760 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F5D4C (RtlpConstructCrossVmObjectPath.c)
 *     RtlUnicodeStringToUTF8String @ 0x1801030C0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall NtdllpFreeStringRoutine(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
