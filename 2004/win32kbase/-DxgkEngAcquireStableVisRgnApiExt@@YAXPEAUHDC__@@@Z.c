/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAXPEAUHDC__@@@Z @ 0x1C014D710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  int v2; // eax

  if ( qword_1C0251050 )
    v2 = qword_1C0251050();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0251058 )
      qword_1C0251058(a1);
  }
}
