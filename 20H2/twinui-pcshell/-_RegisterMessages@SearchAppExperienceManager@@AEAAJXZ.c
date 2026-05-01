/*
 * XREFs of ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F6B9C
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1801F62E4 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@QEAA_NXZ @ 0x180099684 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B70A0 (--1-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B8C20 (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVSearchAppExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x1801F502C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_1801F502C.c)
 *     ?_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801F6994 (-_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
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
  UINT v11; // eax
  __int64 v12; // rdx
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+28h] BYREF
  void *v17; // [rsp+70h] [rbp+30h] BYREF
  SearchAppExperienceManager *v18; // [rsp+78h] [rbp+38h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v4 = SearchAppExperienceManager::_ImmersiveShellQueryService(this, v2, v3, &v17);
  LastError = v4;
  if ( v4 >= 0 )
  {
    v16 = 0LL;
    *(_QWORD *)&v14 = SearchAppExperienceManager::_OnMessageHandler;
    DWORD2(v14) = 0;
    v18 = this;
    Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(&v16);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler,SearchAppExperienceManager *,long (SearchAppExperienceManager::*)(unsigned int,unsigned __int64,__int64)>(
           &v16,
           (__int64 *)&v18,
           &v14);
    LastError = v6;
    if ( v6 < 0 )
    {
      v7 = 1267LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_23:
      Microsoft::WRL::ComPtr<AppViewIconLoader>::~ComPtr<AppViewIconLoader>((__int64)&v16);
      goto LABEL_24;
    }
    v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v17 + 24LL))(
           v17,
           0LL,
           (v16 + 8) & -(__int64)(v16 != 0),
           (char *)this + 440);
    LastError = v6;
    if ( v6 < 0 )
    {
      v7 = 1273LL;
      goto LABEL_17;
    }
    v8 = RegisterWindowMessageW(L"SearchAppExperienceManager.ResetActivationTimeoutPolicyMessage");
    *((_DWORD *)this + 114) = v8;
    if ( v8 )
    {
      v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v17 + 24LL))(
             v17,
             v8,
             (v16 + 8) & -(__int64)(v16 != 0),
             (char *)this + 460);
      LastError = v6;
      if ( v6 < 0 )
      {
        v7 = 1278LL;
        goto LABEL_17;
      }
      v10 = RegisterWindowMessageW(L"SearchAppExperienceManager.DeferredSuspensionMessage");
      *((_DWORD *)this + 118) = v10;
      if ( v10 )
      {
        v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v17 + 24LL))(
               v17,
               v10,
               (v16 + 8) & -(__int64)(v16 != 0),
               (char *)this + 476);
        LastError = v6;
        if ( v6 < 0 )
        {
          v7 = 1283LL;
          goto LABEL_17;
        }
        if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::GetImpl'::`2'::impl) )
        {
LABEL_19:
          LastError = 0;
          goto LABEL_23;
        }
        v11 = RegisterWindowMessageW(L"SearchAppExperienceManager.HideSearchWindowMessage");
        *((_DWORD *)this + 138) = v11;
        if ( v11 )
        {
          v6 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, char *))(*(_QWORD *)v17 + 24LL))(
                 v17,
                 v11,
                 (v16 + 8) & -(__int64)(v16 != 0),
                 (char *)this + 556);
          LastError = v6;
          if ( v6 < 0 )
          {
            v7 = 1290LL;
            goto LABEL_17;
          }
          goto LABEL_19;
        }
        v12 = 1289LL;
      }
      else
      {
        v12 = 1282LL;
      }
    }
    else
    {
      v12 = 1277LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v12,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
                  v9);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4F0,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_24:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v17);
  return LastError;
}
