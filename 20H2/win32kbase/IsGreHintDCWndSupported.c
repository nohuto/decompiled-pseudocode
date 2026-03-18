/*
 * XREFs of IsGreHintDCWndSupported @ 0x1C004FBA4
 * Callers:
 *     GetMonitorDC @ 0x1C004D710 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreHintDCWndSupported()
{
  if ( qword_1C024F9C0 )
    return qword_1C024F9C0();
  else
    return 3221225659LL;
}
