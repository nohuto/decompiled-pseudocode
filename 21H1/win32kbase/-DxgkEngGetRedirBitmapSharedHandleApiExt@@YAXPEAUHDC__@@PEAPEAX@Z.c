/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x1C0153D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  int v4; // eax

  if ( qword_1C0256FE0 )
    v4 = qword_1C0256FE0();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C0256FE8 )
      qword_1C0256FE8(a1, a2);
  }
}
