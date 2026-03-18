/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXXZ @ 0x1C014B980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void DxgkEngReleaseStableVisRgnApiExt(void)
{
  int v0; // eax

  if ( qword_1C024F060 )
    v0 = qword_1C024F060();
  else
    v0 = -1073741637;
  if ( v0 >= 0 )
  {
    if ( qword_1C024F068 )
      qword_1C024F068();
  }
}
