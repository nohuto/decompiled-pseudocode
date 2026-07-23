/*
 * XREFs of NtDeviceIoControlFile @ 0x140715380
 * Callers:
 *     PopFlushVolumeWorker @ 0x140998FA0 (PopFlushVolumeWorker.c)
 * Callees:
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
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
           IoControlCode,
           InputBuffer,
           Size,
           OutputBuffer,
           Length,
           1);
}
