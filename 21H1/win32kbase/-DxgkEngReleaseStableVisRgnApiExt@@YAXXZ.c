/*
 * XREFs of ?DxgkEngReleaseStableVisRgnApiExt@@YAXXZ @ 0x1C0154120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void DxgkEngReleaseStableVisRgnApiExt(void)
{
  int v0; // eax

  if ( qword_1C0257020 )
    v0 = qword_1C0257020();
  else
    v0 = -1073741637;
  if ( v0 >= 0 )
  {
    if ( qword_1C0257028 )
      qword_1C0257028();
  }
}
