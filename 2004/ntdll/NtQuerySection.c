/*
 * XREFs of NtQuerySection @ 0x18009D830
 * Callers:
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 *     PsspDumpObject_Section @ 0x180115BE0 (PsspDumpObject_Section.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySection()
{
  __int64 result; // rax

  result = 81LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
