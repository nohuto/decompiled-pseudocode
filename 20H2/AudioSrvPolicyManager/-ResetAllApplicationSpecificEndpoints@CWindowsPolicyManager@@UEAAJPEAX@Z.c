/*
 * XREFs of ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x1800069D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003AE8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000A4C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F8F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001A9E0 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z @ 0x180020DF4 (-ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::ResetAllApplicationSpecificEndpoints(CWindowsPolicyManager *this, void *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  LSTATUS v5; // eax
  unsigned int v6; // eax
  char v8; // di
  HANDLE CurrentThread; // rax
  const char *v10; // r9
  unsigned int LastError; // eax
  unsigned int TokenInformation; // eax
  CApplicationManager *v13; // rcx
  int v14; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-20h]
  unsigned int phkResulta; // [rsp+20h] [rbp-20h]
  unsigned int phkResultb; // [rsp+20h] [rbp-20h]
  void *TokenHandle; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  unsigned int v20; // [rsp+60h] [rbp+20h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+28h] BYREF

  v3 = RpcImpersonateClient(0LL);
  if ( v3 )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x4E,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
           (const char *)v3,
           phkResult);
  }
  else
  {
    hKey = 0LL;
    if ( !RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Multimedia\\Audio\\DefaultEndpoint", 0, 2u, &hKey) )
    {
      v5 = RegDeleteTreeW(hKey, 0LL);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v5,
          phkResulta);
    }
    if ( hKey )
      RegCloseKey(hKey);
    RpcRevertToSelf();
    v4 = 0;
  }
  if ( (v4 & 0x80000000) == 0 )
  {
    v6 = RpcImpersonateClient(a2);
    if ( v6 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x167,
               (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
               (const char *)v6,
               phkResulta);
    TokenHandle = 0LL;
    v8 = 1;
    CurrentThread = GetCurrentThread();
    if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
    {
      v20 = 0;
      TokenInformation = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &v20);
      if ( !TokenInformation )
      {
        v8 = 0;
        RpcRevertToSelf();
        v14 = CApplicationManager::ResetAllApplicationSpecificEndpoints(v13, v20);
        v4 = v14;
        if ( v14 >= 0 )
          v4 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x174,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
            (const char *)(unsigned int)v14);
        goto LABEL_21;
      }
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0x16F,
                    (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                    (const char *)TokenInformation,
                    phkResultb);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x16B,
                    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                    v10);
    }
    v4 = LastError;
LABEL_21:
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( v8 )
      RpcRevertToSelf();
    return v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x164,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)v4);
  return v4;
}
