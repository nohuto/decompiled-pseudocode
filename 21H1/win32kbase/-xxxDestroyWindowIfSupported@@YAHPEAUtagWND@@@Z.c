/*
 * XREFs of ?xxxDestroyWindowIfSupported@@YAHPEAUtagWND@@@Z @ 0x1C00397C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDestroyWindowIfSupported(struct tagWND *a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C02585F8 )
    v3 = qword_1C02585F8();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0258600 )
    return (unsigned int)qword_1C0258600(a1);
  return v1;
}
