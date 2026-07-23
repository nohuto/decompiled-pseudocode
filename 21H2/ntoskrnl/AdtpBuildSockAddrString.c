/*
 * XREFs of AdtpBuildSockAddrString @ 0x14096DF68
 * Callers:
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     AdtpBuildIPv4Strings @ 0x14096D24C (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14096D3A4 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x14096D4FC (AdtpBuildMacStrings.c)
 */

__int64 __fastcall AdtpBuildSockAddrString(__int16 *a1, UNICODE_STRING *a2, _BYTE *a3, UNICODE_STRING *a4, _BYTE *a5)
{
  unsigned int v5; // ebx
  __int16 v8; // ax

  v5 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 )
    *a5 = 0;
  v8 = *a1;
  if ( *a1 == 2 )
    return (unsigned int)AdtpBuildIPv4Strings(a1, (__int64)a2, a3, (__int64)a4, a5);
  if ( v8 == 23 )
    return (unsigned int)AdtpBuildIPv6Strings(a1, (__int64)a2, a3, (__int64)a4, a5);
  if ( v8 == 33 )
    return (unsigned int)AdtpBuildMacStrings((__int64)a1, (__int64)a2, a3);
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(a2, L"-");
    *a3 = 0;
  }
  if ( a4 && a5 )
  {
    RtlInitUnicodeString(a4, L"-");
    *a5 = 0;
  }
  return v5;
}
