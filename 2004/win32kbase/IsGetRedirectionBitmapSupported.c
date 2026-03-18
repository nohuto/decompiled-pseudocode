/*
 * XREFs of IsGetRedirectionBitmapSupported @ 0x1C004428C
 * Callers:
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetRedirectionBitmapSupported()
{
  if ( qword_1C0252588 )
    return qword_1C0252588();
  else
    return 3221225659LL;
}
