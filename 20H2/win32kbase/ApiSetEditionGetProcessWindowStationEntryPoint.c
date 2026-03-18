/*
 * XREFs of ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C00A1C68
 * Callers:
 *     NtUserGetProcessWindowStation @ 0x1C00A1C40 (NtUserGetProcessWindowStation.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C00A1D00 (IsEditionGetProcessWindowStationEntryPointSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionGetProcessWindowStationEntryPoint(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      466,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  result = (__int64 (__fastcall *)(_QWORD))IsEditionGetProcessWindowStationEntryPointSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C024FE00;
    if ( qword_1C024FE00 )
      result = (__int64 (__fastcall *)(_QWORD))qword_1C024FE00(a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (__int64 (__fastcall *)(_QWORD))WPP_RECORDER_SF_(
                                               WPP_GLOBAL_Control->DeviceExtension,
                                               5,
                                               10,
                                               467,
                                               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}
