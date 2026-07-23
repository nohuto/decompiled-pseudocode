/*
 * XREFs of NtQueryDirectoryFile @ 0x140643730
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDirectoryFileEx @ 0x140644A10 (NtQueryDirectoryFileEx.c)
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
  unsigned __int8 v11; // r10

  v11 = (ReturnSingleEntry != 0 ? 2 : 0) | 1;
  if ( !RestartScan )
    v11 = ReturnSingleEntry != 0 ? 2 : 0;
  return NtQueryDirectoryFileEx(
           FileHandle,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           FileInformation,
           Length,
           FileInformationClass,
           v11,
           FileName);
}
