/*
 * XREFs of IsGreHintDCWndSupported @ 0x1C0091DCC
 * Callers:
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreHintDCWndSupported()
{
  if ( qword_1C0257980 )
    return qword_1C0257980();
  else
    return 3221225659LL;
}
