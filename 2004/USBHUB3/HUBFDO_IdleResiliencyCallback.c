/*
 * XREFs of HUBFDO_IdleResiliencyCallback @ 0x1C000E6F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_IdleResiliencyCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // eax

  v4 = *Value;
  if ( *((_DWORD *)Context + 662) != *Value )
  {
    *((_DWORD *)Context + 662) = v4;
    if ( v4 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)Context + 315),
          4u,
          3u,
          0x4Fu,
          (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, POWER_SETTING_CALLBACK *, __int64, const char *))(WdfFunctions_01015 + 3512))(
        WdfDriverGlobals,
        *((_QWORD *)Context + 2),
        HUBFDO_IdleResiliencyCallback,
        6190LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    }
    else if ( !v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)Context + 315),
          4u,
          3u,
          0x50u,
          (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
        WdfDriverGlobals,
        *((_QWORD *)Context + 2),
        0LL,
        HUBFDO_IdleResiliencyCallback,
        6196,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    }
  }
  return 0LL;
}
