/*
 * XREFs of ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C01C8C64
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C006E23C (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162998 (RIMVirtAllocateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C01262E0 (EtwTracePointerDeviceArrivalStop.c)
 */

__int64 __fastcall ApiSetEtwTracePointerDeviceArrivalStop(PDEVICE_OBJECT a1)
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
        12,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  result = EtwTracePointerDeviceArrivalStop((__int64)a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               5,
               10,
               13,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}
