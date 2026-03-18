/*
 * XREFs of ApiSetIsRemoteConnection @ 0x1C00AAADC
 * Callers:
 *     RIMOpenDev @ 0x1C0016A94 (RIMOpenDev.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00AA310 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00AA480 (RIMDirectStartStopDeviceRead.c)
 *     RIMDeviceClassNotify @ 0x1C00AAD80 (RIMDeviceClassNotify.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00AEFCC (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetIsRemoteConnection(PDEVICE_OBJECT a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        10,
        94,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  v2 = 0;
  if ( qword_1C0252F48 )
    v3 = qword_1C0252F48();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0252F50 )
    v2 = qword_1C0252F50(a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      95,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v2;
}
