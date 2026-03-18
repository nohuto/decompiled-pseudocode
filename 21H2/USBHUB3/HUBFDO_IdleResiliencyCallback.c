/*
 * XREFs of HUBFDO_IdleResiliencyCallback @ 0x1C000EB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_IdleResiliencyCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v5; // eax

  if ( Context )
  {
    v5 = *Value;
    if ( *((_DWORD *)Context + 662) != *Value )
    {
      *((_DWORD *)Context + 662) = v5;
      if ( v5 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 315),
            4u,
            3u,
            0x53u,
            (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, POWER_SETTING_CALLBACK *, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          HUBFDO_IdleResiliencyCallback,
          6356LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      }
      else if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 315),
            4u,
            3u,
            0x54u,
            (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          0LL,
          HUBFDO_IdleResiliencyCallback,
          6362,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      }
    }
  }
  return 0LL;
}
