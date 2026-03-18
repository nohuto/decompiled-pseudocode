/*
 * XREFs of ?FreeInputContextIfSupported@@YAXPEAUtagIMC@@@Z @ 0x1C003BE00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeInputContextIfSupported(struct tagIMC *a1)
{
  int v2; // eax

  if ( qword_1C02526B8 )
    v2 = qword_1C02526B8();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C02526C0 )
      qword_1C02526C0(a1);
  }
}
