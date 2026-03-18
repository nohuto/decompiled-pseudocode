/*
 * XREFs of ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C01D25F4
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C0167FE0 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C012E750 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C012E780 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 */

_UNKNOWN **__fastcall ApiSetPostPointerDeviceOutOfRangeMessage(PDEVICE_OBJECT a1)
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
                              72,
                              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( LODWORD(v2->AttachedDevice) != 7 )
  {
    EtwTracePointerDeviceOutOfRangeMessageStart((__int64)a1);
    if ( qword_1C0258E58 )
      v4 = qword_1C0258E58();
    else
      v4 = -1073741637;
    if ( v4 >= 0 && qword_1C0258E60 )
      qword_1C0258E60(v2, 0LL, 0LL);
    result = (_UNKNOWN **)EtwTracePointerDeviceOutOfRangeMessageStop(v3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            WPP_GLOBAL_Control->DeviceExtension,
                            5,
                            10,
                            73,
                            (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}
