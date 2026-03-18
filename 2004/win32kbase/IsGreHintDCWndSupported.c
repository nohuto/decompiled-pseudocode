/*
 * XREFs of IsGreHintDCWndSupported @ 0x1C003FF04
 * Callers:
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreHintDCWndSupported()
{
  if ( qword_1C02519C0 )
    return qword_1C02519C0();
  else
    return 3221225659LL;
}
