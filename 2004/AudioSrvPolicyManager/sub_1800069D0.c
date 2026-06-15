/*
 * XREFs of sub_1800069D0 @ 0x1800069D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180003AE8 @ 0x180003AE8 (sub_180003AE8.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     sub_18001A9E0 @ 0x18001A9E0 (sub_18001A9E0.c)
 *     sub_180020DF4 @ 0x180020DF4 (sub_180020DF4.c)
 */

__int64 __fastcall sub_1800069D0(__int64 a1, void *a2)
{
  unsigned int v3; // eax
  int v4; // ebx
  LSTATUS v5; // eax
  unsigned int v6; // eax
  char v8; // di
  HANDLE CurrentThread; // rax
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  void *TokenHandle; // [rsp+30h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+8h]
  unsigned int TokenInformation; // [rsp+60h] [rbp+20h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+28h] BYREF

  v3 = RpcImpersonateClient(0LL);
  if ( v3 )
  {
    v4 = sub_18000A4C0(
           retaddr,
           78LL,
           "avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
           v3);
  }
  else
  {
    hKey = 0LL;
    if ( !RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Multimedia\\Audio\\DefaultEndpoint", 0, 2u, &hKey) )
    {
      v5 = RegDeleteTreeW(hKey, 0LL);
      if ( v5 < 0 )
        sub_18000F8F4(
          retaddr,
          90LL,
          "avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (unsigned int)v5);
    }
    if ( hKey )
      RegCloseKey(hKey);
    RpcRevertToSelf();
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
    v6 = RpcImpersonateClient(a2);
    if ( v6 )
      return sub_18000A4C0(
               retaddr,
               359LL,
               "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
               v6);
    TokenHandle = 0LL;
    v8 = 1;
    CurrentThread = GetCurrentThread();
    if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
    {
      TokenInformation = 0;
      v12 = sub_18001A9E0(TokenHandle, &TokenInformation);
      if ( !v12 )
      {
        v8 = 0;
        RpcRevertToSelf();
        v14 = sub_180020DF4(v13, TokenInformation);
        v4 = v14;
        if ( v14 >= 0 )
          v4 = 0;
        else
          sub_180003AB0(
            retaddr,
            372,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
            v14);
        goto LABEL_21;
      }
      v11 = sub_18000A4C0(
              retaddr,
              367LL,
              "multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
              v12);
    }
    else
    {
      v11 = sub_180003AE8(
              retaddr,
              363,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
              v10);
    }
    v4 = v11;
LABEL_21:
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( v8 )
      RpcRevertToSelf();
    return (unsigned int)v4;
  }
  sub_180003AB0(
    retaddr,
    356,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    v4);
  return (unsigned int)v4;
}
