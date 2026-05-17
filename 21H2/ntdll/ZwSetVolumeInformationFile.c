/*
 * XREFs of ZwSetVolumeInformationFile @ 0x1800A0CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetVolumeInformationFile()
{
  __int64 result; // rax

  result = 436LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
