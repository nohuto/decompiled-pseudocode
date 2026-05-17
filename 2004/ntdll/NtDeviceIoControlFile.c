/*
 * XREFs of NtDeviceIoControlFile @ 0x18009CEF0
 * Callers:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18008B2AC (RtlQueryVolumeDiskSpeedPolicy.c)
 *     GetProcessIptTrace @ 0x180117B54 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180117CB0 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x1801180A8 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 * Callees:
 *     <none>
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
  NTSTATUS result; // eax

  result = 7;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
