/*
 * XREFs of UserJobCallout @ 0x1C005E628
 * Callers:
 *     W32CalloutDispatch @ 0x1C005D9C0 (W32CalloutDispatch.c)
 *     xxxUserProcessCallout @ 0x1C0066B70 (xxxUserProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 UserJobCallout()
{
  if ( qword_1C0257CA8 )
    return qword_1C0257CA8();
  else
    return 3221225659LL;
}
