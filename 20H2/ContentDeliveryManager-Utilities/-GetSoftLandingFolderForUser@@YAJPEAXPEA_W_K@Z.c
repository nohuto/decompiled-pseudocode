/*
 * XREFs of ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800AAB6C
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007C950 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007CF90 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180005D70 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180029854 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     IsOpenStateExplicitPresent @ 0x1800CE46C (IsOpenStateExplicitPresent.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall GetSoftLandingFolderForUser(HANDLE hToken, WCHAR *lpPathName, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  const char *v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  HRESULT v10; // eax
  unsigned int v11; // edi
  DWORD LastError; // edi
  unsigned int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = a3;
  if ( !(unsigned __int8)IsOpenStateExplicitPresent(hToken) || !(unsigned __int8)IsOpenStateExplicitPresent(v5) )
    return 2147942527LL;
  v6 = OpenStateExplicit(hToken, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy");
  v8 = v6;
  if ( !v6 )
  {
    v9 = 23LL;
    goto LABEL_19;
  }
  v16 = 260LL;
  if ( !(unsigned int)GetStateFolder(v6, 1LL, lpPathName, &v16) )
  {
    v9 = 26LL;
    goto LABEL_19;
  }
  v16 = 260LL;
  v10 = PathCchCombine(lpPathName, 0x104uLL, lpPathName, L"Tips");
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( ImpersonateLoggedOnUser(hToken) )
    {
      if ( CreateDirectoryW(lpPathName, 0LL) || (LastError = GetLastError(), LastError == 183) )
      {
        if ( !RevertToSelf() )
        {
          v9 = 44LL;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !RevertToSelf() )
        {
          v9 = 39LL;
          goto LABEL_19;
        }
        if ( LastError )
        {
          v13 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x28,
                  (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                  (const char *)LastError);
LABEL_20:
          v11 = v13;
          goto LABEL_22;
        }
      }
      v11 = 0;
      goto LABEL_22;
    }
    v9 = 32LL;
LABEL_19:
    v13 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)v9,
            (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
            v7);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E,
    (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
    (const char *)(unsigned int)v10);
LABEL_22:
  if ( v8 )
    CloseState(v8);
  return v11;
}
