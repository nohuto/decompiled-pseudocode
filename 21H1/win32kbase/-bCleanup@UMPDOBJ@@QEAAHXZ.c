/*
 * XREFs of ?bCleanup@UMPDOBJ@@QEAAHXZ @ 0x1C001932C
 * Callers:
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0019250 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UMPDOBJ::bCleanup(UMPDOBJ *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C02578B0 )
    v3 = qword_1C02578B0();
  else
    v3 = -1073741637;
  if ( v3 < 0 )
    return 0LL;
  if ( qword_1C02578B8 )
    return (unsigned int)qword_1C02578B8(this);
  return v1;
}
