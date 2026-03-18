/*
 * XREFs of IsCalcVisRgnSupported @ 0x1C009AFC8
 * Callers:
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCalcVisRgnSupported()
{
  if ( qword_1C0250598 )
    return qword_1C0250598();
  else
    return 3221225659LL;
}
