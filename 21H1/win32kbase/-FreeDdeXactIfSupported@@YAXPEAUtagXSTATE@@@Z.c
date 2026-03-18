/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C01219A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  int v2; // eax

  if ( qword_1C0258658 )
    v2 = qword_1C0258658();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0258660 )
      qword_1C0258660(a1);
  }
}
