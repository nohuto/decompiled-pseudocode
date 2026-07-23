/*
 * XREFs of ZwCallEnclave @ 0x18009E020
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A0D50 (RtlEnclaveCallDispatcher.c)
 *     RtlCallEnclave @ 0x1800A0DC0 (RtlCallEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD710 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  NTSTATUS result; // eax

  result = 145;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
