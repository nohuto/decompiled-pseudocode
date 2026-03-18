/*
 * XREFs of ?FreePointerDeviceIfSupported@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0121A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreePointerDeviceIfSupported(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  int v2; // eax

  if ( qword_1C0258698 )
    v2 = qword_1C0258698();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C02586A0 )
      qword_1C02586A0(a1);
  }
}
