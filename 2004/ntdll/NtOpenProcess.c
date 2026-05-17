/*
 * XREFs of NtOpenProcess @ 0x18009D2D0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800D7760 (RtlQueryProcessDebugInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D85F0 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC5D8 (RtlpWow64OpenThreadProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcess()
{
  __int64 result; // rax

  result = 38LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
