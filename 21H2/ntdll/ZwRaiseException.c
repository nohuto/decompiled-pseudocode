/*
 * XREFs of ZwRaiseException @ 0x1800A02F0
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A14C0 (KiUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A1F30 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF4F0 (LdrpLogFatalUserCallbackException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD98C (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800F7240 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  NTSTATUS result; // eax

  result = 360;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
