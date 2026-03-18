/*
 * XREFs of IsGreSelectFontSupported @ 0x1C009AFF4
 * Callers:
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectFontSupported()
{
  if ( qword_1C024F9B0 )
    return qword_1C024F9B0();
  else
    return 3221225659LL;
}
