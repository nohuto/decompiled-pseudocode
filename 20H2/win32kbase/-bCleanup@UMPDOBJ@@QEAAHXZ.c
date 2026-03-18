/*
 * XREFs of ?bCleanup@UMPDOBJ@@QEAAHXZ @ 0x1C005594C
 * Callers:
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0055870 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UMPDOBJ::bCleanup(UMPDOBJ *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C024F8F0 )
    v3 = qword_1C024F8F0();
  else
    v3 = -1073741637;
  if ( v3 < 0 )
    return 0LL;
  if ( qword_1C024F8F8 )
    return (unsigned int)qword_1C024F8F8(this);
  return v1;
}
