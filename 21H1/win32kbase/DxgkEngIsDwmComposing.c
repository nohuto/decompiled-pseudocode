/*
 * XREFs of DxgkEngIsDwmComposing @ 0x1C004E550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( a1 )
    *a1 = 0;
  if ( qword_1C0256F10 )
    v2 = qword_1C0256F10();
  else
    v2 = -1073741637;
  if ( v2 < 0 )
    return 0LL;
  if ( qword_1C0256F18 )
    return (unsigned int)qword_1C0256F18();
  return v1;
}
