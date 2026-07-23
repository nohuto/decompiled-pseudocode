/*
 * XREFs of NtOpenFile @ 0x18009DC60
 * Callers:
 *     RtlpCheckRelativeDrive @ 0x18004A4B8 (RtlpCheckRelativeDrive.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005FD2C (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapDllNtFileName @ 0x1800610D4 (LdrpMapDllNtFileName.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073680 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073BCC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800755D0 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800873AC (RtlpMUIEnumerateFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x180088A2C (RtlpSysVolTakeOwnership.c)
 *     LdrpCheckAppDirType @ 0x1800D067C (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800DB690 (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0FCC (LdrpCnvrtShortToLongFileName.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800FD650 (RtlpOpenAndMapCustomCultureFile.c)
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
