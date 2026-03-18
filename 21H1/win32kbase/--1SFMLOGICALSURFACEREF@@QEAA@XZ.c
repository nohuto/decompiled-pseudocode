/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C009BC8C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C009B480 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  int v2; // eax

  if ( qword_1C02571C0 )
    v2 = qword_1C02571C0();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C02571C8 )
      qword_1C02571C8(this);
  }
}
