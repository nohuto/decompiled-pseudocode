/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C00A08A0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall zzzCalcStartCursorHide(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0257E60;
  if ( qword_1C0257E60 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0257E60(a1, a2);
  return result;
}
