/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C0119000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  int v2; // eax

  if ( qword_1C0250698 )
    v2 = qword_1C0250698();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C02506A0 )
      qword_1C02506A0(a1);
  }
}
