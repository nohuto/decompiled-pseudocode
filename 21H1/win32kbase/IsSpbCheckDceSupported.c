/*
 * XREFs of IsSpbCheckDceSupported @ 0x1C002E1D8
 * Callers:
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSpbCheckDceSupported()
{
  if ( qword_1C0258598 )
    return qword_1C0258598();
  else
    return 3221225659LL;
}
