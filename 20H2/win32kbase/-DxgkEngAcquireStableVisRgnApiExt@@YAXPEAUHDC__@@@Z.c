/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAXPEAUHDC__@@@Z @ 0x1C014B2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1)
{
  int v2; // eax

  if ( qword_1C024F050 )
    v2 = qword_1C024F050();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C024F058 )
      qword_1C024F058(a1);
  }
}
