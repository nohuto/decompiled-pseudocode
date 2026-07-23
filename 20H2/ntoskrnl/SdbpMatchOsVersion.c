/*
 * XREFs of SdbpMatchOsVersion @ 0x14074DCF8
 * Callers:
 *     SdbpCheckForMatch @ 0x14074DA78 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlGetVersion @ 0x1406CE590 (RtlGetVersion.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
 *     SdbpCheckUptoVersion @ 0x1407AEB38 (SdbpCheckUptoVersion.c)
 *     SdbReadQWORDTag @ 0x1407AEE04 (SdbReadQWORDTag.c)
 *     SdbpCheckFromVersion @ 0x140969E40 (SdbpCheckFromVersion.c)
 *     SdbpCheckVersion @ 0x140969E84 (SdbpCheckVersion.c)
 */

_BOOL8 __fastcall SdbpMatchOsVersion(__int64 a1, unsigned int a2)
{
  BOOL v4; // ebx
  unsigned __int64 v5; // rsi
  unsigned int FirstTag; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 QWORDTag; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-148h] BYREF

  v4 = 1;
  memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  v5 = (VersionInformation.dwBuildNumber | ((VersionInformation.dwMinorVersion | ((unsigned __int64)VersionInformation.dwMajorVersion << 16)) << 16)) << 16;
  FirstTag = SdbFindFirstTag(a1, a2, 20509LL);
  if ( FirstTag )
  {
    QWORDTag = SdbReadQWORDTag(a1, FirstTag, 0LL);
    v4 = SdbpCheckVersion(QWORDTag, v5) != 0;
  }
  v7 = SdbFindFirstTag(a1, a2, 20511LL);
  if ( v7 )
  {
    v11 = SdbReadQWORDTag(a1, v7, 0LL);
    v4 = v4 && (unsigned int)SdbpCheckFromVersion(v11, v5);
  }
  v8 = SdbFindFirstTag(a1, a2, 20510LL);
  if ( v8 )
  {
    v12 = SdbReadQWORDTag(a1, v8, 0LL);
    return v4 && (unsigned int)SdbpCheckUptoVersion(v12, v5);
  }
  return v4;
}
