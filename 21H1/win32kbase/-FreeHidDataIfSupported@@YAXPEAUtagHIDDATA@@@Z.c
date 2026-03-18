/*
 * XREFs of ?FreeHidDataIfSupported@@YAXPEAUtagHIDDATA@@@Z @ 0x1C0121A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHidDataIfSupported(struct tagHIDDATA *a1)
{
  int v2; // eax

  if ( qword_1C0258688 )
    v2 = qword_1C0258688();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0258690 )
      qword_1C0258690(a1);
  }
}
