/*
 * XREFs of ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C01D066C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 * Callees:
 *     IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C004883C (IsEditionSetProcessWindowStationAtProcessInitSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionSetProcessWindowStationAtProcessInit(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  int v5; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      460,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v4 = 0;
  if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported() >= 0 )
  {
    if ( qword_1C0257D80 )
      v4 = qword_1C0257D80(a1, v2);
    else
      v4 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      461,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v4;
}
