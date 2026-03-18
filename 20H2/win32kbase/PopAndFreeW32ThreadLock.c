/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00A3550
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall PopAndFreeW32ThreadLock(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C024FFD8;
  if ( qword_1C024FFD8 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C024FFD8(a1);
  return result;
}
