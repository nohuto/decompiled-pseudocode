/*
 * XREFs of ApiSetEnsurePointerDeviceHasMonitor @ 0x1C01CADCC
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0179AAC (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEnsurePointerDeviceHasMonitor(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      50,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 0;
  if ( qword_1C0252E08 )
    v3 = qword_1C0252E08();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0252E10 )
    v2 = qword_1C0252E10(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      51,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}
