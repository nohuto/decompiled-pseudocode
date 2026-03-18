/*
 * XREFs of ?DxgkEngIsDwmProcessApiExt@@YAHXZ @ 0x1C0041980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkEngIsDwmProcessApiExt(void)
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( qword_1C02510B0 )
    v1 = qword_1C02510B0();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C02510B8 )
    return (unsigned int)qword_1C02510B8();
  return v0;
}
