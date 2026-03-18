/*
 * XREFs of IsGetRedirectionBitmapSupported @ 0x1C00349AC
 * Callers:
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetRedirectionBitmapSupported()
{
  if ( qword_1C0258548 )
    return qword_1C0258548();
  else
    return 3221225659LL;
}
