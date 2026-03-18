/*
 * XREFs of ApiSetEditionDestroyEdgePalmRejectionZones @ 0x1C01CD418
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C019B7A0 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionDestroyEdgePalmRejectionZones(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      298,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 0;
  if ( qword_1C0259748 )
    v3 = qword_1C0259748();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0259750 )
    v2 = qword_1C0259750(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      299,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}
