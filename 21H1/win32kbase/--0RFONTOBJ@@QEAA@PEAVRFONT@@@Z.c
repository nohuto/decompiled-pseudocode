/*
 * XREFs of ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C008BB38
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C008B9DC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

RFONTOBJ *__fastcall RFONTOBJ::RFONTOBJ(RFONTOBJ *this, struct RFONT *a2)
{
  int v4; // eax

  *(_QWORD *)this = 0LL;
  if ( qword_1C0257700 )
    v4 = qword_1C0257700();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0257708 )
    qword_1C0257708(this, a2);
  return this;
}
