/*
 * XREFs of NtQueryDirectoryFile @ 0x1406F2A60
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDirectoryFileEx @ 0x14068CE60 (NtQueryDirectoryFileEx.c)
 */

NTSTATUS __stdcall NtQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  return NtQueryDirectoryFileEx(
           (__int64)FileHandle,
           (__int64)Event,
           (__int64)ApcRoutine,
           (__int64)ApcContext,
           (__int64)IoStatusBlock,
           (__int64)FileInformation);
}
