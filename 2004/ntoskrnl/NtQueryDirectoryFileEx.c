/*
 * XREFs of NtQueryDirectoryFileEx @ 0x14068CE60
 * Callers:
 *     NtQueryDirectoryFile @ 0x1406F2A60 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x14068CF20 (BuildQueryDirectoryIrp.c)
 */

NTSTATUS __cdecl NtQueryDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  NTSTATUS result; // eax
  _DWORD *v11; // r9

  result = BuildQueryDirectoryIrp(
             FileHandle,
             Event,
             ApcRoutine,
             ApcContext,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass,
             QueryFlags,
             FileName);
  if ( !result )
  {
    LOBYTE(v11) = 1;
    return IopSynchronousServiceTail(0LL, 0LL, 0LL, v11, 0, 0, 2u);
  }
  return result;
}
