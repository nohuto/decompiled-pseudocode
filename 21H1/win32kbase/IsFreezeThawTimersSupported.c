/*
 * XREFs of IsFreezeThawTimersSupported @ 0x1C005D994
 * Callers:
 *     UserProcessThawCallout @ 0x1C005CC4C (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C005D71C (UserProcessFreezeCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreezeThawTimersSupported()
{
  if ( qword_1C0257F28 )
    return qword_1C0257F28();
  else
    return 3221225659LL;
}
