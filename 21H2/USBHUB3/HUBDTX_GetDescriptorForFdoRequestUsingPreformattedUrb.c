/*
 * XREFs of HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C002AF14
 * Callers:
 *     HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated @ 0x1C001D530 (HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000DB7C (HUBFDO_CompleteGetDescriptorRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64 *), __int64 *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    a1[62],
    HUBDTX_GetDeviceDescriptorComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             a1[62],
             *(_QWORD *)(*a1 + 32),
             0LL);
  if ( !(_BYTE)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x6Au,
        (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids);
    HUBSM_AddEvent((__int64)(a1 + 63), 4004);
    HUBFDO_CompleteGetDescriptorRequest(*a1, *(unsigned __int16 *)(a1[1] + 200), a1[62], -1073741823, 0);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
             WdfDriverGlobals,
             v3,
             "User Mode FDO Request",
             6167LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\devicexfer.c");
  }
  return result;
}
