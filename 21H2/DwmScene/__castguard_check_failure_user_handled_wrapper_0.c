/*
 * XREFs of __castguard_check_failure_user_handled_wrapper_0 @ 0x18000EAC8
 * Callers:
 *     sub_18000D948 @ 0x18000D948 (sub_18000D948.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 (*_castguard_check_failure_user_handled_wrapper_0())(void)
{
  __int64 (*result)(void); // rax

  result = qword_18021F528;
  if ( qword_18021F528 )
    return (__int64 (*)(void))qword_18021F528();
  return result;
}
