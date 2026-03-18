/*
 * XREFs of ?W32kGenerateMoveDataApiExt@@YAHXZ @ 0x1C014BC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kGenerateMoveDataApiExt(void)
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( qword_1C024F130 )
    v1 = qword_1C024F130();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C024F138 )
    return (unsigned int)qword_1C024F138();
  return v0;
}
