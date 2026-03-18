/*
 * XREFs of HUBFDO_PowerSettingCallback @ 0x1C000DCC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     SleepstudyHelper_ComponentActive @ 0x1C0042380 (SleepstudyHelper_ComponentActive.c)
 *     SleepstudyHelper_ComponentInactive @ 0x1C00423B8 (SleepstudyHelper_ComponentInactive.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_PowerSettingCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+28h] [rbp-70h]
  int v16; // [rsp+28h] [rbp-70h]
  _DWORD v17[7]; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+5Ch] [rbp-3Ch]
  int v19; // [rsp+60h] [rbp-38h]

  v4 = 0;
  if ( (*((_DWORD *)Context + 10) & 0x4000000) == 0 )
    return (unsigned int)-1073741811;
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( ValueLength >= 4 && (unsigned int)*Value <= 1 )
    {
      v9 = *((_DWORD *)Context + 10);
      if ( *Value == 1 )
      {
        if ( (v9 & 0x8000000) != 0 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            *((_QWORD *)Context + 2),
            0LL,
            5333LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
          _InterlockedAnd((volatile signed __int32 *)Context + 10, 0xF7FFFFFF);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)Context + 315),
              4u,
              3u,
              0x3Bu,
              (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids);
          if ( *((_QWORD *)Context + 329) )
            SleepstudyHelper_ComponentInactive();
        }
      }
      else if ( (v9 & 0x8000000) == 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 315),
            4u,
            3u,
            0x3Cu,
            (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids);
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *((_QWORD *)Context + 2),
               0LL,
               0LL,
               5350,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v4 < 0 )
        {
          v4 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v15) = 0;
            WPP_RECORDER_SF_d(
              *((_QWORD *)Context + 315),
              3u,
              3u,
              0x3Du,
              (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
              v15);
          }
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)Context + 10, 0x8000000u);
          if ( *((_QWORD *)Context + 329) )
            SleepstudyHelper_ComponentActive();
        }
      }
      return (unsigned int)v4;
    }
    return (unsigned int)-1073741811;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT, 0x10uLL) != 16 )
    return (unsigned int)-1073741811;
  v10 = *Value;
  if ( *Value != *((_DWORD *)Context + 644) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *Value;
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        4u,
        3u,
        0x3Eu,
        (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
        v16);
      v10 = *Value;
    }
    v18 = 0;
    v17[0] = 36;
    v17[6] = 2;
    v19 = 2;
    v17[1] = 2;
    v17[3] = v10;
    v17[4] = 2;
    v17[5] = 2;
    v17[2] = 3;
    if ( !*((_BYTE *)Context + 240) || (*((_DWORD *)Context + 11) & 0x20) != 0 )
      v18 = 2;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, Context);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
            WdfDriverGlobals,
            v11,
            v17);
    v4 = v12;
    if ( v12 >= 0 )
    {
      *((_DWORD *)Context + 644) = *Value;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = v12;
        WPP_RECORDER_SF_d(
          *((_QWORD *)Context + 315),
          3u,
          3u,
          0x3Fu,
          (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
          v14);
      }
      return 0;
    }
  }
  return (unsigned int)v4;
}
