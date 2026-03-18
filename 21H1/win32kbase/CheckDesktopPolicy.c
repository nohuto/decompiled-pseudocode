/*
 * XREFs of CheckDesktopPolicy @ 0x1C0013970
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0014290 (OpenCacheKeyEx.c)
 *     RtlLoadStringOrError @ 0x1C0014890 (RtlLoadStringOrError.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicy(__int64 a1, const WCHAR *a2)
{
  void *v4; // rsi
  NTSTATUS v6; // ebx
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v11[160]; // [rsp+60h] [rbp-A0h] BYREF

  ResultLength = 0;
  v7 = gdwPolicyFlags & 6;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)a2, v11);
      a2 = (const WCHAR *)v11;
    }
    do
    {
      v4 = (void *)OpenCacheKeyEx(a1, 4LL, 131097LL, &v7);
      if ( !v4 )
        break;
      RtlInitUnicodeString(&DestinationString, a2);
      v6 = ZwQueryValueKey(v4, &DestinationString, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(v4);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        UserSetLastError(1260LL);
        return 1LL;
      }
    }
    while ( v7 );
  }
  return 0LL;
}
