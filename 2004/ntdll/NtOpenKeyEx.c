/*
 * XREFs of NtOpenKeyEx @ 0x18009F200
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CB9D4 (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x1800CED9C (LdrpIsCODServiceEnabled.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKeyEx()
{
  __int64 result; // rax

  result = 288LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
