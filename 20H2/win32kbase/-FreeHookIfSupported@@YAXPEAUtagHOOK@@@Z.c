/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x1C00B51E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  int v2; // eax

  if ( qword_1C0250678 )
    v2 = qword_1C0250678();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0250680 )
      qword_1C0250680(a1);
  }
}
