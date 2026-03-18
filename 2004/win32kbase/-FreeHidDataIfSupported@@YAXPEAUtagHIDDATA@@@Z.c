/*
 * XREFs of ?FreeHidDataIfSupported@@YAXPEAUtagHIDDATA@@@Z @ 0x1C011AD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHidDataIfSupported(struct tagHIDDATA *a1)
{
  int v2; // eax

  if ( qword_1C02526C8 )
    v2 = qword_1C02526C8();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C02526D0 )
      qword_1C02526D0(a1);
  }
}
