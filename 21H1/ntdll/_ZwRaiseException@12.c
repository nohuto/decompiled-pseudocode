/*
 * XREFs of _ZwRaiseException@12 @ 0x4B2F3FE0
 * Callers:
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 *     _KiUserExceptionDispatcher@8 @ 0x4B2F4E70 (_KiUserExceptionDispatcher@8.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrpLogFatalUserCallbackException@8 @ 0x4B330333 (_LdrpLogFatalUserCallbackException@8.c)
 *     _WerpBreakIntoDebuggerIfPresent@12 @ 0x4B33AF53 (_WerpBreakIntoDebuggerIfPresent@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  return Wow64SystemServiceCall();
}
