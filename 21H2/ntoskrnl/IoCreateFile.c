/*
 * XREFs of IoCreateFile @ 0x14069AC80
 * Callers:
 *     NtCreateMailslotFile @ 0x1405D8A00 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x14060E510 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x140792F70 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092C5EC (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140A68640 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
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
