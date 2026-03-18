/*
 * XREFs of SetForegroundPriority @ 0x1C01FDC30
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall SetForegroundPriority(__int64 a1))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0257F48;
  if ( qword_1C0257F48 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0257F48(a1, 1LL);
  return result;
}
