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

int __stdcall RtlGetVersion(int a1)
{
  struct _PEB *v1; // edi
  wchar_t *Buffer; // eax
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-1Ch] BYREF
  int v5; // [esp+18h] [ebp-14h] BYREF
  int v6; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v7[4]; // [esp+20h] [ebp-Ch] BYREF
  int v8; // [esp+24h] [ebp-8h] BYREF

  v1 = NtCurrentPeb();
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v8 = 0;
  *(_DWORD *)(a1 + 4) = v1->OSMajorVersion;
  *(_DWORD *)(a1 + 8) = v1->OSMinorVersion;
  *(_DWORD *)(a1 + 12) = v1->OSBuildNumber;
  *(_DWORD *)(a1 + 16) = v1->OSPlatformId;
  Buffer = v1->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW(v1->CSDVersion.Buffer) < 0 )
      *(_WORD *)(a1 + 20) = 0;
  }
  else
  {
    *(_WORD *)(a1 + 20) = 0;
  }
  if ( *(_DWORD *)a1 == 284 || *(_DWORD *)a1 == 292 )
  {
    *(_WORD *)(a1 + 276) = HIBYTE(v1->OSCSDVersion);
    *(_WORD *)(a1 + 278) = (unsigned __int8)v1->OSCSDVersion;
    *(_WORD *)(a1 + 280) = RtlGetSuiteMask();
    if ( *(_DWORD *)a1 == 292 )
      *(_DWORD *)(a1 + 284) = RtlGetSuiteMask() & 0x1FFFF;
    *(_BYTE *)(a1 + 282) = 0;
    if ( (unsigned __int8)RtlGetNtProductType(v7) )
      *(_BYTE *)(a1 + 282) = v7[0];
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( (int)NtQueryLicenseValue(&DestinationString, &v6, &v8, 4, &v5) < 0 || v8 != 1 || v6 != 4 || v5 != 4 )
    {
      *(_WORD *)(a1 + 280) = *(_WORD *)(a1 + 280) & 0xFEEF | 0x100;
      if ( *(_DWORD *)a1 == 292 )
        *(_DWORD *)(a1 + 284) = *(_DWORD *)(a1 + 284) & 0xFFFDFEEF | 0x100;
    }
  }
  return 0;
}
