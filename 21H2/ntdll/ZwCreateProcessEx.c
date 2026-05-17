/*
 * XREFs of ZwCreateProcessEx @ 0x18009DFE0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113CF0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateProcessEx()
{
  __int64 result; // rax

  result = 77LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
