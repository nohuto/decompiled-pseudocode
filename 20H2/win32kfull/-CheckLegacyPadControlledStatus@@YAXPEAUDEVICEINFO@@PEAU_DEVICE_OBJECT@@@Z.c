/*
 * XREFs of ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C02205A0
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C0117D00 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     ?GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0118458 (-GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall CheckLegacyPadControlledStatus(
        struct DEVICEINFO *a1,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  char v5; // al
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  char v11; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&ValueName.Length = 13107200LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ResultLength = 0;
  ValueName.Buffer = (PWSTR)&v11;
  if ( (int)GetMouseDeviceHardwareId(a1, a2, &ValueName, a4) >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyControlled");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
      {
        if ( ResultLength )
        {
          v4 = Win32AllocPool(ResultLength, 2019914581LL);
          if ( v4 )
          {
            if ( ZwQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   (PVOID)v4,
                   ResultLength,
                   &ResultLength) >= 0
              && *(_DWORD *)(v4 + 4) == 4 )
            {
              v5 = *(_BYTE *)(v4 + 12);
              if ( (v5 & 1) != 0 )
                gTouchPadParameters[1] |= v5 & 7;
            }
            Win32FreePool(v4);
          }
        }
      }
      ZwClose(KeyHandle);
    }
  }
}
