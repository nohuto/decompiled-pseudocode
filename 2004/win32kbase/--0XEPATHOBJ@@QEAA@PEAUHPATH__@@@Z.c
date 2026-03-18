/*
 * XREFs of ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00C5360
 * Callers:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023C58 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00C5250 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, struct HPATH__ *a2)
{
  int v4; // eax

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( qword_1C0251760 )
    v4 = qword_1C0251760();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0251768 )
    qword_1C0251768(this, a2);
  return this;
}
