/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C001B40C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C001AC00 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  int v2; // eax

  if ( qword_1C024F200 )
    v2 = qword_1C024F200();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C024F208 )
      qword_1C024F208(this);
  }
}
