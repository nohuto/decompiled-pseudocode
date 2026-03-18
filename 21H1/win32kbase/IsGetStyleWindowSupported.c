/*
 * XREFs of IsGetStyleWindowSupported @ 0x1C00A84B8
 * Callers:
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C00A7F90 (UserSetDCVisRgn.c)
 *     CreateCacheDC @ 0x1C00A8290 (CreateCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetStyleWindowSupported()
{
  if ( qword_1C0258568 )
    return qword_1C0258568();
  else
    return 3221225659LL;
}
