/*
 * XREFs of RegistryGetIdleInfo @ 0x1C002AD5C
 * Callers:
 *     DeviceStart @ 0x1C0022540 (DeviceStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegistryGetIdleInfo(struct _DEVICE_OBJECT *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *PoolWithTag; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-29h] BYREF
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING v12; // [rsp+60h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+E0h] [rbp+77h] BYREF
  void *DeviceRegKey; // [rsp+E8h] [rbp+7Fh] BYREF

  *a3 = 0;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  *a2 = 30;
  *a4 = 4;
  if ( IoOpenDeviceRegistryKey(a1, 2u, 0x20019u, &DeviceRegKey) >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"PowerSettings");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength = 0;
      ValueName = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      RtlInitUnicodeString(&ValueName, L"ConservationIdleTime");
      RtlInitUnicodeString(&v11, L"PerformanceIdleTime");
      RtlInitUnicodeString(&v12, L"IdlePowerState");
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x41627845u);
      if ( PoolWithTag )
      {
        if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, 0x14u, &ResultLength) >= 0
          && PoolWithTag[2] == 4 )
        {
          *a2 = PoolWithTag[3];
        }
        if ( ZwQueryValueKey(KeyHandle, &v11, KeyValuePartialInformation, PoolWithTag, 0x14u, &ResultLength) >= 0
          && PoolWithTag[2] == 4 )
        {
          *a3 = PoolWithTag[3];
        }
        if ( ZwQueryValueKey(KeyHandle, &v12, KeyValuePartialInformation, PoolWithTag, 0x14u, &ResultLength) >= 0
          && PoolWithTag[2] == 4 )
        {
          switch ( PoolWithTag[3] )
          {
            case 1:
              *a4 = 2;
              break;
            case 2:
              *a4 = 3;
              break;
            case 3:
              *a4 = 4;
              break;
            default:
              *a4 = 1;
              break;
          }
        }
        ExFreePool(PoolWithTag);
      }
      ZwClose(KeyHandle);
    }
    ZwClose(DeviceRegKey);
  }
  return 0LL;
}
