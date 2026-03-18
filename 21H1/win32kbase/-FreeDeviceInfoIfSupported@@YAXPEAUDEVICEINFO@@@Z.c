/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01219F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  int v2; // eax

  if ( qword_1C0257A80 )
    v2 = qword_1C0257A80();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0257A88 )
      qword_1C0257A88(a1);
  }
}
