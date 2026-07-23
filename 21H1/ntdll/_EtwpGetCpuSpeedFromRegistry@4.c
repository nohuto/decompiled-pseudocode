/*
 * XREFs of _EtwpGetCpuSpeedFromRegistry@4 @ 0x4B2F0DF4
 * Callers:
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _EtwpGetCpuSpeed@4 @ 0x4B307AB0 (_EtwpGetCpuSpeed@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __thiscall EtwpGetCpuSpeedFromRegistry(_DWORD *this)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // esi
  _UNICODE_STRING ValueName; // [esp+Ch] [ebp-44h] BYREF
  _UNICODE_STRING DestinationString; // [esp+14h] [ebp-3Ch] BYREF
  ULONG ResultLength; // [esp+1Ch] [ebp-34h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+20h] [ebp-30h] BYREF
  HANDLE KeyHandle; // [esp+38h] [ebp-18h] BYREF
  _BYTE KeyValueInformation[12]; // [esp+3Ch] [ebp-14h] BYREF
  int v10; // [esp+48h] [ebp-8h]

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"~MHz");
    v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength);
    if ( v3 >= 0 )
      *this = v10;
    NtClose(KeyHandle);
    return v3;
  }
  return result;
}
