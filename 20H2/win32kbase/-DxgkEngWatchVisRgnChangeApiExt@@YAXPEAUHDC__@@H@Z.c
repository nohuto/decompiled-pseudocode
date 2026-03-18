/*
 * XREFs of ?DxgkEngWatchVisRgnChangeApiExt@@YAXPEAUHDC__@@H@Z @ 0x1C014BA40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngWatchVisRgnChangeApiExt(HDC a1, unsigned int a2)
{
  int v4; // eax

  if ( qword_1C024F070 )
    v4 = qword_1C024F070();
  else
    v4 = -1073741637;
  if ( v4 >= 0 )
  {
    if ( qword_1C024F078 )
      qword_1C024F078(a1, a2);
  }
}
