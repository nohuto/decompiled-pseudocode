/*
 * XREFs of ModerncoreUserPowerInfoCallout @ 0x1C01F68AC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ModerncoreUserPowerInfoCallout())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0250558;
  if ( qword_1C0250558 )
    return (__int64 (*)(void))qword_1C0250558();
  return result;
}
