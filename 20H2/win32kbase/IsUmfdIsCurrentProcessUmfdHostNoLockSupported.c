/*
 * XREFs of IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C0018940
 * Callers:
 *     GdiProcessCallout @ 0x1C0017450 (GdiProcessCallout.c)
 *     GdiThreadCallout @ 0x1C0018740 (GdiThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdIsCurrentProcessUmfdHostNoLockSupported()
{
  if ( qword_1C024F570 )
    return qword_1C024F570();
  else
    return 3221225659LL;
}
