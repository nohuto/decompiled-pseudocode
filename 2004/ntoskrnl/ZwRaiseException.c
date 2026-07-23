/*
 * XREFs of ZwRaiseException @ 0x1403F6280
 * Callers:
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x1403FF800 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
