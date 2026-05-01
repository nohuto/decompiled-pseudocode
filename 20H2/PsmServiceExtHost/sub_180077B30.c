/*
 * XREFs of sub_180077B30 @ 0x180077B30
 * Callers:
 *     sub_18003F99C @ 0x18003F99C (sub_18003F99C.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

char sub_180077B30()
{
  int v0; // edi
  int v1; // eax
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp-29h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v7[2]; // [rsp+48h] [rbp-19h] BYREF
  _DWORD SystemInformation[2]; // [rsp+50h] [rbp-11h] BYREF
  _DWORD *v9; // [rsp+58h] [rbp-9h]
  __int64 v10; // [rsp+60h] [rbp-1h]
  struct _TOKEN_PRIVILEGES NewState; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+78h] [rbp+17h] BYREF
  __int64 *v13; // [rsp+98h] [rbp+37h]
  __int64 v14; // [rsp+A0h] [rbp+3Fh]

  TokenHandle = 0LL;
  v0 = 0;
  v1 = ImpersonateSelf(SecurityImpersonation);
  if ( v1 )
  {
    v0 = 1;
    v1 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x20u, 0, &TokenHandle);
    v2 = v1;
    if ( v1 >= 0 )
    {
      v5 = 13LL;
      NewState.Privileges[0].Luid = (LUID)13LL;
      NewState.PrivilegeCount = 1;
      NewState.Privileges[0].Attributes = 2;
      v1 = NtAdjustPrivilegesToken(TokenHandle, 0, &NewState, 0x10u, 0LL, 0LL);
      v2 = v1;
      if ( !v1 )
      {
        v10 = 8LL;
        v9 = v7;
        SystemInformation[0] = 1;
        SystemInformation[1] = 19;
        v7[0] = 16777220;
        v7[1] = 1;
        v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
        v2 = v1;
        if ( v1 >= 0 )
          v2 = 0;
      }
    }
  }
  else
  {
    v2 = -1073741555;
  }
  if ( TokenHandle )
    LOBYTE(v1) = NtClose(TokenHandle);
  if ( v0 )
    LOBYTE(v1) = RevertToSelf();
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    LOBYTE(v1) = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( (_BYTE)v1 )
    {
      LODWORD(v5) = v2;
      v13 = &v5;
      v14 = 4LL;
      LOBYTE(v1) = sub_18002E278(v3, (unsigned __int8 *)dword_18009EC18, 0LL, 0LL, 3u, &v12);
    }
  }
  return v1;
}
