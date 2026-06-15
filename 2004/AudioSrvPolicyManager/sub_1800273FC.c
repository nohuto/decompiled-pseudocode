/*
 * XREFs of sub_1800273FC @ 0x1800273FC
 * Callers:
 *     sub_18000ABD0 @ 0x18000ABD0 (sub_18000ABD0.c)
 * Callees:
 *     sub_180001090 @ 0x180001090 (sub_180001090.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180003AE8 @ 0x180003AE8 (sub_180003AE8.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_180026D08 @ 0x180026D08 (sub_180026D08.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     sub_180039E78 @ 0x180039E78 (sub_180039E78.c)
 */

__int64 __fastcall sub_1800273FC(__int64 a1)
{
  _DWORD *v2; // rcx
  unsigned int v3; // eax
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  HANDLE CurrentThread; // rax
  __int64 v8; // r9
  unsigned int v9; // edi
  PSID *v10; // rbx
  PSID *v11; // rsi
  DWORD LastError; // eax
  __int64 v13; // r9
  unsigned int v14; // eax
  LSTATUS v15; // eax
  LSTATUS v16; // eax
  DWORD TokenInformationLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-C8h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-B0h] BYREF
  HKEY *p_phkResult; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+84h] [rbp-84h]
  _BYTE TokenInformation[512]; // [rsp+88h] [rbp-80h] BYREF
  __int64 retaddr; // [rsp+2A0h] [rbp+198h]

  if ( *(_BYTE *)(a1 + 324) )
    return *(_BYTE *)(a1 + 324) == 0 ? 0x80070490 : 0;
  v2 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
  if ( *v2 > 4u )
  {
    v3 = *(_DWORD *)a1;
    v24 = 0;
    LODWORD(phkResult) = v3;
    v23 = 4;
    p_phkResult = &phkResult;
    sub_180001090((__int64)v2, (unsigned __int8 *)dword_180046680, 0LL, 0LL, 3u, &v21);
  }
  v4 = RpcImpersonateClient(0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_180003AB0(retaddr, 889, (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp", v4);
    return v5;
  }
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    v10 = 0LL;
    TokenInformationLength[0] = 512;
    v11 = (PSID *)TokenInformation;
    if ( !GetTokenInformation(TokenHandle, TokenUser, TokenInformation, 0x200u, TokenInformationLength) )
    {
      LastError = GetLastError();
      if ( LastError == 122 )
      {
        v10 = (PSID *)sub_180039E78(TokenInformationLength[0], &unk_18004FFC8);
        if ( !v10 )
        {
          v9 = -2147024882;
          sub_180003AB0(
            retaddr,
            910,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            -2147024882);
          goto LABEL_21;
        }
        v11 = v10;
        if ( !GetTokenInformation(TokenHandle, TokenUser, v10, TokenInformationLength[0], TokenInformationLength) )
        {
          v14 = sub_180003AE8(
                  retaddr,
                  913,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  v13);
LABEL_16:
          v9 = v14;
LABEL_21:
          if ( v10 )
            sub_180039D98(v10);
          goto LABEL_23;
        }
      }
      else if ( LastError )
      {
        v14 = sub_18000A4C0(
                retaddr,
                917,
                (int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                LastError);
        goto LABEL_16;
      }
    }
    if ( EqualSid(*v11, *(PSID *)(a1 + 328)) )
    {
      phkResult = 0LL;
      v15 = RegOpenCurrentUser(0x20019u, &phkResult);
      if ( v15 )
      {
        v9 = sub_18000A4C0(
               retaddr,
               928,
               (int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
               v15);
        if ( phkResult )
          RegCloseKey(phkResult);
        goto LABEL_21;
      }
      hKey = 0LL;
      v16 = RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey);
      *(_BYTE *)(a1 + 324) = v16 == 0;
      if ( !v16 )
        sub_180026D08((unsigned int *)a1, hKey);
      if ( hKey )
        RegCloseKey(hKey);
      if ( phkResult )
        RegCloseKey(phkResult);
    }
    if ( v10 )
      sub_180039D98(v10);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
    return *(_BYTE *)(a1 + 324) == 0 ? 0x80070490 : 0;
  }
  v9 = sub_180003AE8(retaddr, 896, (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp", v8);
LABEL_23:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  RpcRevertToSelf();
  return v9;
}
