/*
 * XREFs of IsClassDriverOnly @ 0x1C002255C
 * Callers:
 *     IsSidebandSupported @ 0x1C0022748 (IsSidebandSupported.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00121B0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00121F0 (__report_rangecheckfailure.c)
 */

__int64 __fastcall IsClassDriverOnly(__int64 a1)
{
  unsigned int v1; // ebx
  struct _DEVICE_OBJECT *v3; // rcx
  __int64 v4; // rdx
  unsigned __int16 v5; // r9
  unsigned __int64 v6; // rax
  ULONG Type; // [rsp+48h] [rbp-19h] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-15h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-1h] BYREF
  WCHAR SourceString[16]; // [rsp+70h] [rbp+Fh] BYREF
  WCHAR Data[16]; // [rsp+90h] [rbp+2Fh] BYREF

  v1 = 0;
  RequiredSize = 0;
  Type = 0;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  DestinationString = 0LL;
  String2 = 0LL;
  wcscpy(SourceString, L"wdma_usb.inf");
  if ( IoGetDevicePropertyData(v3, &DEVPKEY_Device_DriverExtendedInfs, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 12;
LABEL_4:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v4,
        9u,
        v5,
        (__int64)&WPP_65ff8281dfdf3691e0ea7cf1d87927b7_Traceguids);
    }
  }
  else
  {
    if ( IoGetDevicePropertyData(
           *(PDEVICE_OBJECT *)(a1 + 32),
           &DEVPKEY_Device_DriverInfPath,
           0,
           0,
           0x1Au,
           Data,
           &RequiredSize,
           &Type) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v1;
      v5 = 13;
      goto LABEL_4;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = (unsigned __int64)DestinationString.Length >> 1;
    if ( v6 >= 13 )
      _report_rangecheckfailure();
    Data[v6] = 0;
    RtlInitUnicodeString(&String2, Data);
    if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      return 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 14;
      goto LABEL_4;
    }
  }
  return v1;
}
