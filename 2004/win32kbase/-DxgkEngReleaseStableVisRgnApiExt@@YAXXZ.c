/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXXZ @ 0x1C014DDD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void DxgkEngReleaseStableVisRgnApiExt(void)
{
  int v0; // eax

  if ( qword_1C0251060 )
    v0 = qword_1C0251060();
  else
    v0 = -1073741637;
  if ( v0 >= 0 )
  {
    if ( qword_1C0251068 )
      qword_1C0251068();
  }
}
