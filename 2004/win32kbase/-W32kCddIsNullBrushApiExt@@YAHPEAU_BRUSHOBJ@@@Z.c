/*
 * XREFs of ?W32kCddIsNullBrushApiExt@@YAHPEAU_BRUSHOBJ@@@Z @ 0x1C0031930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall W32kCddIsNullBrushApiExt(struct _BRUSHOBJ *a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C02510F0 )
    v3 = qword_1C02510F0();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C02510F8 )
    return (unsigned int)qword_1C02510F8(a1);
  return v1;
}
