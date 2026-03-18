/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C0041C70
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*PopAndFreeW32ThreadLock())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0251FD8;
  if ( qword_1C0251FD8 )
    return (__int64 (*)(void))qword_1C0251FD8();
  return result;
}
