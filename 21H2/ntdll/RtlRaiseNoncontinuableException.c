/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x1800A1F30
 * Callers:
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x1800A16E0 (RtlpCaptureContext.c)
 */

void __cdecl __noreturn RtlRaiseNoncontinuableException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v2; // r8
  struct _CONTEXT *v3; // [rsp+28h] [rbp-10h]
  EXCEPTION_RECORD *v4; // [rsp+30h] [rbp-8h]
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext((__int64)ContextRecord);
  v3->Rsp = (DWORD64)&v6;
  v3->Rip = retaddr;
  v4->ExceptionAddress = (void *)v3->Rip;
  if ( !v2 || NtCurrentPeb()->BeingDebugged )
    ZwRaiseException(v4, v3, v2);
  else
    RtlDispatchException(v4, v3);
}
