/*
 * XREFs of _RtlpHpOverrideGCInterval@4 @ 0x4B358711
 * Callers:
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 * Callees:
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __thiscall RtlpHpOverrideGCInterval(_DWORD *this)
{
  const WCHAR *i; // eax
  int result; // eax
  size_t v3; // [esp-4h] [ebp-264h]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-250h] BYREF
  ULONG ResultLength; // [esp+18h] [ebp-248h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+1Ch] [ebp-244h] BYREF
  _UNICODE_STRING Destination; // [esp+34h] [ebp-22Ch] BYREF
  HANDLE KeyHandle; // [esp+3Ch] [ebp-224h] BYREF
  _DWORD KeyValueInformation[6]; // [esp+40h] [ebp-220h] BYREF
  _BYTE v10[516]; // [esp+58h] [ebp-208h] BYREF

  for ( i = (const WCHAR *)(this[1] + 2 * (*(unsigned __int16 *)this >> 1)); *i != 92; --i )
    ;
  RtlInitUnicodeString(&DestinationString, i);
  LODWORD(v3) = 512;
  KeyHandle = 0;
  memset(v10, 0, v3);
  *(_DWORD *)&Destination.Length = 0x2000000;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  Destination.Buffer = (wchar_t *)v10;
  RtlAppendUnicodeStringToString(&Destination, &stru_4B281C28);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  result = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_4B281C38,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x18u,
               &ResultLength);
    if ( result >= 0 )
    {
      result = -10000000 * KeyValueInformation[3];
      RtlpHpGCInterval.QuadPart = -10000000LL * *(_QWORD *)&KeyValueInformation[3];
    }
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
