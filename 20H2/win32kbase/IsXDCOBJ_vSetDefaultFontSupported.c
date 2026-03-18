/*
 * XREFs of IsXDCOBJ_vSetDefaultFontSupported @ 0x1C00913C0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsXDCOBJ_vSetDefaultFontSupported()
{
  if ( qword_1C024F5A0 )
    return qword_1C024F5A0();
  else
    return 3221225659LL;
}
