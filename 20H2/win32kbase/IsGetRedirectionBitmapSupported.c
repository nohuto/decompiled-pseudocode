/*
 * XREFs of IsGetRedirectionBitmapSupported @ 0x1C00A516C
 * Callers:
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetRedirectionBitmapSupported()
{
  if ( qword_1C0250588 )
    return qword_1C0250588();
  else
    return 3221225659LL;
}
