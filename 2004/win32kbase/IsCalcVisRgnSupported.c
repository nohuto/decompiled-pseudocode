/*
 * XREFs of IsCalcVisRgnSupported @ 0x1C003B7D0
 * Callers:
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCalcVisRgnSupported()
{
  if ( qword_1C0252598 )
    return qword_1C0252598();
  else
    return 3221225659LL;
}
