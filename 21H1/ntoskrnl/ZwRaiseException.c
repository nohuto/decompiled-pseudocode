/*
 * XREFs of ZwRaiseException @ 0x1403F4FF0
 * Callers:
 *     RtlRaiseException @ 0x14032B960 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x14032C220 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x1403FE570 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
