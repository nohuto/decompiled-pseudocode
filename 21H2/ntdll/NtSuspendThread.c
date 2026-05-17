/*
 * XREFs of NtSuspendThread @ 0x1800A0DF0
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D6140 (RtlpProcessReflectionStartup.c)
 *     RtlWow64SuspendThread @ 0x1800DC4E0 (RtlWow64SuspendThread.c)
 *     RtlRemoteCall @ 0x1800FF100 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtSuspendThread()
{
  __int64 result; // rax

  result = 446LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
