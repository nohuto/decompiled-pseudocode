/*
 * XREFs of IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1C00BD890
 * Callers:
 *     GdiProcessCallout @ 0x1C00BCB60 (GdiProcessCallout.c)
 *     GdiThreadCallout @ 0x1C00BD690 (GdiThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdIsCurrentProcessUmfdHostNoLockSupported()
{
  if ( qword_1C0251570 )
    return qword_1C0251570();
  else
    return 3221225659LL;
}
