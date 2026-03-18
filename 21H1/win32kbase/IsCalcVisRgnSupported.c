/*
 * XREFs of IsCalcVisRgnSupported @ 0x1C002CFB0
 * Callers:
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCalcVisRgnSupported()
{
  if ( qword_1C0258558 )
    return qword_1C0258558();
  else
    return 3221225659LL;
}
