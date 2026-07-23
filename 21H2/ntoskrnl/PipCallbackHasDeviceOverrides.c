/*
 * XREFs of PipCallbackHasDeviceOverrides @ 0x14089B3F8
 * Callers:
 *     PipFindDeviceOverrideEntry @ 0x1407643BC (PipFindDeviceOverrideEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 */

bool __fastcall PipCallbackHasDeviceOverrides(void *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  int v4; // ecx
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  __int128 KeyInformation; // [rsp+70h] [rbp+7h] BYREF
  __int128 v10; // [rsp+80h] [rbp+17h]
  __int128 v11; // [rsp+90h] [rbp+27h]

  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyInformation = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( v3 == -2147483643 )
      v3 = 0;
    if ( v3 >= 0 && (v4 = DWORD1(v10)) != 0 )
    {
      *(_QWORD *)(a2 + 16) = KeyHandle;
      *(_DWORD *)(a2 + 24) = v4;
    }
    else
    {
      v3 = -1073741823;
      ZwClose(KeyHandle);
    }
  }
  return v3 >= 0;
}
