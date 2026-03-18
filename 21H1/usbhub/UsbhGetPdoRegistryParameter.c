/*
 * XREFs of UsbhGetPdoRegistryParameter @ 0x1C0044BA0
 * Callers:
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003246C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0045F90 (UsbhReadPdoRegistryKeys.c)
 *     UsbhRegPnpStart @ 0x1C0046470 (UsbhRegPnpStart.c)
 *     UsbhUpdateRegHubHardResetCount @ 0x1C0046BC0 (UsbhUpdateRegHubHardResetCount.c)
 * Callees:
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 */

__int64 __fastcall UsbhGetPdoRegistryParameter(
        struct _DEVICE_OBJECT *a1,
        const WCHAR *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        ULONG ResultLength)
{
  bool v8; // cf
  NTSTATUS v11; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  unsigned int v14; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  v8 = (_BYTE)ResultLength != 0;
  LOBYTE(ResultLength) = -(char)ResultLength;
  KeyHandle = 0LL;
  v11 = IoOpenDeviceRegistryKey(a1, 2 - v8, 0x1F0000u, &KeyHandle);
  if ( v11 >= 0 )
  {
    ResultLength = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 12, 0x42554855u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, a4 + 12);
      v11 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v13, a4 + 12, &ResultLength);
      if ( v11 == -2147483643 )
        v11 = 0;
      if ( v11 >= 0 )
      {
        v14 = v13[2];
        if ( a4 < v14 )
          v14 = a4;
        memmove(a3, v13 + 3, v14);
        if ( a5 )
          *a5 = v13[1];
        if ( a6 )
          *a6 = v13[2];
      }
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      v11 = -1073741670;
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v11;
}
