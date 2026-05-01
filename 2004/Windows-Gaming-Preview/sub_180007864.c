/*
 * XREFs of sub_180007864 @ 0x180007864
 * Callers:
 *     sub_180008BE0 @ 0x180008BE0 (sub_180008BE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*sub_180007864())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_18005AD78;
  if ( qword_18005AD78 )
    return (__int64 (*)(void))result();
  result = (__int64 (*)(void))qword_18005AD90;
  if ( qword_18005AD90 )
    return (__int64 (*)(void))result();
  return result;
}
