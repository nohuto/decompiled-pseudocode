/*
 * XREFs of ApiSetEtwTracePointerDeviceReadStart @ 0x1C01C8CF8
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     EtwTracePointerDeviceReadStart @ 0x1C0126470 (EtwTracePointerDeviceReadStart.c)
 */

__int64 __fastcall ApiSetEtwTracePointerDeviceReadStart(PDEVICE_OBJECT a1)
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        10,
        14,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  result = EtwTracePointerDeviceReadStart((__int64)a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               15,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}
