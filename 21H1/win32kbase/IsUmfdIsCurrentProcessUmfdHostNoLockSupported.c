/*
 * XREFs of IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C000B770
 * Callers:
 *     GdiProcessCallout @ 0x1C000AC40 (GdiProcessCallout.c)
 *     GdiThreadCallout @ 0x1C000B570 (GdiThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdIsCurrentProcessUmfdHostNoLockSupported()
{
  if ( qword_1C0257530 )
    return qword_1C0257530();
  else
    return 3221225659LL;
}
