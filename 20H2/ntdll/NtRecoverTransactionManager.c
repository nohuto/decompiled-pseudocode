/*
 * XREFs of NtRecoverTransactionManager @ 0x18009FE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  NTSTATUS result; // eax

  result = 363;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
