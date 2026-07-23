/*
 * XREFs of IoCreateFile @ 0x1406CC6C0
 * Callers:
 *     NtCreateMailslotFile @ 0x1405D5A60 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1406CC560 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092ECBC (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140A6A0D0 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
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
           FileHandle,
           DesiredAccess,
           (_SLIST_ENTRY *)ObjectAttributes,
           (int *)&IoStatusBlock->0,
           (HANDLE *)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           (ULONG *)EaBuffer,
           NumberOfBytes,
           CreateFileType,
           (_SLIST_ENTRY *)InternalParameters,
           Options,
           0,
           0LL);
}
