/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x1C00471C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  int v2; // eax

  if ( qword_1C0258638 )
    v2 = qword_1C0258638();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0258640 )
      qword_1C0258640(a1);
  }
}
