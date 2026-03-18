/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C011AC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  int v2; // eax

  if ( qword_1C0252698 )
    v2 = qword_1C0252698();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C02526A0 )
      qword_1C02526A0(a1);
  }
}
