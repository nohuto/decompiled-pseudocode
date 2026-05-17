/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x1800A1990
 * Callers:
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x1800A1140 (RtlpCaptureContext.c)
 */

void __fastcall RtlRaiseNoncontinuableException(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v3; // [rsp+28h] [rbp-10h]
  __int64 v4; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext(a2);
  *(_QWORD *)(v4 + 152) = &v6;
  *(_QWORD *)(v4 + 248) = retaddr;
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(v4 + 248);
  if ( !v2 || BYTE2(NtCurrentTeb()->NtTib.ExceptionList) )
    ZwRaiseException();
  else
    RtlRaiseException((PEXCEPTION_RECORD)v4);
}
