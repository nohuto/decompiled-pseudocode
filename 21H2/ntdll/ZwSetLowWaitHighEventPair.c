/*
 * XREFs of ZwSetLowWaitHighEventPair @ 0x1800A0AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetLowWaitHighEventPair(HANDLE EventPairHandle)
{
  NTSTATUS result; // eax

  result = 423;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
