/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00C5304
 * Callers:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023C58 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00C5250 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  int v2; // eax

  if ( qword_1C0251770 )
    v2 = qword_1C0251770();
  else
    v2 = -1073741637;
  if ( v2 >= 0 && qword_1C0251778 )
    qword_1C0251778(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
