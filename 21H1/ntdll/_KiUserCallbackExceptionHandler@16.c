/*
 * XREFs of _KiUserCallbackExceptionHandler@16 @ 0x4B2F4D80
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 *     _ZwCallbackReturn@12 @ 0x4B2F29B0 (_ZwCallbackReturn@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrpLogFatalUserCallbackException@8 @ 0x4B330333 (_LdrpLogFatalUserCallbackException@8.c)
 *     _RtlpCallUserCallbackExceptionFilter@8 @ 0x4B3665CC (_RtlpCallUserCallbackExceptionFilter@8.c)
 *     _RtlpUnlinkHandlerChain@4 @ 0x4B3666B0 (_RtlpUnlinkHandlerChain@4.c)
 */

int __stdcall KiUserCallbackExceptionHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord,
        int a4)
{
  int result; // eax
  NTSTATUS ExceptionCode; // eax
  NTSTATUS v6; // eax

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) == 0 )
  {
    RtlpUnlinkHandlerChain(ContextRecord);
    LdrpLogFatalUserCallbackException((int)ExceptionRecord, ContextRecord);
    return 0;
  }
  ExceptionCode = ExceptionRecord->ExceptionCode;
  if ( (ExceptionRecord->ExceptionFlags & 6) != 0 )
  {
LABEL_6:
    v6 = ZwCallbackReturn(0, 0, ExceptionCode);
    RtlRaiseStatus(v6);
  }
  result = RtlpCallUserCallbackExceptionFilter(ExceptionRecord, ContextRecord);
  if ( result )
  {
    RtlUnwind(TargetFrame, &loc_4B2F4DDE, ExceptionRecord, (PVOID)ExceptionRecord->ExceptionCode);
    goto LABEL_6;
  }
  return result;
}
