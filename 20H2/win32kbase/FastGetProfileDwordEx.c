/*
 * XREFs of FastGetProfileDwordEx @ 0x1C008F1B0
 * Callers:
 *     FastGetProfileDword @ 0x1C008F180 (FastGetProfileDword.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C00375B0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

int __fastcall FastGetProfileDwordEx(
        const UNICODE_STRING *a1,
        unsigned int a2,
        const WCHAR *a3,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  void *v11; // rax
  void *v12; // rsi
  int v14; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+54h] [rbp-1Ch]

  ResultLength = 0;
  v14 = a5 | gdwPolicyFlags;
  DestinationString = 0LL;
  if ( a7 )
    *a7 = 0;
  while ( 1 )
  {
    v11 = OpenCacheKeyEx(a1, a2, 0x20019u, &v14);
    v12 = v11;
    if ( !v11 )
      break;
    RtlInitUnicodeString(&DestinationString, a3);
    if ( ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v14 = 0;
      *a6 = v18;
    }
    else if ( !v14 )
    {
      if ( a7 )
        *a7 = 1;
      *a6 = a4;
    }
    LODWORD(v11) = ZwClose(v12);
    if ( !v14 )
      return (int)v11;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( a7 )
      *a7 = 1;
    *a6 = a4;
  }
  return (int)v11;
}
