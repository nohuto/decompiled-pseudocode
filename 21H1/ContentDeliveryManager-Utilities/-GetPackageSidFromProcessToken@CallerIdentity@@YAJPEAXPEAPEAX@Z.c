/*
 * XREFs of ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180056ED4
 * Callers:
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180056E1C (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcessToken(HANDLE TokenHandle, _QWORD *a2, void **a3)
{
  BOOL TokenInformation; // eax
  signed int v6; // ebx
  signed int LastError; // eax
  PSID *v8; // rdi
  signed int v9; // eax
  DWORD LengthSid; // ebp
  HLOCAL v11; // rax
  void *v12; // rsi
  signed int v13; // eax
  SIZE_T uBytes; // [rsp+60h] [rbp+18h] BYREF

  TokenInformation = GetTokenInformation(TokenHandle, TokenAppContainerSid, 0LL, 0, (PDWORD)&uBytes);
  v6 = TokenInformation ? 0x8000FFFF : 0;
  if ( !TokenInformation )
  {
    LastError = GetLastError();
    if ( LastError == 122 )
      goto LABEL_6;
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( v6 >= 0 )
    {
LABEL_6:
      v8 = (PSID *)LocalAlloc(0x40u, (unsigned int)uBytes);
      v6 = v8 == 0LL ? 0x8007000E : 0;
      if ( v8 )
      {
        if ( GetTokenInformation(TokenHandle, TokenAppContainerSid, v8, uBytes, (PDWORD)&uBytes) )
        {
          if ( *v8 )
          {
            LengthSid = GetLengthSid(*v8);
            v11 = LocalAlloc(0x40u, LengthSid);
            v12 = v11;
            v6 = v11 == 0LL ? 0x8007000E : 0;
            if ( v11 )
            {
              if ( CopySid(LengthSid, v11, *v8) )
              {
                v6 = 0;
                *a2 = v12;
              }
              else
              {
                v13 = GetLastError();
                v6 = (unsigned __int16)v13 | 0x80070000;
                if ( v13 <= 0 )
                  v6 = v13;
                if ( v6 >= 0 )
                  v6 = -2147467259;
                LocalFree(v12);
              }
            }
          }
          else
          {
            v6 = -2147023728;
          }
          LocalFree(v8);
        }
        else
        {
          v9 = GetLastError();
          v6 = (unsigned __int16)v9 | 0x80070000;
          if ( v9 <= 0 )
            v6 = v9;
          if ( v6 >= 0 )
            return (unsigned int)-2147467259;
        }
      }
    }
  }
  return (unsigned int)v6;
}
