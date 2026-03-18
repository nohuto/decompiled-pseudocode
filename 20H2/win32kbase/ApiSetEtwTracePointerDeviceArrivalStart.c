/*
 * XREFs of ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C01C8BD4
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C006E23C (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162998 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x1C01262B0 (EtwTracePointerDeviceArrivalStart.c)
 */

__int64 __fastcall ApiSetEtwTracePointerDeviceArrivalStart(PDEVICE_OBJECT a1)
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
        10,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  result = EtwTracePointerDeviceArrivalStart((__int64)a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               11,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}
