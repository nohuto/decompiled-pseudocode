/*
 * XREFs of ApiSetPostPointerDeviceInRangeMessage @ 0x1C01D2508
 * Callers:
 *     RIMAddToActiveDevices @ 0x1C0164658 (RIMAddToActiveDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x1C012E6F0 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x1C012E720 (EtwTracePointerDeviceInRangeMessageStop.c)
 */

_UNKNOWN **__fastcall ApiSetPostPointerDeviceInRangeMessage(PDEVICE_OBJECT a1)
{
  _UNKNOWN **result; // rax
  PDEVICE_OBJECT v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_(
                              WPP_GLOBAL_Control->DeviceExtension,
                              5,
                              10,
                              62,
                              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( LODWORD(v2->AttachedDevice) != 7 )
  {
    EtwTracePointerDeviceInRangeMessageStart((__int64)a1);
    if ( qword_1C0258E08 )
      v4 = qword_1C0258E08();
    else
      v4 = -1073741637;
    if ( v4 >= 0 && qword_1C0258E10 )
      qword_1C0258E10(v2, 0LL, 0LL);
    result = (_UNKNOWN **)EtwTracePointerDeviceInRangeMessageStop(v3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            WPP_GLOBAL_Control->DeviceExtension,
                            5,
                            10,
                            63,
                            (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}
