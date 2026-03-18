/*
 * XREFs of ?DxgkEngUnlockVisRgnApiExt@@YAXPEAUHDEV__@@@Z @ 0x1C014B9F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngUnlockVisRgnApiExt(HDEV a1)
{
  int v2; // eax

  if ( qword_1C024EF80 )
    v2 = qword_1C024EF80();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C024EF88 )
      qword_1C024EF88(a1);
  }
}
