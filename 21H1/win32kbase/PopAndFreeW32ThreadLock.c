/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C003310C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*PopAndFreeW32ThreadLock())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257F98;
  if ( qword_1C0257F98 )
    return (__int64 (*)(void))qword_1C0257F98();
  return result;
}
