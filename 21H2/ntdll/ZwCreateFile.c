/*
 * XREFs of ZwCreateFile @ 0x18009E0E0
 * Callers:
 *     EtwpCreateFile @ 0x180049314 (EtwpCreateFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180088450 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpGetVolumeHandle @ 0x18008BA5C (RtlpGetVolumeHandle.c)
 *     LdrpResMapFile @ 0x1800E4344 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EDEB0 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x180117F8C (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x1801180E8 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180118270 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateFile()
{
  __int64 result; // rax

  result = 85LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
