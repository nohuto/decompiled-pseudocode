/*
 * XREFs of IsXDCOBJ_vSetDefaultFontSupported @ 0x1C00D2708
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0089A90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsXDCOBJ_vSetDefaultFontSupported(__int64 a1)
{
  if ( qword_1C02515A0 )
    return qword_1C02515A0(a1);
  else
    return 3221225659LL;
}
