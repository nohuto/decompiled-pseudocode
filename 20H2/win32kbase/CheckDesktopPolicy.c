/*
 * XREFs of CheckDesktopPolicy @ 0x1C008D350
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C00375B0 (OpenCacheKeyEx.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     RtlLoadStringOrError @ 0x1C008D960 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicy(const UNICODE_STRING *a1, const WCHAR *a2)
{
  void *v4; // rsi
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v12[160]; // [rsp+60h] [rbp-A0h] BYREF

  ResultLength = 0;
  v8 = gdwPolicyFlags & 6;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)a2, v12);
      a2 = (const WCHAR *)v12;
    }
    do
    {
      v4 = OpenCacheKeyEx(a1, 4LL, 0x20019u, &v8);
      if ( !v4 )
        break;
      RtlInitUnicodeString(&DestinationString, a2);
      v6 = ZwQueryValueKey(v4, &DestinationString, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(v4);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        UserSetLastError(1260LL, v7);
        return 1LL;
      }
    }
    while ( v8 );
  }
  return 0LL;
}
