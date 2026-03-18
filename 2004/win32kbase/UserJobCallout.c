/*
 * XREFs of UserJobCallout @ 0x1C0066848
 * Callers:
 *     W32CalloutDispatch @ 0x1C0065BE0 (W32CalloutDispatch.c)
 *     xxxUserProcessCallout @ 0x1C0072150 (xxxUserProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 UserJobCallout()
{
  if ( qword_1C0251CE8 )
    return qword_1C0251CE8();
  else
    return 3221225659LL;
}
