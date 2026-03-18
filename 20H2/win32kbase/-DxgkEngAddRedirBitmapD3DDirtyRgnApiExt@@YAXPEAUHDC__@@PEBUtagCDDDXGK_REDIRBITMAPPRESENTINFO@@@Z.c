/*
 * XREFs of ?DxgkEngAddRedirBitmapD3DDirtyRgnApiExt@@YAXPEAUHDC__@@PEBUtagCDDDXGK_REDIRBITMAPPRESENTINFO@@@Z @ 0x1C014B310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgnApiExt(HDC a1, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  int v4; // eax

  if ( qword_1C024F030 )
    v4 = qword_1C024F030();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C024F038 )
      qword_1C024F038(a1, a2);
  }
}
