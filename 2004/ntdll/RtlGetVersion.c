/*
 * XREFs of RtlGetVersion @ 0x18003E4D0
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18003E2B0 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18003F850 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x180079FE0 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x18003BC7C (RtlStringCbCopyW.c)
 *     RtlGetNtProductType @ 0x18003CBA0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18003CC00 (RtlGetSuiteMask.c)
 *     ZwQueryLicenseValue @ 0x18009F860 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall RtlGetVersion(int *a1)
{
  struct _PEB *v2; // rdi
  wchar_t *Buffer; // r8
  int v4; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+80h] [rbp+38h] BYREF
  int v8; // [rsp+88h] [rbp+40h] BYREF
  int v9; // [rsp+90h] [rbp+48h] BYREF
  int v10; // [rsp+98h] [rbp+50h] BYREF

  DestinationString = 0LL;
  v7 = 0;
  v2 = NtCurrentPeb();
  a1[1] = v2->OSMajorVersion;
  a1[2] = v2->OSMinorVersion;
  a1[3] = v2->OSBuildNumber;
  a1[4] = v2->OSPlatformId;
  Buffer = v2->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW((_WORD *)a1 + 10, 0x100uLL, (__int64)Buffer) < 0 )
      *((_WORD *)a1 + 10) = 0;
  }
  else
  {
    *((_WORD *)a1 + 10) = 0;
  }
  v4 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v2->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v2->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask();
    if ( v4 == 292 )
      a1[71] = RtlGetSuiteMask() & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( RtlGetNtProductType(&v8) )
      *((_BYTE *)a1 + 282) = v8;
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( (int)ZwQueryLicenseValue(&DestinationString, &v9, &v7, 4LL, &v10) < 0 || v7 != 1 || v9 != 4 || v10 != 4 )
    {
      *((_WORD *)a1 + 140) &= ~0x10u;
      *((_WORD *)a1 + 140) |= 0x100u;
      if ( *a1 == 292 )
      {
        a1[71] &= 0xFFFDFFEF;
        a1[71] |= 0x100u;
      }
    }
  }
  return 0LL;
}
