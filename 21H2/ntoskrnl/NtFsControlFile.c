/*
 * XREFs of NtFsControlFile @ 0x1405F2980
 * Callers:
 *     <none>
 * Callees:
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
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
  size_t Size; // [rsp+38h] [rbp-30h]
  SIZE_T Length; // [rsp+48h] [rbp-20h]

  LODWORD(Length) = OutputBufferLength;
  LODWORD(Size) = InputBufferLength;
  return IopXxxControlFile(
           (int)FileHandle,
           (__int64)IoStatusBlock,
           FsControlCode,
           InputBuffer,
           Size,
           OutputBuffer,
           Length,
           0);
}
