/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x1C00549C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  int v2; // eax

  if ( qword_1C0252678 )
    v2 = qword_1C0252678();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0252680 )
      qword_1C0252680(a1);
  }
}
