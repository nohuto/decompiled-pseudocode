/*
 * XREFs of ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C003F538
 * Callers:
 *     NtUserGetProcessWindowStation @ 0x1C003F510 (NtUserGetProcessWindowStation.c)
 * Callees:
 *     IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C003F5D0 (IsEditionGetProcessWindowStationEntryPointSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
    result = qword_1C0251E00;
    if ( qword_1C0251E00 )
      result = (__int64 (__fastcall *)(_QWORD))qword_1C0251E00(a1);
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
