/*
 * XREFs of _NtOpenFile@24 @ 0x4B2F2CB0
 * Callers:
 *     _LdrpNtOpenFileUnredirected@12 @ 0x4B2B925A (_LdrpNtOpenFileUnredirected@12.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 *     _RtlpProbeAssemblyStorageRootForAssembly@28 @ 0x4B2E2E88 (_RtlpProbeAssemblyStorageRootForAssembly@28.c)
 *     _RtlpCreateNewDirectoryReference@12 @ 0x4B2E418B (_RtlpCreateNewDirectoryReference@12.c)
 *     _LdrpFindLoadedDllByMappingFile@12 @ 0x4B2E5721 (_LdrpFindLoadedDllByMappingFile@12.c)
 *     _RtlpCheckRelativeDrive@4 @ 0x4B32D619 (_RtlpCheckRelativeDrive@4.c)
 *     _LdrpCheckAppDirType@4 @ 0x4B33145D (_LdrpCheckAppDirType@4.c)
 *     _LdrpCheckForSecuROMImage@4 @ 0x4B33163B (_LdrpCheckForSecuROMImage@4.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _LdrpCnvrtShortToLongFileName@12 @ 0x4B33F31F (_LdrpCnvrtShortToLongFileName@12.c)
 *     _RtlpMUIEnumerateFolder@12 @ 0x4B354614 (_RtlpMUIEnumerateFolder@12.c)
 *     _RtlpSysVolTakeOwnership@4 @ 0x4B35DEDD (_RtlpSysVolTakeOwnership@4.c)
 *     _RtlpOpenAndMapCustomCultureFile@12 @ 0x4B3635BF (_RtlpOpenAndMapCustomCultureFile@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  return Wow64SystemServiceCall();
}
