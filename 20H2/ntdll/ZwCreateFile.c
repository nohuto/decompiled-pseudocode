/*
 * XREFs of ZwCreateFile @ 0x18009DB50
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18004BDF8 (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpCreateFile @ 0x180056C24 (EtwpCreateFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180087E50 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpGetVolumeHandle @ 0x18008B45C (RtlpGetVolumeHandle.c)
 *     LdrpResMapFile @ 0x1800E44B4 (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800EE020 (RtlCreateBootStatusDataFile.c)
 *     GetProcessIptTrace @ 0x180118064 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x1801181C0 (GetProcessIptTraceSize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180118348 (RtlpQueryDiskSpacePolicy.c)
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
