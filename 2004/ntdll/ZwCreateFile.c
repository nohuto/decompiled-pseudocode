/*
 * XREFs of ZwCreateFile @ 0x18009D8B0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDA8 (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpCreateFile @ 0x180056BD4 (EtwpCreateFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180087D50 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpGetVolumeHandle @ 0x18008B35C (RtlpGetVolumeHandle.c)
 *     LdrpResMapFile @ 0x1800E4064 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EDB10 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x180117B54 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x180117CB0 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180117E38 (RtlpQueryDiskSpacePolicy.c)
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
