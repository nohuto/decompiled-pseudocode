/*
 * XREFs of ZwRemoveProcessDebug @ 0x18009FEC0
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800CCAE0 (DbgUiDebugActiveProcess.c)
 *     DbgUiStopDebugging @ 0x1800CCC60 (DbgUiStopDebugging.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  NTSTATUS result; // eax

  result = 369;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
