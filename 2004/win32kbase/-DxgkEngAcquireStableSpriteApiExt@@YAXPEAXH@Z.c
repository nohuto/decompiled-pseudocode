/*
 * XREFs of ?DxgkEngAcquireStableSpriteApiExt@@YAXPEAXH@Z @ 0x1C014D6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableSpriteApiExt(void *a1, unsigned int a2)
{
  int v4; // eax

  if ( qword_1C0251090 )
    v4 = qword_1C0251090();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C0251098 )
      qword_1C0251098(a1, a2);
  }
}
