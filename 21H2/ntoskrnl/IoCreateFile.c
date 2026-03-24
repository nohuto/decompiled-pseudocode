/*
 * XREFs of IoCreateFile @ 0x14060B1D0
 * Callers:
 *     NtCreateMailslotFile @ 0x1405D8A00 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1406AFC70 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x1407919C0 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1407B661C (MiCreatePagingFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092C48C (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140A67640 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x14060B4C0 (IopCreateFile.c)
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
           (__int64)EaBuffer,
           EaLength,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
