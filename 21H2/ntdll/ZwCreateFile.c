/*
 * XREFs of ZwCreateFile @ 0x18009E0A0
 * Callers:
 *     EtwpCreateFile @ 0x180049314 (EtwpCreateFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180088450 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpGetVolumeHandle @ 0x18008BA5C (RtlpGetVolumeHandle.c)
 *     LdrpResMapFile @ 0x1800E4304 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EDE70 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x180117F2C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180118088 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180118210 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  NTSTATUS result; // eax

  result = 85;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
