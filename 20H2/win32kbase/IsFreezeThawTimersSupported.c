/*
 * XREFs of IsFreezeThawTimersSupported @ 0x1C00297B4
 * Callers:
 *     UserProcessThawCallout @ 0x1C0028FA4 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C002953C (UserProcessFreezeCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreezeThawTimersSupported()
{
  if ( qword_1C024FF68 )
    return qword_1C024FF68();
  else
    return 3221225659LL;
}
