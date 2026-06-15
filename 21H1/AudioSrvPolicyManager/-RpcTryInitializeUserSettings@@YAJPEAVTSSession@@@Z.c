/*
 * XREFs of ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x18002CCFC
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180010530 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000FCC0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x18002C608 (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F738 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall RpcTryInitializeUserSettings(struct TSSession *a1)
{
  _DWORD *v2; // rcx
  int v3; // eax
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  HANDLE CurrentThread; // rax
  const char *v8; // r9
  unsigned int v9; // edi
  PSID *v10; // rbx
  PSID *v11; // rsi
  DWORD LastError; // eax
  const char *v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // eax
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
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  if ( *((_BYTE *)a1 + 324) )
    return *((_BYTE *)a1 + 324) == 0 ? 0x80070490 : 0;
  v2 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v2 > 4u )
  {
    v3 = *(_DWORD *)a1;
    v24 = 0;
    LODWORD(phkResult) = v3;
    v23 = 4;
    p_phkResult = &phkResult;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_18004BC01, 0LL, 0LL, 3u, &v21);
  }
  v4 = RpcImpersonateClient(0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x379,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
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
        v10 = (PSID *)operator new[](TokenInformationLength[0], (const struct std::nothrow_t *)&std::nothrow);
        if ( !v10 )
        {
          v9 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x38E,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_21;
        }
        v11 = v10;
        if ( !GetTokenInformation(TokenHandle, TokenUser, v10, TokenInformationLength[0], TokenInformationLength) )
        {
          v14 = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x391,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  v13);
LABEL_16:
          v9 = v14;
LABEL_21:
          if ( v10 )
            operator delete(v10, (const struct std::nothrow_t *)0x10);
          goto LABEL_23;
        }
      }
      else if ( LastError )
      {
        v14 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x395,
                (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                (const char *)LastError);
        goto LABEL_16;
      }
    }
    if ( EqualSid(*v11, *((PSID *)a1 + 41)) )
    {
      phkResult = 0LL;
      v15 = RegOpenCurrentUser(0x20019u, &phkResult);
      if ( v15 )
      {
        v9 = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x3A0,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
               (const char *)v15);
        if ( phkResult )
          RegCloseKey(phkResult);
        goto LABEL_21;
      }
      hKey = 0LL;
      v16 = RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey);
      *((_BYTE *)a1 + 324) = v16 == 0;
      if ( !v16 )
        LoadUserSettings(a1, hKey);
      if ( hKey )
        RegCloseKey(hKey);
      if ( phkResult )
        RegCloseKey(phkResult);
    }
    if ( v10 )
      operator delete(v10, (const struct std::nothrow_t *)0x10);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
    return *((_BYTE *)a1 + 324) == 0 ? 0x80070490 : 0;
  }
  v9 = wil::details::in1diag3::Return_GetLastError(
         retaddr,
         (void *)0x380,
         (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
         v8);
LABEL_23:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  RpcRevertToSelf();
  return v9;
}
