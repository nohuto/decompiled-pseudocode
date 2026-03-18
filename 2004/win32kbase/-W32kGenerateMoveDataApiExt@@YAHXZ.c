/*
 * XREFs of ?W32kGenerateMoveDataApiExt@@YAHXZ @ 0x1C014E080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kGenerateMoveDataApiExt(void)
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( qword_1C0251130 )
    v1 = qword_1C0251130();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0251138 )
    return (unsigned int)qword_1C0251138();
  return v0;
}
