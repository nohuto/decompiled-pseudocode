/*
 * XREFs of ?W32kCddDisableGdiHwAccelerationApiExt@@YAHXZ @ 0x1C004D430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 W32kCddDisableGdiHwAccelerationApiExt(void)
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( qword_1C0251100 )
    v1 = qword_1C0251100();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0251108 )
    return (unsigned int)qword_1C0251108();
  return v0;
}
