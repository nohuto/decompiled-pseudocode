/*
 * XREFs of ?CheckLegacyPadControlledStatus@@YGXPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z @ 0xF4038
 * Callers:
 *     _IsLegacyTouchPadDevice@4 @ 0xE6B7C (_IsLegacyTouchPadDevice@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetMouseDeviceHardwareId@@YGJPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@PAU_UNICODE_STRING@@@Z @ 0xF419E (-GetMouseDeviceHardwareId@@YGJPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@PAU_UNICODE_STRING@@@Z.c)
 */

void __stdcall CheckLegacyPadControlledStatus()
{
  int v0; // esi
  char v1; // al
  struct _DEVICE_OBJECT *v2; // [esp+0h] [ebp-108h]
  struct _UNICODE_STRING *v3; // [esp+4h] [ebp-104h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-100h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+20h] [ebp-E8h] BYREF
  struct _UNICODE_STRING ValueName; // [esp+28h] [ebp-E0h] BYREF
  void *KeyHandle; // [esp+30h] [ebp-D8h] BYREF
  ULONG ResultLength; // [esp+34h] [ebp-D4h] BYREF
  char v9; // [esp+38h] [ebp-D0h] BYREF

  *(_DWORD *)&ValueName.Length = 13107200;
  ValueName.Buffer = (PWSTR)&v9;
  KeyHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  ResultLength = 0;
  if ( GetMouseDeviceHardwareId(&ValueName, v2, v3) >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyControlled");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0, 0, &ResultLength) != -1073741772 )
      {
        if ( ResultLength )
        {
          v0 = Win32AllocPool(ResultLength, 2019914581);
          if ( v0 )
          {
            if ( ZwQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   (PVOID)v0,
                   ResultLength,
                   &ResultLength) >= 0
              && *(_DWORD *)(v0 + 4) == 4 )
            {
              v1 = *(_BYTE *)(v0 + 12);
              if ( (v1 & 1) != 0 )
                _gTouchPadParameters[1] |= v1 & 7;
            }
            Win32FreePool(v0);
          }
        }
      }
      ZwClose(KeyHandle);
    }
  }
}
