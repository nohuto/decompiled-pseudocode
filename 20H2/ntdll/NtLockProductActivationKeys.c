/*
 * XREFs of NtLockProductActivationKeys @ 0x18009F200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  NTSTATUS result; // eax

  result = 267;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
