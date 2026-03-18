/*
 * XREFs of ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C004C0A8
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004BE7C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

RFONTOBJ *__fastcall RFONTOBJ::RFONTOBJ(RFONTOBJ *this, struct RFONT *a2)
{
  int v4; // eax

  *(_QWORD *)this = 0LL;
  if ( qword_1C024F740 )
    v4 = qword_1C024F740();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C024F748 )
    qword_1C024F748(this, a2);
  return this;
}
