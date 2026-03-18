/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C0119050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  int v2; // eax

  if ( qword_1C024FAC0 )
    v2 = qword_1C024FAC0();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C024FAC8 )
      qword_1C024FAC8(a1);
  }
}
