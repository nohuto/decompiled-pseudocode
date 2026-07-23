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
 *     RtlpGetRegistryHandle @ 0x18004590C (RtlpGetRegistryHandle.c)
 *     RtlUTF8StringToUnicodeString @ 0x180059390 (RtlUTF8StringToUnicodeString.c)
 *     LdrpGetNtPathFromDosPath @ 0x18005F20C (LdrpGetNtPathFromDosPath.c)
 *     LdrpGetFullPath @ 0x18005F39C (LdrpGetFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18005F500 (LdrpMapDllSearchPath.c)
 *     LdrpFreeUnicodeString @ 0x18005F7D0 (LdrpFreeUnicodeString.c)
 *     LdrpMapDllFullPath @ 0x18005F8C0 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180060478 (LdrpMapDllRetry.c)
 *     RtlUnicodeStringToOemString @ 0x180060BA0 (RtlUnicodeStringToOemString.c)
 *     RtlOemStringToUnicodeString @ 0x180060C80 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180060D70 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToAnsiString @ 0x180061200 (RtlUnicodeStringToAnsiString.c)
 *     LdrpInitShimEngine @ 0x18006B63C (LdrpInitShimEngine.c)
 *     RtlpEnsureBufferSize @ 0x18006DBF0 (RtlpEnsureBufferSize.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072550 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072A9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDuplicateUnicodeString @ 0x180078D40 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x18007BC70 (RtlDowncaseUnicodeString.c)
 *     LdrpCorInitialize @ 0x180082AB4 (LdrpCorInitialize.c)
 *     RtlFreeOemString @ 0x18008AA70 (RtlFreeOemString.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CD3DC (LdrpEnclaveAddDependentModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D0780 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4B44 (LdrpAddRedirectedFunction.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DEB40 (LdrUpdatePackageSearchPath.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB010 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB140 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB250 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1800F583C (RtlpConstructCrossVmObjectPath.c)
 *     RtlUnicodeStringToUTF8String @ 0x180102BB0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

LOGICAL __fastcall NtdllpFreeStringRoutine(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
