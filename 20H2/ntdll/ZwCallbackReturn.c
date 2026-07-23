/*
 * XREFs of ZwCallbackReturn @ 0x18009D150
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A0E40 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A0ED0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallbackReturn(PVOID OutputBuffer, ULONG OutputLength, NTSTATUS Status)
{
  NTSTATUS result; // eax

  result = 5;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
