/*
 * XREFs of IsFreezeThawTimersSupported @ 0x1C0065BB0
 * Callers:
 *     UserProcessThawCallout @ 0x1C0065504 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C0065938 (UserProcessFreezeCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreezeThawTimersSupported()
{
  if ( qword_1C0251F68 )
    return qword_1C0251F68();
  else
    return 3221225659LL;
}
