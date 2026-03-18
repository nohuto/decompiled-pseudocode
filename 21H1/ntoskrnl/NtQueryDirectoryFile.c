/*
 * XREFs of NtQueryDirectoryFile @ 0x1406D1AA0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDirectoryFileEx @ 0x1405E3990 (NtQueryDirectoryFileEx.c)
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
