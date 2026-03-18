/*
 * XREFs of NtDeviceIoControlFile @ 0x1405FCBA0
 * Callers:
 *     PopFlushVolumeWorker @ 0x140993610 (PopFlushVolumeWorker.c)
 * Callees:
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
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
  SIZE_T Length; // [rsp+48h] [rbp-20h]

  LODWORD(Length) = OutputBufferLength;
  return IopXxxControlFile(
           (int)FileHandle,
           (__int64)IoStatusBlock,
           IoControlCode,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           Length,
           1);
}
