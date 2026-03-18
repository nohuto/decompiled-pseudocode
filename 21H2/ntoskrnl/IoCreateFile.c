/*
 * XREFs of IoCreateFile @ 0x1406CAD00
 * Callers:
 *     DifIoCreateFileWrapper @ 0x14060DFF0 (DifIoCreateFileWrapper.c)
 *     NtCreateMailslotFile @ 0x140661A80 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1406CABA0 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D69A8 (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140B219F0 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
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
  size_t Size; // [rsp+50h] [rbp-38h]

  LODWORD(Size) = EaLength;
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
           Size,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
