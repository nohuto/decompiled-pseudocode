/*
 * XREFs of ZwGetNextThread @ 0x18009ED00
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18011626C (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNextThread()
{
  __int64 result; // rax

  result = 248LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
