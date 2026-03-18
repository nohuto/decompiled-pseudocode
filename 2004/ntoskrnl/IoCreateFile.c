/*
 * XREFs of IoCreateFile @ 0x140615990
 * Callers:
 *     NtCreateMailslotFile @ 0x1405CF5B0 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1406FE610 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x140928E94 (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140A62D10 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x140615C80 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options)
{
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           NumberOfBytes,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
