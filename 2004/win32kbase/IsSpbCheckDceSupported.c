/*
 * XREFs of IsSpbCheckDceSupported @ 0x1C003CC40
 * Callers:
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsSpbCheckDceSupported()
{
  if ( qword_1C02525D8 )
    return qword_1C02525D8();
  else
    return 3221225659LL;
}
