/*
 * XREFs of SmpIsRamdiskBoot @ 0x1400121BC
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x140006C80 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpIsRamdiskBoot(BOOLEAN *a1)
{
  NTSTATUS v2; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v7; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v13; // [rsp+B4h] [rbp-4Ch]
  WCHAR SourceString[258]; // [rsp+BCh] [rbp-44h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  v7 = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control";
  v6 = 6684772;
  ValueName.Buffer = L"SystemBootDevice";
  *(_DWORD *)&ValueName.Length = 2228256;
  String1.Buffer = L"ramdisk";
  *(_DWORD *)&String1.Length = 1048590;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    ResultLength = 528;
    v2 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x210u, &ResultLength);
    if ( v2 >= 0 )
    {
      if ( v13 == 1 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        *a1 = RtlPrefixUnicodeString(&String1, &DestinationString, 1u);
        v2 = 0;
      }
      else
      {
        v2 = -1073741275;
      }
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v2;
}
