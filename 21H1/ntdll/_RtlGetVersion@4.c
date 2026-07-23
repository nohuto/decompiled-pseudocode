/*
 * XREFs of _RtlGetVersion@4 @ 0x4B2AFEF0
 * Callers:
 *     _RtlpGetDeviceFamilyInfoEnum@12 @ 0x4B2EB980 (_RtlpGetDeviceFamilyInfoEnum@12.c)
 *     _RtlVerifyVersionInfo@16 @ 0x4B363DF0 (_RtlVerifyVersionInfo@16.c)
 *     _SbpUpdateCacheWithCurrentImpl@8 @ 0x4B3860EA (_SbpUpdateCacheWithCurrentImpl@8.c)
 * Callees:
 *     _RtlGetNtProductType@4 @ 0x4B2B05F0 (_RtlGetNtProductType@4.c)
 *     _RtlGetSuiteMask@0 @ 0x4B2B0630 (_RtlGetSuiteMask@0.c)
 *     _RtlStringCbCopyW@12 @ 0x4B2D5C0F (_RtlStringCbCopyW@12.c)
 *     _NtQueryLicenseValue@20 @ 0x4B2F3EB0 (_NtQueryLicenseValue@20.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __cdecl RtlGetVersion(PRTL_OSVERSIONINFOEXW VersionInformation)
{
  struct _PEB *v1; // edi
  wchar_t *Buffer; // eax
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-1Ch] BYREF
  ULONG ResultDataSize; // [esp+18h] [ebp-14h] BYREF
  ULONG Type; // [esp+1Ch] [ebp-10h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [esp+20h] [ebp-Ch] BYREF
  int Data; // [esp+24h] [ebp-8h] BYREF

  v1 = NtCurrentPeb();
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  Data = 0;
  VersionInformation->dwMajorVersion = v1->OSMajorVersion;
  VersionInformation->dwMinorVersion = v1->OSMinorVersion;
  VersionInformation->dwBuildNumber = v1->OSBuildNumber;
  VersionInformation->dwPlatformId = v1->OSPlatformId;
  Buffer = v1->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW(v1->CSDVersion.Buffer) < 0 )
      VersionInformation->szCSDVersion[0] = 0;
  }
  else
  {
    VersionInformation->szCSDVersion[0] = 0;
  }
  if ( VersionInformation->dwOSVersionInfoSize == 284 || VersionInformation->dwOSVersionInfoSize == 292 )
  {
    VersionInformation->wServicePackMajor = HIBYTE(v1->OSCSDVersion);
    VersionInformation->wServicePackMinor = (unsigned __int8)v1->OSCSDVersion;
    VersionInformation->wSuiteMask = RtlGetSuiteMask();
    if ( VersionInformation->dwOSVersionInfoSize == 292 )
      VersionInformation[1].dwOSVersionInfoSize = RtlGetSuiteMask() & 0x1FFFF;
    VersionInformation->wProductType = 0;
    if ( RtlGetNtProductType(&NtProductType) )
      VersionInformation->wProductType = NtProductType;
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( NtQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) < 0
      || Data != 1
      || Type != 4
      || ResultDataSize != 4 )
    {
      VersionInformation->wSuiteMask = VersionInformation->wSuiteMask & 0xFEEF | 0x100;
      if ( VersionInformation->dwOSVersionInfoSize == 292 )
        VersionInformation[1].dwOSVersionInfoSize = VersionInformation[1].dwOSVersionInfoSize & 0xFFFDFEEF | 0x100;
    }
  }
  return 0;
}
