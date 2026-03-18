/*
 * XREFs of WinSqmStartSession @ 0x1C00B8AC8
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WinSqmEventWrite @ 0x1C00B8C30 (WinSqmEventWrite.c)
 *     ?RegisterWinSqmProvider@@YAKXZ @ 0x1C00B8C74 (-RegisterWinSqmProvider@@YAKXZ.c)
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C00B8D0C (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 WinSqmStartSession()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int128 v2; // xmm0
  ULONG v3; // eax
  int v5; // [rsp+28h] [rbp-39h] BYREF
  int v6; // [rsp+30h] [rbp-31h] BYREF
  _DWORD Sid[4]; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v9; // [rsp+68h] [rbp+7h]
  __int64 v10; // [rsp+70h] [rbp+Fh]
  _DWORD *v11; // [rsp+78h] [rbp+17h]
  ULONG v12; // [rsp+80h] [rbp+1Fh]
  int v13; // [rsp+84h] [rbp+23h]
  int *v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+90h] [rbp+2Fh]
  int *v16; // [rsp+98h] [rbp+37h]
  __int64 v17; // [rsp+A0h] [rbp+3Fh]

  Sid[0] = 257;
  v5 = 0;
  v6 = 401412;
  Sid[1] = 83886080;
  Sid[2] = 18;
  if ( (dword_1C024A7F0 & 2) == 0 && (unsigned int)IsSessionDisabled(&Win32kSQMSession, 0x62004u) )
  {
    dword_1C024A7F0 |= 2u;
  }
  else
  {
    v0 = Win32AllocPool(40LL, 0x6D715355u);
    v1 = v0;
    if ( v0 )
    {
      v2 = xmmword_1C0245338;
      *(_DWORD *)(v0 + 16) = 40;
      *(_OWORD *)v0 = v2;
      *(_DWORD *)(v0 + 20) = v5;
      *(GUID *)(v0 + 24) = Win32kSQMSession;
      if ( RegHandle || !RegisterWinSqmProvider() )
      {
        UserData.Ptr = (ULONGLONG)&Win32kSQMSession;
        v9 = &unk_1C024E7E0;
        *(_QWORD *)&UserData.Size = 16LL;
        v10 = 4LL;
        v3 = RtlLengthSid(Sid);
        v11 = Sid;
        v12 = v3;
        v13 = 0;
        v14 = &v6;
        v15 = 4LL;
        v16 = &v5;
        v17 = 4LL;
        WinSqmEventWrite(&SQM_START_SESSION, 5u, &UserData);
        return v1;
      }
      Win32FreePool(v1);
    }
  }
  return -1LL;
}
