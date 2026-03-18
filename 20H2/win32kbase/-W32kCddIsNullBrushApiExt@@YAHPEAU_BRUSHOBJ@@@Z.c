/*
 * XREFs of ?W32kCddIsNullBrushApiExt@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C00971F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall W32kCddIsNullBrushApiExt(struct _BRUSHOBJ *a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C024F0F0 )
    v3 = qword_1C024F0F0();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C024F0F8 )
    return (unsigned int)qword_1C024F0F8(a1);
  return v1;
}
