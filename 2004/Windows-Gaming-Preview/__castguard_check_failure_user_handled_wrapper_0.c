/*
 * XREFs of __castguard_check_failure_user_handled_wrapper_0 @ 0x180002960
 * Callers:
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*_castguard_check_failure_user_handled_wrapper_0())(void)
{
  __int64 (*result)(void); // rax

  result = qword_18005AC20;
  if ( qword_18005AC20 )
    return (__int64 (*)(void))qword_18005AC20();
  return result;
}
