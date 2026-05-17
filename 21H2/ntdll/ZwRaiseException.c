/*
 * XREFs of ZwRaiseException @ 0x1800A0330
 * Callers:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A1500 (KiUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A1F70 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF530 (LdrpLogFatalUserCallbackException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD9CC (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlEnterUmsSchedulingMode @ 0x1800F7280 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     <none>
 */

__int64 ZwRaiseException()
{
  __int64 result; // rax

  result = 360LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
