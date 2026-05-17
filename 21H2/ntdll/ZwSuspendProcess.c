/*
 * XREFs of ZwSuspendProcess @ 0x1800A0DD0
 * Callers:
 *     RtlWow64SuspendProcess @ 0x1800DC370 (RtlWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSuspendProcess()
{
  __int64 result; // rax

  result = 445LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
