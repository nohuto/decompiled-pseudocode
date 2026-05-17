/*
 * XREFs of KiUserCallbackDispatcherHandler @ 0x1800A1420
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x180030600 (RtlUnwindEx.c)
 *     ZwCallbackReturn @ 0x18009D6E0 (ZwCallbackReturn.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF530 (LdrpLogFatalUserCallbackException.c)
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 */

__int64 __fastcall KiUserCallbackDispatcherHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord)
{
  unsigned int ExceptionCode; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) == 0 )
  {
    LdrpLogFatalUserCallbackException(ExceptionRecord, ContextRecord);
    return 0LL;
  }
  if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    RtlUnwindEx(
      TargetFrame,
      &KiUserCallbackDispatcherContinue,
      ExceptionRecord,
      (PVOID)(unsigned int)ExceptionRecord->ExceptionCode,
      ContextRecord,
      0LL);
    goto LABEL_5;
  }
  if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
  {
    ExceptionCode = ZwCallbackReturn();
LABEL_5:
    RtlRaiseStatus(ExceptionCode);
  }
  return 1LL;
}
