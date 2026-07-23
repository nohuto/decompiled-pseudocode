/*
 * XREFs of ZwContinue @ 0x18009D670
 * Callers:
 *     LdrInitializeThunk @ 0x180074B10 (LdrInitializeThunk.c)
 *     RtlRestoreContext @ 0x1800A1170 (RtlRestoreContext.c)
 *     RtlpLoadUmsDebugRegisterState @ 0x18010D8A0 (RtlpLoadUmsDebugRegisterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  NTSTATUS result; // eax

  result = 67;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
