/*
 * XREFs of ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F73DC
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1801F6BD4 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B9010 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVSearchAppExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x1801F5A2C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_1801F5A2C.c)
 *     ?_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801F71D4 (-_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppExperienceManager::_RegisterMessages(SearchAppExperienceManager *this)
{
  const struct _GUID *v2; // rdx
  const struct _GUID *v3; // r8
  int v4; // eax
  unsigned int LastError; // ebx
  int v6; // eax
  __int64 v7; // rdx
  UINT v8; // eax
  const char *v9; // r9
  UINT v10; // eax
  __int64 v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF
  void *v16; // [rsp+70h] [rbp+30h] BYREF
  SearchAppExperienceManager *v17; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v4 = SearchAppExperienceManager::_ImmersiveShellQueryService(this, v2, v3, &v16);
  LastError = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    *(_QWORD *)&v13 = SearchAppExperienceManager::_OnMessageHandler;
    DWORD2(v13) = 0;
    v17 = this;
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v15);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,SearchAppExperienceManager *,long (SearchAppExperienceManager::*)(unsigned int,unsigned __int64,__int64)>(
           &v15,
           (__int64 *)&v17,
           &v13);
    LastError = v6;
    if ( v6 < 0 )
    {
      v7 = 1086LL;
      goto LABEL_13;
    }
    v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v16 + 24LL))(
           v16,
           0LL,
           (v15 + 8) & -(__int64)(v15 != 0),
           (char *)this + 440);
    LastError = v6;
    if ( v6 < 0 )
    {
      v7 = 1092LL;
      goto LABEL_13;
    }
    v8 = RegisterWindowMessageW(L"SearchAppExperienceManager.ResetActivationTimeoutPolicyMessage");
    *((_DWORD *)this + 114) = v8;
    if ( v8 )
    {
      v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v16 + 24LL))(
             v16,
             v8,
             (v15 + 8) & -(__int64)(v15 != 0),
             (char *)this + 460);
      LastError = v6;
      if ( v6 < 0 )
      {
        v7 = 1097LL;
        goto LABEL_13;
      }
      v10 = RegisterWindowMessageW(L"SearchAppExperienceManager.DeferredSuspensionMessage");
      *((_DWORD *)this + 118) = v10;
      if ( v10 )
      {
        v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v16 + 24LL))(
               v16,
               v10,
               (v15 + 8) & -(__int64)(v15 != 0),
               (char *)this + 476);
        LastError = v6;
        if ( v6 >= 0 )
        {
          LastError = 0;
          goto LABEL_18;
        }
        v7 = 1102LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
LABEL_18:
        Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v15);
        goto LABEL_19;
      }
      v11 = 1101LL;
    }
    else
    {
      v11 = 1096LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v11,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
                  v9);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43B,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return LastError;
}
