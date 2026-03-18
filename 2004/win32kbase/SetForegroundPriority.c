/*
 * XREFs of SetForegroundPriority @ 0x1C01F8224
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall SetForegroundPriority(__int64 a1))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0251F88;
  if ( qword_1C0251F88 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0251F88(a1, 1LL);
  return result;
}
