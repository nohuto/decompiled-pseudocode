/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C0063950
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall zzzCalcStartCursorHide(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C024FEA0;
  if ( qword_1C024FEA0 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C024FEA0(a1, a2);
  return result;
}
