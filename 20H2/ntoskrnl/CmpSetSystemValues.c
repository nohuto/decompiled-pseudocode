/*
 * XREFs of CmpSetSystemValues @ 0x140A5868C
 * Callers:
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     CmpSetSystemRegistryString @ 0x1403B6754 (CmpSetSystemRegistryString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpSetSystemValues(__int64 a1)
{
  NTSTATUS v2; // ebx
  int v4; // ecx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  int Data; // [rsp+40h] [rbp-C8h] BYREF
  int v7; // [rsp+44h] [rbp-C4h] BYREF
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+88h] [rbp-80h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Data = 0;
  v7 = 0;
  ResultLength[0] = 0;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"df";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v2 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = ZwSetValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpSystemStartOptionsString,
           0,
           1u,
           CmpLoadOptions.Buffer,
           CmpLoadOptions.Length);
    if ( v2 >= 0 )
    {
      v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpSystemBootDeviceString, *(PCSTR *)(a1 + 184));
      if ( v2 >= 0 )
      {
        v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpFirmwareBootDeviceString, *(PCSTR *)(a1 + 192));
        if ( v2 >= 0 )
        {
          v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpWindowsSysPartString, *(PCSTR *)(a1 + 344));
          if ( v2 >= 0 )
          {
            v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpOsBootstatPathString, *(PCSTR *)(a1 + 328));
            if ( v2 >= 0 )
            {
              Data = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 1;
              v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootSucceededString, 0, 4u, &Data, 4u);
              if ( v2 >= 0 )
              {
                Data = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) >> 1) & 1;
                v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootShutdownString, 0, 4u, &Data, 4u);
                if ( v2 >= 0 )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 2) == 0 )
                  {
                    if ( ZwQueryValueKey(
                           KeyHandle,
                           (PUNICODE_STRING)&CmpDirtyShutdownCountString,
                           KeyValueFullInformation,
                           KeyValueInformation,
                           0x100u,
                           ResultLength) >= 0
                      && KeyValueInformation[1] == 4 )
                    {
                      v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1;
                    }
                    else
                    {
                      v4 = 1;
                    }
                    v7 = v4;
                    v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpDirtyShutdownCountString, 0, 4u, &v7, 4u);
                  }
                  if ( v2 >= 0 )
                    v2 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
