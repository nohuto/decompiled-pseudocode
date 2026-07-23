/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x140405AD0
 * Callers:
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x1404053C0 (RtlpCaptureContext.c)
 */

void __cdecl __noreturn RtlRaiseNoncontinuableException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  char v2; // r8
  _CONTEXT *v3; // [rsp+28h] [rbp-10h]
  __int64 v4; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext();
  *(_QWORD *)(v4 + 152) = &v6;
  *(_QWORD *)(v4 + 248) = retaddr;
  v3->P3Home = *(_QWORD *)(v4 + 248);
  if ( v2 )
    RtlRaiseException((PEXCEPTION_RECORD)v4);
  else
    ZwRaiseException((PEXCEPTION_RECORD)v4, v3, 0);
}
