/*
 * XREFs of ZwWaitForDebugEvent @ 0x1800A1090
 * Callers:
 *     DbgUiWaitStateChange @ 0x1800CCC40 (DbgUiWaitStateChange.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForDebugEvent()
{
  __int64 result; // rax

  result = 467LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
