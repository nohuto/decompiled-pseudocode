/*
 * XREFs of ApiSetEditionBaseDriverUnloadUninitialize @ 0x1C000D01C
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C000BB40 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionBaseDriverUnloadUninitialize()
{
  unsigned int v0; // ebx
  int v1; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      498,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v0 = 0;
  if ( qword_1C0257AD0 )
    v1 = qword_1C0257AD0();
  else
    v1 = -1073741637;
  if ( v1 >= 0 )
  {
    if ( qword_1C0257AD8 )
      v0 = qword_1C0257AD8();
    else
      v0 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      499,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
