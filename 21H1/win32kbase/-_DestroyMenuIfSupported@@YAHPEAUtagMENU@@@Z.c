/*
 * XREFs of ?_DestroyMenuIfSupported@@YAHPEAUtagMENU@@@Z @ 0x1C00C7DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _DestroyMenuIfSupported(struct tagMENU *a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C0258608 )
    v3 = qword_1C0258608();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0258610 )
    return (unsigned int)qword_1C0258610(a1);
  return v1;
}
