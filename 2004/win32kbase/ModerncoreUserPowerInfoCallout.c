/*
 * XREFs of ModerncoreUserPowerInfoCallout @ 0x1C01F81DC
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0066874 (UserPowerInfoCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ModerncoreUserPowerInfoCallout())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0252558;
  if ( qword_1C0252558 )
    return (__int64 (*)(void))qword_1C0252558();
  return result;
}
