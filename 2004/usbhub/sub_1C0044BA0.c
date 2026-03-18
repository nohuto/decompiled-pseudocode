/*
 * XREFs of sub_1C0044BA0 @ 0x1C0044BA0
 * Callers:
 *     sub_1C003246C @ 0x1C003246C (sub_1C003246C.c)
 *     sub_1C0045F90 @ 0x1C0045F90 (sub_1C0045F90.c)
 *     sub_1C0046470 @ 0x1C0046470 (sub_1C0046470.c)
 *     sub_1C0046BC0 @ 0x1C0046BC0 (sub_1C0046BC0.c)
 * Callees:
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C0044BA0(
        struct _DEVICE_OBJECT *a1,
        const WCHAR *a2,
        char *a3,
        unsigned __int32 a4,
        _DWORD *a5,
        _DWORD *a6,
        ULONG ResultLength)
{
  bool v8; // cf
  NTSTATUS v11; // edi
  __m128 *PoolWithTag; // rax
  __m128 *v13; // rbx
  unsigned __int32 v14; // eax
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
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, a4 + 12, 0x42554855u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      sub_1C001D340(PoolWithTag, 0, a4 + 12);
      v11 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v13, a4 + 12, &ResultLength);
      if ( v11 == -2147483643 )
        v11 = 0;
      if ( v11 >= 0 )
      {
        v14 = v13->m128_u32[2];
        if ( a4 < v14 )
          v14 = a4;
        sub_1C001D080(a3, &v13->m128_i8[12], v14);
        if ( a5 )
          *a5 = v13->m128_i32[1];
        if ( a6 )
          *a6 = v13->m128_i32[2];
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
