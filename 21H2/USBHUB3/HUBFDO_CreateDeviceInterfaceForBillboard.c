/*
 * XREFs of HUBFDO_CreateDeviceInterfaceForBillboard @ 0x1C000E6E0
 * Callers:
 *     HUBPDO_PublishBillboardDetails @ 0x1C007A2C4 (HUBPDO_PublishBillboardDetails.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C00309D4 (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

__int64 __fastcall HUBFDO_CreateDeviceInterfaceForBillboard(
        __int64 a1,
        unsigned __int16 a2,
        _QWORD *a3,
        _BYTE *a4,
        int a5,
        __int64 a6)
{
  ULONG v7; // ebx
  NTSTATUS DeviceInterfacePath; // eax
  unsigned int v11; // ebx
  unsigned __int16 v12; // r9
  __int64 v14; // [rsp+28h] [rbp-71h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  __int128 v16; // [rsp+50h] [rbp-49h] BYREF
  WCHAR SourceString[32]; // [rsp+60h] [rbp-39h] BYREF

  v7 = a2;
  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  *a3 = 0LL;
  v16 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  DeviceInterfacePath = RtlIntegerToUnicodeString(v7, 0xAu, &DestinationString);
  v11 = DeviceInterfacePath;
  if ( DeviceInterfacePath >= 0 )
  {
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, struct _UNICODE_STRING *))(WdfFunctions_01015 + 616))(
                            WdfDriverGlobals,
                            *(_QWORD *)(a1 + 16),
                            &GUID_DEVINTERFACE_USB_BILLBOARD,
                            &DestinationString);
    v11 = DeviceInterfacePath;
    if ( DeviceInterfacePath >= 0 )
    {
      *a4 = 1;
      DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                              (unsigned int)&GUID_DEVINTERFACE_USB_BILLBOARD,
                              *(_QWORD *)(a1 + 16),
                              (_DWORD)a3,
                              (unsigned int)&DestinationString,
                              *(_QWORD *)(a1 + 2520));
      v11 = DeviceInterfacePath;
      if ( DeviceInterfacePath >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *))(WdfFunctions_01015 + 2472))(
          WdfDriverGlobals,
          *a3,
          &v16);
        DeviceInterfacePath = IoSetDeviceInterfacePropertyData(
                                &v16,
                                &DEVPKEY_Device_UsbBillboardInfo,
                                0LL,
                                0LL,
                                4099,
                                a5,
                                a6);
        v11 = DeviceInterfacePath;
        if ( DeviceInterfacePath < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = 73;
          goto LABEL_13;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 72;
        goto LABEL_13;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 71;
      goto LABEL_13;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 70;
LABEL_13:
    LODWORD(v14) = DeviceInterfacePath;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v12,
      (__int64)&WPP_cbf4a43b0f133f2c4fe58f6ee8af390c_Traceguids,
      v14);
  }
  return v11;
}
