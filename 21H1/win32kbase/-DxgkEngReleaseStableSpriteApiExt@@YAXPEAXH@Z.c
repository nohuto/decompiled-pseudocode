/*
 * XREFs of ?DxgkEngReleaseStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C01540C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngReleaseStableSpriteApiExt(void *a1, unsigned int a2)
{
  int v4; // eax

  if ( qword_1C0257060 )
    v4 = qword_1C0257060();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C0257068 )
      qword_1C0257068(a1, a2);
  }
}
