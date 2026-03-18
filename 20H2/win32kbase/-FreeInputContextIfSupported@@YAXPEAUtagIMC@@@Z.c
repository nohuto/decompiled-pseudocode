/*
 * XREFs of ?FreeInputContextIfSupported@@YAXPEAUtagIMC@@@Z @ 0x1C009B400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeInputContextIfSupported(struct tagIMC *a1)
{
  int v2; // eax

  if ( qword_1C02506B8 )
    v2 = qword_1C02506B8();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C02506C0 )
      qword_1C02506C0(a1);
  }
}
