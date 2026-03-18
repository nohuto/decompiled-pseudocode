/*
 * XREFs of HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000E4E4
 * Callers:
 *     HUBPDO_BillboardCleanup @ 0x1C0078BC4 (HUBPDO_BillboardCleanup.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBFDO_CleanupDeviceInterfaceForBillboard(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  ULONG v5; // ebp
  NTSTATUS v8; // ebx
  unsigned __int16 v9; // r9
  char v11; // [rsp+20h] [rbp-B8h]
  __int64 v12; // [rsp+28h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-98h] BYREF
  __int128 v14; // [rsp+50h] [rbp-88h] BYREF
  WCHAR SourceString[32]; // [rsp+60h] [rbp-78h] BYREF

  v5 = a2;
  DestinationString = 0LL;
  v14 = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  if ( !a4 )
  {
    v8 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x46u, (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids);
    goto LABEL_12;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  v8 = RtlIntegerToUnicodeString(v5, 0xAu, &DestinationString);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v9 = 71;
    goto LABEL_11;
  }
  v11 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, struct _UNICODE_STRING *, char))(WdfFunctions_01015 + 624))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16),
    &GUID_DEVINTERFACE_USB_BILLBOARD,
    &DestinationString,
    v11);
  if ( !a3 )
    return (unsigned int)v8;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
    WdfDriverGlobals,
    a3,
    &v14);
  v8 = IoSetDeviceInterfacePropertyData(&v14, &DEVPKEY_Device_UsbBillboardInfo, 0LL, 0LL, 4099, 0, 0LL);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 72;
LABEL_11:
    LODWORD(v12) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v9,
      (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids,
      v12);
  }
LABEL_12:
  if ( a3 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a3);
  return (unsigned int)v8;
}
