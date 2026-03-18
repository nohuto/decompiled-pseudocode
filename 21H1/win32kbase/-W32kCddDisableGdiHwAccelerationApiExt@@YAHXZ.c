/*
 * XREFs of ?W32kCddDisableGdiHwAccelerationApiExt@@YAHXZ @ 0x1C00408C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kCddDisableGdiHwAccelerationApiExt(void)
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( qword_1C02570C0 )
    v1 = qword_1C02570C0();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C02570C8 )
    return (unsigned int)qword_1C02570C8();
  return v0;
}
