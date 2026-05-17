/*
 * XREFs of NtOpenFile @ 0x18009D470
 * Callers:
 *     LdrpMapResourceFile @ 0x18004BA08 (LdrpMapResourceFile.c)
 *     RtlpCheckRelativeDrive @ 0x18004D194 (RtlpCheckRelativeDrive.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005E72C (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapDllNtFileName @ 0x18005FAD4 (LdrpMapDllNtFileName.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072550 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072A9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800744A0 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpMUIEnumerateFolder @ 0x180086CAC (RtlpMUIEnumerateFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x18008832C (RtlpSysVolTakeOwnership.c)
 *     LdrpCheckAppDirType @ 0x1800D051C (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0EBC (LdrpCnvrtShortToLongFileName.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800FD2E0 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
