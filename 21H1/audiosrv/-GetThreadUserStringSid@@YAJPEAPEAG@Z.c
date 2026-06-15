/*
 * XREFs of ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x180002A1C
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180003D14 (-OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall GetThreadUserStringSid(unsigned __int16 **a1)
{
  PSID *v1; // rdi
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  DWORD TokenInformationLength; // [rsp+58h] [rbp+28h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+30h] BYREF
  LPWSTR StringSid; // [rsp+68h] [rbp+38h] BYREF

  TokenHandle = 0LL;
  v1 = 0LL;
  StringSid = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 0, &TokenHandle) )
  {
LABEL_16:
    LastError = GetLastError();
    v5 = LastError;
LABEL_17:
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
LABEL_8:
    if ( v5 >= 0 )
      goto LABEL_9;
    goto LABEL_20;
  }
  if ( GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength) )
    goto LABEL_24;
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError != 122 )
    goto LABEL_17;
  v1 = (PSID *)CoTaskMemAlloc(TokenInformationLength);
  if ( v1 )
  {
LABEL_24:
    if ( GetTokenInformation(TokenHandle, TokenUser, v1, TokenInformationLength, &TokenInformationLength)
      && ConvertSidToStringSidW(*v1, &StringSid) )
    {
      v5 = 0;
      *a1 = StringSid;
      goto LABEL_8;
    }
    goto LABEL_16;
  }
  v5 = -2147024882;
LABEL_20:
  if ( StringSid )
  {
    LocalFree(StringSid);
    StringSid = 0LL;
  }
LABEL_9:
  if ( v1 )
    CoTaskMemFree(v1);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("GetThreadUserStringSid", 0x94u, v5);
  return (unsigned int)v5;
}
