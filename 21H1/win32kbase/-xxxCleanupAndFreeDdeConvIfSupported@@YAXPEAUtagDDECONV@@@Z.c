/*
 * XREFs of ?xxxCleanupAndFreeDdeConvIfSupported@@YAXPEAUtagDDECONV@@@Z @ 0x1C0121C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall xxxCleanupAndFreeDdeConvIfSupported(struct tagDDECONV *a1)
{
  int v2; // eax

  if ( qword_1C0258648 )
    v2 = qword_1C0258648();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0258650 )
      qword_1C0258650(a1);
  }
}
