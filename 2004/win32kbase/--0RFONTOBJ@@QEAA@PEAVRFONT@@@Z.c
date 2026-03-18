/*
 * XREFs of ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007FEE8
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007FCBC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0089A90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

RFONTOBJ *__fastcall RFONTOBJ::RFONTOBJ(RFONTOBJ *this, struct RFONT *a2)
{
  int v4; // eax

  *(_QWORD *)this = 0LL;
  if ( qword_1C0251740 )
    v4 = qword_1C0251740();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0251748 )
    qword_1C0251748(this, a2);
  return this;
}
