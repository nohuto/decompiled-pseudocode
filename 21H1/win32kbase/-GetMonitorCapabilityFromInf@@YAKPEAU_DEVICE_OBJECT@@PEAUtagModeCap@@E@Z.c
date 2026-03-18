/*
 * XREFs of ?GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C002CB38
 * Callers:
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C002C990 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 * Callees:
 *     ?InsertModecapList@@YAKPEAUtagModeCap@@0K@Z @ 0x1C002C384 (-InsertModecapList@@YAKPEAUtagModeCap@@0K@Z.c)
 *     ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C002CE60 (-ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00CC1C0 (__report_rangecheckfailure.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall GetMonitorCapabilityFromInf(struct _DEVICE_OBJECT *a1, struct tagModeCap *a2, char a3)
{
  unsigned int inserted; // esi
  ULONG v6; // edx
  ULONG v7; // r14d
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  int v10; // edi
  unsigned int v11; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v16; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  void *DeviceRegKey; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-88h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _DWORD KeyInformation[64]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SourceString[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  wchar_t Dst[128]; // [rsp+1C0h] [rbp+C0h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( IoOpenDeviceRegistryKey(a1, 2u, 0x20019u, &DeviceRegKey) < 0 )
    return 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  inserted = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"MODES");
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(KeyInformation, 0, sizeof(KeyInformation));
    ResultLength = 0;
    v20 = 0LL;
    v19 = 0LL;
    v6 = 0;
    v7 = 0;
    while ( ZwEnumerateKey(KeyHandle, v6, KeyBasicInformation, KeyInformation, 0x100u, &ResultLength) >= 0 )
    {
      ++v7;
      DestinationString.Buffer = (PWSTR)&KeyInformation[4];
      v16 = v7;
      DestinationString.Length = KeyInformation[3];
      DestinationString.MaximumLength = KeyInformation[3];
      v8 = LOWORD(KeyInformation[3]);
      if ( LOWORD(KeyInformation[3]) >= 0x100u )
        v8 = 256LL;
      wcsncpy_s(Dst, 0x80uLL, (const wchar_t *)&KeyInformation[4], v8 >> 1);
      if ( DestinationString.Length < 0x100u )
      {
        v9 = DestinationString.Length & 0xFFFE;
        if ( v9 >= 0x100 )
          _report_rangecheckfailure();
        *(wchar_t *)((char *)Dst + v9) = 0;
      }
      Dst[127] = 0;
      if ( (unsigned int)ParseModeCap(Dst, (struct tagModeCap *)&v19, 0) )
      {
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 0x2000000u, &ObjectAttributes) >= 0 )
        {
          v10 = 0;
          v11 = 0;
          wcscpy(SourceString, L"Mode1");
          do
          {
            RtlInitUnicodeString(&DestinationString, SourceString);
            if ( ZwQueryValueKey(
                   Handle,
                   &DestinationString,
                   KeyValueFullInformation,
                   KeyInformation,
                   0x100u,
                   &ResultLength) >= 0 )
            {
              wcsncpy_s(Dst, 0x80uLL, (const wchar_t *)((char *)KeyInformation + KeyInformation[2]), 0x7FuLL);
              v20 = 0xFFFFFFFF00000000uLL;
              DWORD2(v19) = -1;
              HIDWORD(v19) = a3 == 0 ? 0x38 : 0;
              if ( (unsigned int)ParseModeCap(Dst, (struct tagModeCap *)&v19, 1) )
                inserted = InsertModecapList((struct tagModeCap *)&v19, a2, inserted);
              v10 = 1;
            }
            else if ( v10 )
            {
              break;
            }
            ++SourceString[4];
            ++v11;
          }
          while ( v11 < 9 );
          ZwClose(Handle);
          v7 = v16;
        }
      }
      v6 = v7;
    }
    ZwClose(KeyHandle);
  }
  ZwClose(DeviceRegKey);
  return inserted;
}
