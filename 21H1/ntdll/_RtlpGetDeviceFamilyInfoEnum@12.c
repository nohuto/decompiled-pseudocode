/*
 * XREFs of _RtlpGetDeviceFamilyInfoEnum@12 @ 0x4B2EB980
 * Callers:
 *     _RtlGetDeviceFamilyInfoEnum@12 @ 0x4B2EB970 (_RtlGetDeviceFamilyInfoEnum@12.c)
 *     _RtlConvertDeviceFamilyInfoToString@16 @ 0x4B334FA0 (_RtlConvertDeviceFamilyInfoToString@16.c)
 * Callees:
 *     _RtlGetVersion@4 @ 0x4B2AFEF0 (_RtlGetVersion@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _NtQueryLicenseValue@20 @ 0x4B2F3EB0 (_NtQueryLicenseValue@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     ReadUlongFromKey @ 0x4B334F29 (ReadUlongFromKey.c)
 */

NTSTATUS __stdcall RtlpGetDeviceFamilyInfoEnum(ULONG a1, ULONG *a2, ULONG *a3)
{
  NTSTATUS result; // eax
  unsigned __int64 v4; // rax
  ULONG Data; // [esp+10h] [ebp-158h] BYREF
  HANDLE KeyHandle; // [esp+14h] [ebp-154h] BYREF
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-150h] BYREF
  ULONG Type; // [esp+20h] [ebp-148h] BYREF
  ULONG ResultDataSize; // [esp+24h] [ebp-144h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+28h] [ebp-140h] BYREF
  _OSVERSIONINFOEXW VersionInformation; // [esp+40h] [ebp-128h] BYREF

  result = a1;
  ResultDataSize = a1;
  if ( a1 )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    KeyHandle = 0;
    Type = 0;
    Data = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwOpenKey(&KeyHandle, 0x20119u, &ObjectAttributes) >= 0 )
    {
      if ( ReadUlongFromKey(KeyHandle, L"UBR", (int)&Type) >= 0 )
        Data = Type;
      NtClose(KeyHandle);
    }
    VersionInformation.dwOSVersionInfoSize = 284;
    RtlGetVersion(&VersionInformation);
    v4 = (unsigned __int64)VersionInformation.dwBuildNumber << 16;
    result = ResultDataSize;
    *(_QWORD *)ResultDataSize = Data
                              + __PAIR64__(
                                  HIDWORD(v4)
                                + VersionInformation.dwMinorVersion
                                + (VersionInformation.dwMajorVersion << 16),
                                  VersionInformation.dwBuildNumber << 16);
  }
  if ( a2 )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    Data = 3;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    NtQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
    result = Data;
    *a2 = Data;
  }
  if ( a3 )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    KeyHandle = 0;
    Data = 0;
    *a3 = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\OEM");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    result = ZwOpenKey(&KeyHandle, 0x20119u, &ObjectAttributes);
    if ( result >= 0 )
    {
      if ( ReadUlongFromKey(KeyHandle, L"DeviceForm", (int)&Data) >= 0 )
        *a3 = Data;
      return NtClose(KeyHandle);
    }
  }
  return result;
}
