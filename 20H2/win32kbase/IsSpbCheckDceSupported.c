/*
 * XREFs of IsSpbCheckDceSupported @ 0x1C00A00D8
 * Callers:
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSpbCheckDceSupported()
{
  if ( qword_1C02505D8 )
    return qword_1C02505D8();
  else
    return 3221225659LL;
}
