/*
 * XREFs of ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18040D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050190 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18031E550 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@.c)
 *     ?VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x18041BE70 (-VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePo.c)
 *     ?VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180428844 (-VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredVi.c)
 *     ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180428C2C (-CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivat.c)
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180428F78 (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180448858 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804488CC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CVirtualDesktopComponent::SubscribeToServices(
        CVirtualDesktopComponent *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v5; // rcx
  int Instance; // ebx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v8; // rcx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v10; // rcx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v12; // rcx
  __int64 v13; // rdx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v15; // rcx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v17; // rcx
  __int64 v18; // rcx
  CCriticalFailureHandler *v19; // rcx
  __int64 v20; // rdx
  CCriticalFailureHandler *v21; // rcx
  CCriticalFailureHandler *v22; // rcx
  CCriticalFailureHandler *v23; // rcx
  CCriticalFailureHandler *v24; // rcx
  CCriticalFailureHandler *v25; // rcx
  __int64 v26; // rcx
  CCriticalFailureHandler *v27; // rcx
  CCriticalFailureHandler *v28; // rcx
  __int64 v29; // rdx
  CCriticalFailureHandler *v30; // rcx
  const struct _GUID *v31; // r8
  CCriticalFailureHandler *v32; // rcx
  __int64 v33; // rdx
  CCriticalFailureHandler *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  CCriticalFailureHandler *v37; // rcx
  CCriticalFailureHandler *v38; // rcx
  __int64 v39; // r8
  HRESULT (__stdcall *v40)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v41; // eax
  HRESULT (__stdcall *v42)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v43; // eax
  HRESULT (__stdcall *v44)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v45; // eax
  __int64 v46; // rdx
  const struct _GUID *v47; // r8
  CCriticalFailureHandler *v48; // rcx
  HRESULT (__stdcall *v49)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v50; // rcx
  unsigned __int64 v51; // r9
  __int64 v52; // rdx
  int v53; // eax
  unsigned __int64 *v55; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v56; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v57; // [rsp+28h] [rbp-41h]
  unsigned __int64 *v58; // [rsp+28h] [rbp-41h]
  struct IVirtualDesktopLock *v59; // [rsp+30h] [rbp-39h]
  void **v60; // [rsp+38h] [rbp-31h]
  __int64 v61; // [rsp+50h] [rbp-19h] BYREF
  void *v62; // [rsp+58h] [rbp-11h] BYREF
  struct ITabViewManager *v63; // [rsp+60h] [rbp-9h] BYREF
  __int64 v64; // [rsp+68h] [rbp-1h] BYREF
  struct IInspectable *v65; // [rsp+70h] [rbp+7h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *v66; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v67; // [rsp+80h] [rbp+17h] BYREF
  RTL_SRWLOCK *v68[7]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int64 *v70; // [rsp+D8h] [rbp+6Fh] BYREF
  void *v71; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v72; // [rsp+E8h] [rbp+7Fh] BYREF

  v61 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
  Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
               a2,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &v61);
  LODWORD(v70) = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v71) >= 0 )
  {
    switch ( (_DWORD)v71 )
    {
      case 2:
        Instance = -2023406815;
        goto LABEL_11;
      case 3:
        Instance = -2023406814;
        goto LABEL_11;
      case 4:
        Instance = -2147418094;
        goto LABEL_11;
      case 5:
        Instance = -2147022986;
LABEL_11:
        LODWORD(v70) = Instance;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_13:
  if ( Instance >= 0 )
    goto LABEL_19;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)&v70,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0xD4u,
      v55,
      v57);
    Instance = (int)v70;
  }
  if ( Instance >= 0 )
  {
LABEL_19:
    v67 = 0LL;
    v7 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v67);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v7)(
                 a2,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &v67);
    LODWORD(v70) = Instance;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_31:
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v8,
            (int *)&v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xD8u,
            v55,
            v57);
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD8,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
LABEL_230:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v67);
          goto LABEL_231;
        }
      }
      v64 = 0LL;
      v9 = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v64);
      Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v9)(
                   a2,
                   &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                   &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                   &v64);
      LODWORD(v70) = Instance;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_49:
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v10,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xDCu,
              v55,
              v57);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xDC,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_229:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v64);
            goto LABEL_230;
          }
        }
        v63 = 0LL;
        v66 = 0LL;
        v65 = 0LL;
        if ( *((_QWORD *)this + 23) )
        {
          v11 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct ITabViewManager **))v11)(
                       a2,
                       &unk_18051B6B0,
                       &GUID_d1710073_c814_4a0c_9685_00e44547418f,
                       &v63);
          LODWORD(v70) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v12, (int *)&v70);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v12,
                (int *)&v70,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xE4u,
                v55,
                v57);
              Instance = (int)v70;
            }
            if ( Instance < 0 )
            {
              v13 = 228LL;
LABEL_194:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v13,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                (const char *)(unsigned int)Instance);
              goto LABEL_228;
            }
          }
          v14 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **))v14)(
                       a2,
                       &unk_18051B6A0,
                       &GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8,
                       &v66);
          LODWORD(v70) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v15, (int *)&v70);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v15,
                (int *)&v70,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xE7u,
                v55,
                v57);
              Instance = (int)v70;
            }
            if ( Instance < 0 )
            {
              v13 = 231LL;
              goto LABEL_194;
            }
          }
          v16 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v65);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, struct IInspectable **))v16)(
                       a2,
                       &unk_18051B690,
                       &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                       &v65);
          LODWORD(v70) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v17, (int *)&v70);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v17,
                (int *)&v70,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xEAu,
                v55,
                v57);
              Instance = (int)v70;
            }
            if ( Instance < 0 )
            {
              v13 = 234LL;
              goto LABEL_194;
            }
          }
        }
        (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), v68);
        v18 = *((_QWORD *)this + 23);
        if ( v18 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, struct ITabViewManager *))(*(_QWORD *)v18 + 32LL))(v18, v63);
          LODWORD(v70) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v70);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v19,
                (int *)&v70,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xF1u,
                v55,
                v57);
              Instance = (int)v70;
            }
            if ( Instance < 0 )
            {
              v20 = 241LL;
LABEL_138:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v20,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                (const char *)(unsigned int)Instance);
LABEL_175:
              Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v68);
LABEL_228:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v65);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v63);
              goto LABEL_229;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
          Instance = VirtualDesktopGroupedViewsEventListener_CreateInstance(
                       v63,
                       v66,
                       v65,
                       *((struct IVirtualDesktopManagerPrivate **)this + 15),
                       *((struct IVirtualDesktopPinnedAppsPrivate **)this + 20),
                       *((struct IVirtualDesktopGroupedViewsPolicy **)this + 25),
                       *((struct IVirtualDesktopLock **)this + 13),
                       (const struct _GUID *)v60,
                       (void **)this + 24);
          LODWORD(v70) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v21, (int *)&v70);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v21,
                (int *)&v70,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0xFAu,
                v55,
                v57);
              Instance = (int)v70;
            }
            if ( Instance < 0 )
            {
              v20 = 250LL;
              goto LABEL_138;
            }
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 152LL))(
                     *((_QWORD *)this + 15),
                     v61);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v22, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v22,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFCu,
              v55,
              v57);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v20 = 252LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 48LL))(
                     *((_QWORD *)this + 14),
                     v61);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v23, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v23,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFDu,
              v55,
              v57);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v20 = 253LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 24LL))(
                     *((_QWORD *)this + 18),
                     v61);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v24, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v24,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFEu,
              v55,
              v57);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v20 = 254LL;
            goto LABEL_138;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 24LL))(
                     *((_QWORD *)this + 17),
                     v61);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v25, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v25,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0xFFu,
              v55,
              v57);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v20 = 255LL;
            goto LABEL_138;
          }
        }
        v26 = *((_QWORD *)this + 20);
        if ( v26 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 72LL))(v26, v61);
          LODWORD(v70) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v27, (int *)&v70);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v27,
                (int *)&v70,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
                0x103u,
                v55,
                v57);
              Instance = (int)v70;
            }
            if ( Instance < 0 )
            {
              v20 = 259LL;
              goto LABEL_138;
            }
          }
        }
        v71 = 0LL;
        Instance = CVirtualDesktopApplicationViewEventListener_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopSwitchAnimator **)this + 16),
                     *((struct IVirtualDesktopForegroundPolicy **)this + 14),
                     *((struct IVirtualDesktopWindowMoveManager **)this + 17),
                     *((struct IVirtualDesktopPinnedAppsPrivate **)this + 20),
                     *((struct IVirtualDesktopLock **)this + 13),
                     (const struct _GUID *)v59,
                     &v71);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v28, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v28,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x10Eu,
              v56,
              v58);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v29 = 270LL;
LABEL_155:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v29,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
            goto LABEL_173;
          }
        }
        Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v67 + 24LL))(
                     v67,
                     v71,
                     (char *)this + 208);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v30, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v30,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x111u,
              v56,
              v58);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v29 = 273LL;
            goto LABEL_155;
          }
        }
        v62 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
        Instance = VirtualDesktopTabletModeNotificationListener_CreateInstance(
                     *((struct IVirtualDesktopTabletModePolicy **)this + 19),
                     a2,
                     v31,
                     &v62);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v32, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v32,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x117u,
              v56,
              v58);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v33 = 279LL;
LABEL_172:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v33,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
LABEL_173:
            v35 = v71;
            if ( v71 )
            {
              v71 = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL))(v35);
            }
            goto LABEL_175;
          }
        }
        Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v64 + 72LL))(
                     v64,
                     v62,
                     (char *)this + 212);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v34, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v34,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x119u,
              v56,
              v58);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v33 = 281LL;
            goto LABEL_172;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
        v36 = v71;
        if ( v71 )
        {
          v71 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v36 + 16LL))(v36);
        }
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v68);
        Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v64 + 24LL))(v64, &v72);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v37, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v37,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x11Eu,
              v56,
              v58);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v13 = 286LL;
            goto LABEL_194;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 19) + 32LL))(
                     *((_QWORD *)this + 19),
                     v72,
                     0LL);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v38, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v38,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x11Fu,
              v56,
              v58);
            Instance = (int)v70;
          }
          if ( Instance < 0 )
          {
            v13 = 287LL;
            goto LABEL_194;
          }
        }
        if ( *((_QWORD *)this + 21) )
        {
          v62 = 0LL;
          v40 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
          v41 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, void **))v40)(
                  a2,
                  &unk_18051B670,
                  &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                  &v62);
          Instance = v41;
          if ( v41 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x124,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v41);
LABEL_206:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
            goto LABEL_228;
          }
          v71 = 0LL;
          v42 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
          v43 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, void **))v42)(
                  a2,
                  &unk_18051B680,
                  &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
                  &v71);
          Instance = v43;
          if ( v43 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x127,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v43);
LABEL_205:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
            goto LABEL_206;
          }
          v70 = 0LL;
          v44 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v70);
          v45 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, unsigned __int64 **))v44)(
                  a2,
                  &SID_IImmersiveMonitorService,
                  &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                  &v70);
          Instance = v45;
          if ( v45 < 0 )
          {
            v46 = 298LL;
LABEL_204:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v46,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v45);
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v70);
            goto LABEL_205;
          }
          v56 = v70;
          v45 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, void *))(**((_QWORD **)this + 21) + 24LL))(
                  *((_QWORD *)this + 21),
                  v62,
                  v61,
                  v71);
          Instance = v45;
          if ( v45 < 0 )
          {
            v46 = 300LL;
            goto LABEL_204;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v70);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
        }
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::GetImpl'::`2'::impl,
          1u,
          v39);
        v62 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
        Instance = CVirtualDesktopHolographicViewTransitionNotification_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopLock **)this + 13),
                     v47,
                     &v62);
        LODWORD(v70) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v48, (int *)&v70);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)v70;
        }
        if ( Instance >= 0 )
          goto LABEL_216;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v48,
            (int *)&v70,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x135u,
            v56,
            v58);
          Instance = (int)v70;
        }
        if ( Instance >= 0 )
        {
LABEL_216:
          v71 = 0LL;
          v49 = a2->lpVtbl->QueryService;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
          Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, void **))v49)(
                       a2,
                       &GUID_5090de35_ed23_43be_9714_586c5041026a,
                       &GUID_5090de35_ed23_43be_9714_586c5041026a,
                       &v71);
          LODWORD(v70) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v50, (int *)&v70);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)v70;
          }
          if ( Instance >= 0 )
            goto LABEL_224;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v50,
              (int *)&v70,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x139u,
              v56,
              v58);
            Instance = (int)v70;
          }
          if ( Instance >= 0 )
          {
LABEL_224:
            v53 = (*(__int64 (__fastcall **)(void *, void *, char *))(*(_QWORD *)v71 + 24LL))(
                    v71,
                    v62,
                    (char *)this + 216);
            Instance = v53;
            if ( v53 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
              Instance = 0;
              goto LABEL_228;
            }
            v51 = (unsigned int)v53;
            v52 = 314LL;
          }
          else
          {
            v51 = (unsigned int)Instance;
            v52 = 313LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v52,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)v51);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v71);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x135,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            (const char *)(unsigned int)Instance);
        }
        goto LABEL_206;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v71) >= 0 )
      {
        switch ( (_DWORD)v71 )
        {
          case 2:
            Instance = -2023406815;
            goto LABEL_47;
          case 3:
            Instance = -2023406814;
            goto LABEL_47;
          case 4:
            Instance = -2147418094;
            goto LABEL_47;
          case 5:
            Instance = -2147022986;
LABEL_47:
            LODWORD(v70) = Instance;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_49;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v71) >= 0 )
    {
      switch ( (_DWORD)v71 )
      {
        case 2:
          Instance = -2023406815;
          goto LABEL_29;
        case 3:
          Instance = -2023406814;
          goto LABEL_29;
        case 4:
          Instance = -2147418094;
          goto LABEL_29;
        case 5:
          Instance = -2147022986;
LABEL_29:
          LODWORD(v70) = Instance;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
    (const char *)(unsigned int)Instance);
LABEL_231:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
  return (unsigned int)Instance;
}
