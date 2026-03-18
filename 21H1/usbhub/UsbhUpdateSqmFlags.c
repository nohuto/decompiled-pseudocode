/*
 * XREFs of UsbhUpdateSqmFlags @ 0x1C0073540
 * Callers:
 *     UsbhPdoPnp_DeviceUsageNotification @ 0x1C00558E0 (UsbhPdoPnp_DeviceUsageNotification.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0057020 (UsbhPdoPnp_StartDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C005B7C4 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 */

void __fastcall UsbhUpdateSqmFlags(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rax
  _OWORD *v3; // rdi
  _DWORD *v4; // rsi
  _OWORD *PoolWithTag; // rax
  NTSTATUS v6; // eax
  unsigned int v7; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  void *DeviceRegKey; // [rsp+B8h] [rbp+38h] BYREF

  ResultLength = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  v2 = PdoExt((__int64)DeviceObject);
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v3 = 0LL;
  v4 = v2;
  if ( IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x1F0000u, &DeviceRegKey) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Ceip");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"DeviceInformation");
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42554855u);
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        v6 = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               PoolWithTag,
               0x10u,
               &ResultLength);
        if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741772 )
        {
          v7 = (*((_DWORD *)v3 + 3) | v4[701]) & 0xFFFFFFF7;
          *((_DWORD *)v3 + 3) = v7;
          v4[701] = v7;
          RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"DeviceInformation", 4u, (char *)v3 + 12, 4u);
        }
      }
    }
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
