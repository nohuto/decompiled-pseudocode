/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x1C014B5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  int v4; // eax

  if ( qword_1C024F020 )
    v4 = qword_1C024F020();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C024F028 )
      qword_1C024F028(a1, a2);
  }
}
