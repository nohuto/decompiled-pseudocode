/*
 * XREFs of IsGetStyleWindowSupported @ 0x1C0014408
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0013EE0 (UserSetDCVisRgn.c)
 *     CreateCacheDC @ 0x1C00141E0 (CreateCacheDC.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetStyleWindowSupported()
{
  if ( qword_1C02525A8 )
    return qword_1C02525A8();
  else
    return 3221225659LL;
}
