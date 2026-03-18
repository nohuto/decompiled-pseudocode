/*
 * XREFs of XDCOBJ_vSetDefaultFontWrap @ 0x1C00916DC
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*XDCOBJ_vSetDefaultFontWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C024F5A8;
  if ( qword_1C024F5A8 )
    return (__int64 (*)(void))qword_1C024F5A8();
  return result;
}
