/*
 * XREFs of IsGreSelectFontSupported @ 0x1C002CFDC
 * Callers:
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectFontSupported()
{
  if ( qword_1C0257970 )
    return qword_1C0257970();
  else
    return 3221225659LL;
}
