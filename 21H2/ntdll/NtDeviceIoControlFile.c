/*
 * XREFs of NtDeviceIoControlFile @ 0x18009D720
 * Callers:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18008B9AC (RtlQueryVolumeDiskSpeedPolicy.c)
 *     GetProcessIptTrace @ 0x180117F8C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x1801180E8 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x1801184E0 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
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
