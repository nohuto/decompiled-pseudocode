/*
 * XREFs of LdrpMakeUnicodeStringFromPathElement @ 0x1800D0214
 * Callers:
 *     LdrpLogEtwDllSearchResults @ 0x1800CEF94 (LdrpLogEtwDllSearchResults.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x18005E7C0 (RtlGetCurrentDirectory_U.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     RtlStringCchCopyExW @ 0x1800D0328 (RtlStringCchCopyExW.c)
 */

__int64 __fastcall LdrpMakeUnicodeStringFromPathElement(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  WCHAR *v9; // r8
  int v10; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-CA8h] BYREF
  WCHAR Buffer[1600]; // [rsp+40h] [rbp-C98h] BYREF

  DestinationString = 0LL;
  if ( a2 == 4 )
  {
    if ( RtlGetCurrentDirectory_U(0xC78u, Buffer) )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, Buffer) )
        return 0LL;
LABEL_4:
      *a3 = DestinationString;
      return 0LL;
    }
    return 3221225473LL;
  }
  v7 = *(unsigned __int16 *)(a1 + 112);
  v8 = 0LL;
  if ( *(_DWORD *)(a1 + 40) != a2 )
  {
    do
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        return 3221226021LL;
    }
    while ( *(_DWORD *)(a1 + 4 * v8 + 40) != a2 );
  }
  if ( (unsigned int)v8 >= v7 )
    return 3221226021LL;
  v9 = *(WCHAR **)(a1 + 8 * v8 + 64);
  if ( (_DWORD)v8 == v7 - 1 )
    goto LABEL_15;
  v10 = RtlStringCchCopyExW(
          (unsigned int)Buffer,
          (unsigned int)((*(_QWORD *)(a1 + 8LL * (unsigned int)(v8 + 1) + 64) - (_QWORD)v9 - 2LL) >> 1) + 1,
          (_DWORD)v9,
          0,
          0LL);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
  {
    v9 = Buffer;
LABEL_15:
    if ( RtlCreateUnicodeString(&DestinationString, v9) )
      goto LABEL_4;
  }
  return 3221225473LL;
}
