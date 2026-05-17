/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x1800A1F70
 * Callers:
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x1800A1720 (RtlpCaptureContext.c)
 */

char __fastcall RtlRaiseNoncontinuableException(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // [rsp+28h] [rbp-10h]
  __int64 v5; // [rsp+30h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char v7; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext(a2);
  *(_QWORD *)(v4 + 152) = &v7;
  *(_QWORD *)(v4 + 248) = retaddr;
  *(_QWORD *)(v5 + 16) = *(_QWORD *)(v4 + 248);
  if ( !v2 || NtCurrentPeb()->BeingDebugged )
    return ZwRaiseException();
  else
    return RtlDispatchException(v5, v4);
}
