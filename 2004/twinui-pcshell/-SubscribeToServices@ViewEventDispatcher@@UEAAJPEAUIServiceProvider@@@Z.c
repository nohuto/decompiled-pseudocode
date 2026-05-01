/*
 * XREFs of ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802A7EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802169EC (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x18029FC64 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1802C8E54 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x18046C6C8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C73C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::SubscribeToServices(ViewEventDispatcher *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v5; // rbx
  CCriticalFailureHandler *v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  CCriticalFailureHandler *v11; // rcx
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  CCriticalFailureHandler *v13; // rcx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v15; // rcx
  __int64 v16; // rdx
  CCriticalFailureHandler *v17; // rcx
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v19; // rcx
  __int64 v20; // rdx
  CCriticalFailureHandler *v21; // rcx
  __int64 *v22; // rax
  ConnectedStandbyHelper **v23; // rbx
  const char *v24; // r9
  CCriticalFailureHandler *v25; // rcx
  unsigned __int64 *v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v27; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v28; // [rsp+28h] [rbp-40h]
  __int64 v29; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v30; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF
  __int64 v34; // [rsp+80h] [rbp+18h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (char *)this + 352;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_ProcessLifetimeManagerControl,
         &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
         v5);
  v32 = v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v6, &v32);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = v32;
  }
  if ( v7 < 0 )
  {
    if ( v7 != -2147024882 && v7 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v6,
        &v32,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x314u,
        v26,
        v28);
      v7 = v32;
    }
    if ( v7 < 0 )
    {
      v8 = 789LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
         a2,
         &CLSID_ImmersivePlaybackManager,
         &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
         (char *)this + 360);
  v32 = v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v11, &v32);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = v32;
  }
  if ( v7 < 0 )
  {
    if ( v7 != -2147024882 && v7 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        &v32,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x31Au,
        v26,
        v28);
      v7 = v32;
    }
    if ( v7 < 0 )
    {
      v8 = 795LL;
      goto LABEL_9;
    }
  }
  v12 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v12)(
         a2,
         &SID_VirtualDesktopManager,
         &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
         (char *)this + 368);
  v32 = v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v13, &v32);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = v32;
  }
  if ( v7 < 0 )
  {
    if ( v7 != -2147024882 && v7 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v13,
        &v32,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x320u,
        v26,
        v28);
      v7 = v32;
    }
    if ( v7 < 0 )
    {
      v8 = 801LL;
      goto LABEL_9;
    }
  }
  v34 = 0LL;
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v14)(
         a2,
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         &v34);
  v32 = v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v15, &v32);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = v32;
  }
  if ( v7 < 0 )
  {
    if ( v7 != -2147024882 && v7 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v15,
        &v32,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x325u,
        v26,
        v28);
      v7 = v32;
    }
    if ( v7 < 0 )
    {
      v16 = 805LL;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
LABEL_71:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      return (unsigned int)v7;
    }
  }
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v34 + 32LL))(
         v34,
         ((unsigned __int64)this + 72) & -(__int64)(this != (ViewEventDispatcher *)120),
         (char *)this + 148);
  v32 = v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v17, &v32);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = v32;
  }
  if ( v7 < 0 )
  {
    if ( v7 != -2147024882 && v7 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v17,
        &v32,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x327u,
        v26,
        v28);
      v7 = v32;
    }
    if ( v7 < 0 )
    {
      v16 = 807LL;
      goto LABEL_43;
    }
  }
  v33 = 0LL;
  v18 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v18)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &v33);
  v32 = v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v19, &v32);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = v32;
  }
  if ( v7 < 0 )
  {
    if ( v7 != -2147024882 && v7 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v19,
        &v32,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x32Fu,
        v26,
        v28);
      v7 = v32;
    }
    if ( v7 < 0 )
    {
      v20 = 816LL;
LABEL_70:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      goto LABEL_71;
    }
  }
  v27 = (unsigned __int64 *)((char *)this + 144);
  v7 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v33 + 24LL))(
         v33,
         &unk_1805380D0,
         11LL,
         ((unsigned __int64)this - 48) & -(__int64)(this != (ViewEventDispatcher *)120));
  v32 = v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v21, &v32);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = v32;
  }
  if ( v7 < 0 )
  {
    if ( v7 != -2147024882 && v7 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v21,
        &v32,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x346u,
        v27,
        v28);
      v7 = v32;
    }
    if ( v7 < 0 )
    {
      v20 = 839LL;
      goto LABEL_70;
    }
  }
  try
  {
    v22 = std::make_shared<ConnectedStandbyHelper,>(&v29);
    v23 = (ConnectedStandbyHelper **)((char *)this + 392);
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 49, v22);
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
  }
  catch ( ... )
  {
    v32 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x34D,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    return (unsigned int)v32;
  }
  v7 = ConnectedStandbyHelper::Initialize(
         *v23,
         (struct IWindowDispatcherConnectedStandby *)(((unsigned __int64)this - 56) & -(__int64)(this != (ViewEventDispatcher *)120)));
  v32 = v7;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v25, &v32);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    v7 = v32;
  }
  if ( v7 < 0 )
  {
    if ( v7 != -2147024882 && v7 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v25,
        &v32,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x34Eu,
        v27,
        v28);
      v7 = v32;
    }
    if ( v7 < 0 )
    {
      v20 = 846LL;
      goto LABEL_70;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  return 0LL;
}
