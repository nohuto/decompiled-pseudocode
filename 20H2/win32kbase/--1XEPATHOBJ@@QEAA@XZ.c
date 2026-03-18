/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00C3E44
 * Callers:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0087248 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00C3D90 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003E4B0 (PopThreadGuardedObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  int v2; // eax

  if ( qword_1C024F770 )
    v2 = qword_1C024F770();
  else
    v2 = -1073741637;
  if ( v2 >= 0 && qword_1C024F778 )
    qword_1C024F778(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
