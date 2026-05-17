/*
 * XREFs of NtOpenFile @ 0x18009D710
 * Callers:
 *     LdrpMapResourceFile @ 0x18004BA58 (LdrpMapResourceFile.c)
 *     RtlpCheckRelativeDrive @ 0x18004D1E4 (RtlpCheckRelativeDrive.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005E83C (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapDllNtFileName @ 0x18005FBE4 (LdrpMapDllNtFileName.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180072650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180072B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800745A0 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpMUIEnumerateFolder @ 0x180086DAC (RtlpMUIEnumerateFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x18008842C (RtlpSysVolTakeOwnership.c)
 *     LdrpCheckAppDirType @ 0x1800D06FC (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800DB920 (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E125C (LdrpCnvrtShortToLongFileName.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800FD7F0 (RtlpOpenAndMapCustomCultureFile.c)
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
