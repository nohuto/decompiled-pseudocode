/*
 * XREFs of ?DestroySMWPIfSupported@@YAXPEAUtagSMWP@@@Z @ 0x1C0040B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroySMWPIfSupported(struct tagSMWP *a1)
{
  int v2; // eax

  if ( qword_1C0252668 )
    v2 = qword_1C0252668();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0252670 )
      qword_1C0252670(a1);
  }
}
