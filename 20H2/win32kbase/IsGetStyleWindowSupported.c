/*
 * XREFs of IsGetStyleWindowSupported @ 0x1C001FD28
 * Callers:
 *     UserSetDCVisRgn @ 0x1C001F800 (UserSetDCVisRgn.c)
 *     CreateCacheDC @ 0x1C001FB00 (CreateCacheDC.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetStyleWindowSupported()
{
  if ( qword_1C02505A8 )
    return qword_1C02505A8();
  else
    return 3221225659LL;
}
