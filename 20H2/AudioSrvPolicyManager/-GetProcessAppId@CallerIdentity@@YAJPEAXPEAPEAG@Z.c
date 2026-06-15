/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180036BEC
 * Callers:
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001ACFC (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000A4C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180018844 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z @ 0x1800368E4 (-GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180036A50 (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v5; // r9
  signed int LastError; // ebx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  void *v12; // rbx
  unsigned int AppUserModelId; // eax
  void *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-20h]
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v19; // [rsp+60h] [rbp+20h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF

  *a2 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
    goto LABEL_5;
  }
  if ( OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
LABEL_5:
    LastError = 0;
    goto LABEL_6;
  }
  LastError = GetLastError();
LABEL_6:
  if ( !LastError )
  {
    LastError = ARI::ProcessToken::SysAppId::Open(TokenHandle, P, (const UNICODE_STRING **)&P[1], v5);
    if ( TokenHandle != (void *)-4LL )
      CloseHandle(TokenHandle);
  }
  v7 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v7 = LastError;
  if ( v7 != -2147023728 && v7 != -2147024891 )
  {
    if ( v7 >= 0 )
    {
      if ( (unsigned int)ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
                           (ARI::ProcessToken::AutoSysAppId *)P,
                           0,
                           &v19,
                           0LL) == 122 )
      {
        pv = 0LL;
        CoTaskMemFree(0LL);
        v11 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, 0LL, v19, v16, (unsigned __int16 **)&pv);
        v12 = pv;
        v7 = v11;
        if ( v11 >= 0 )
        {
          AppUserModelId = ARI::ProcessToken::AutoSysAppId::GetAppUserModelId(
                             (ARI::ProcessToken::AutoSysAppId *)P,
                             v19,
                             &v19,
                             (unsigned __int16 *)pv);
          if ( AppUserModelId )
          {
            v7 = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0xAC,
                   (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                   (const char *)AppUserModelId);
          }
          else
          {
            v14 = v12;
            v12 = 0LL;
            v7 = 0;
            *a2 = v14;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAB,
            (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)(unsigned int)v11);
        }
        CoTaskMemFree(v12);
        goto LABEL_24;
      }
      v7 = -2147418113;
      v8 = 168LL;
    }
    else
    {
      v8 = 165LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)v7);
  }
LABEL_24:
  if ( P[0] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  return (unsigned int)v7;
}
