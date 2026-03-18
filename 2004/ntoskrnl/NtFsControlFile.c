/*
 * XREFs of NtFsControlFile @ 0x1406E2C40
 * Callers:
 *     <none>
 * Callees:
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  char v13; // [rsp+50h] [rbp-18h]

  v13 = 0;
  return IopXxxControlFile(
           FileHandle,
           Event,
           (__int64)ApcRoutine,
           (__int64)ApcContext,
           (unsigned __int64)IoStatusBlock,
           FsControlCode,
           (char *)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           v13);
}
