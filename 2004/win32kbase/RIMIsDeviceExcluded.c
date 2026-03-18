/*
 * XREFs of RIMIsDeviceExcluded @ 0x1C0161534
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01627C8 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

_BOOL8 __fastcall RIMIsDeviceExcluded(__int16 a1, struct _UNICODE_STRING *a2)
{
  BOOL v2; // ebx
  _DWORD *v4; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( a1 == 1 )
  {
    ResultLength = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\ExcludedDEvices");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
      {
        if ( ResultLength )
        {
          v4 = (_DWORD *)Win32AllocPool(ResultLength, 0x78657352u);
          if ( v4 )
          {
            if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, v4, ResultLength, &ResultLength) >= 0
              && v4[1] == 4 )
            {
              v2 = (_DWORD)v4 == -11;
            }
            Win32FreePool((__int64)v4);
          }
        }
      }
      ZwClose(KeyHandle);
    }
  }
  return v2;
}
