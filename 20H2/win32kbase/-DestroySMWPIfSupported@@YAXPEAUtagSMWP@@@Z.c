/*
 * XREFs of ?DestroySMWPIfSupported@@YAXPEAUtagSMWP@@@Z @ 0x1C00A3260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroySMWPIfSupported(struct tagSMWP *a1)
{
  int v2; // eax

  if ( qword_1C0250668 )
    v2 = qword_1C0250668();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0250670 )
      qword_1C0250670(a1);
  }
}
