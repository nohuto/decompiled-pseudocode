/*
 * XREFs of ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180157F50
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180150590 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180035300 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameFactory@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1801440E8 (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 *     ??$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIFallbackWindow@@@Z @ 0x18015CBC8 (--$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIF.c)
 *     ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x18015E06C (--$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvi.c)
 *     ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180161B9C (-s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x180162424 (--$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSys.c)
 *     ??0CRotationManagerSync@@QEAA@XZ @ 0x180164194 (--0CRotationManagerSync@@QEAA@XZ.c)
 *     ??0CImmersiveApplicationTransitionHelper@@QEAA@XZ @ 0x180164CD4 (--0CImmersiveApplicationTransitionHelper@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x18016572C (--$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveAppli.c)
 *     ??$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCAppViewManager@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x180166204 (--$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@.c)
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1801735A4 (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180174D54 (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x18046BFC8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C03C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_InitializeIAMSubcomponents(IUnknown *punkSite)
{
  IUnknown *v2; // rsi
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  CCriticalFailureHandler *v5; // rcx
  int Instance; // ebx
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  CCriticalFailureHandler *v9; // rcx
  CCriticalFailureHandler *v10; // rcx
  IUnknown **v11; // rsi
  const struct _GUID *v12; // rcx
  CCriticalFailureHandler *v13; // rcx
  CCriticalFailureHandler *v14; // rcx
  CCriticalFailureHandler *v15; // rcx
  CCriticalFailureHandler *v16; // rcx
  CRotationManagerSync *v17; // rax
  CRotationManagerSync *v18; // rax
  struct IPrivilegedPresentationOperations *v19; // rcx
  CCriticalFailureHandler *v20; // rcx
  CImmersiveApplicationTransitionHelper *v21; // rax
  CCriticalFailureHandler *v22; // rcx
  CImmersiveApplicationTransitionHelper *v23; // rax
  CImmersiveApplicationTransitionHelper *v24; // rsi
  CCriticalFailureHandler *v25; // rcx
  CCriticalFailureHandler *v26; // rcx
  CCriticalFailureHandler *v27; // rcx
  CRealmActivationHistory *v28; // rax
  CRealmActivationHistory *v29; // rax
  CRealmActivationHistory *v30; // r14
  const struct _GUID *v31; // rdx
  unsigned __int64 *v33; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v34; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall ***v35)(_QWORD, GUID *, IUnknown *); // [rsp+30h] [rbp-28h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, IUnknown *); // [rsp+38h] [rbp-20h] BYREF
  __int64 v37[3]; // [rsp+40h] [rbp-18h] BYREF
  IUnknown *lpVtbl; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v39; // [rsp+A8h] [rbp+50h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+58h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, IUnknown *); // [rsp+B8h] [rbp+60h] BYREF

  v2 = punkSite + 72;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[72]);
  Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)&v2->lpVtbl);
  LODWORD(lpVtbl) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v5, (int *)&lpVtbl);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
    goto LABEL_8;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)&lpVtbl,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1363u,
      v33,
      v34);
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
  {
LABEL_8:
    v39 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
    lpVtbl = (IUnknown *)((unsigned __int64)&punkSite[24] & -(__int64)(punkSite != 0LL));
    v39 = 0LL;
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    Instance = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveWindowManager,IImmersiveWindowManager,IIAMServiceProvider * &>(
                 &v40,
                 &lpVtbl);
    if ( Instance >= 0 )
      Instance = (**v40)(v40, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &v39);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    LODWORD(lpVtbl) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v7, (int *)&lpVtbl);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
      goto LABEL_17;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        (int *)&lpVtbl,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x1369u,
        v33,
        v34);
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
    {
LABEL_17:
      Instance = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v2->lpVtbl->QueryInterface + 5))(
                   v2->lpVtbl,
                   v39);
      LODWORD(lpVtbl) = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v8, (int *)&lpVtbl);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
        goto LABEL_24;
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v8,
          (int *)&lpVtbl,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x136Cu,
          v33,
          v34);
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
      {
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[71]);
        punkSite[71].lpVtbl = 0LL;
        v41 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
        Instance = Microsoft::WRL::Details::MakeAndInitialize<CFallbackWindow,IFallbackWindow,>(&v41);
        if ( Instance >= 0 )
          Instance = (**v41)(v41, &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee, punkSite + 71);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
        LODWORD(lpVtbl) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v9, (int *)&lpVtbl);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
          goto LABEL_33;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v9,
            (int *)&lpVtbl,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x1373u,
            v33,
            v34);
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
        {
LABEL_33:
          Instance = IUnknown_SetSite((IUnknown *)punkSite[71].lpVtbl, punkSite);
          LODWORD(lpVtbl) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v10, (int *)&lpVtbl);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
            goto LABEL_40;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v10,
              (int *)&lpVtbl,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x1376u,
              v33,
              v34);
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
          {
LABEL_40:
            v11 = (IUnknown **)&punkSite[66];
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[66]);
            Instance = CImmersiveMode::s_CreateInstance(v12, (void **)&punkSite[66].lpVtbl);
            LODWORD(lpVtbl) = Instance;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v13, (int *)&lpVtbl);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
              goto LABEL_47;
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v13,
                (int *)&lpVtbl,
                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                0x137Eu,
                v33,
                v34);
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
            {
LABEL_47:
              Instance = IUnknown_SetSite(*v11, punkSite);
              LODWORD(lpVtbl) = Instance;
              if ( !CRVPrivate::cfhImmersiveShellStartup )
              {
                CCriticalFailureHandler::GetFakeFailure(v14, (int *)&lpVtbl);
                CRVPrivate::cfhImmersiveShellStartup = 1;
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
                goto LABEL_54;
              if ( Instance != -2147024882 && Instance != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v14,
                  (int *)&lpVtbl,
                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  0x1381u,
                  v33,
                  v34);
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
              {
LABEL_54:
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[67]);
                lpVtbl = *v11;
                punkSite[67].lpVtbl = 0LL;
                v35 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
                Instance = Microsoft::WRL::Details::MakeAndInitialize<CClassicWindowManager,IClassicWindowManagerPrivate,IImmersiveSystemModeInternal * &>(
                             &v35,
                             &lpVtbl);
                if ( Instance >= 0 )
                  Instance = (**v35)(v35, &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee, punkSite + 67);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
                LODWORD(lpVtbl) = Instance;
                if ( !CRVPrivate::cfhImmersiveShellStartup )
                {
                  CCriticalFailureHandler::GetFakeFailure(v15, (int *)&lpVtbl);
                  CRVPrivate::cfhImmersiveShellStartup = 1;
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                  goto LABEL_63;
                if ( Instance != -2147024882 && Instance != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v15,
                    (int *)&lpVtbl,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    0x1389u,
                    v33,
                    v34);
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                {
LABEL_63:
                  Instance = IUnknown_SetSite((IUnknown *)punkSite[67].lpVtbl, punkSite);
                  LODWORD(lpVtbl) = Instance;
                  if ( !CRVPrivate::cfhImmersiveShellStartup )
                  {
                    CCriticalFailureHandler::GetFakeFailure(v16, (int *)&lpVtbl);
                    CRVPrivate::cfhImmersiveShellStartup = 1;
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                    goto LABEL_70;
                  if ( Instance != -2147024882 && Instance != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v16,
                      (int *)&lpVtbl,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      0x138Cu,
                      v33,
                      v34);
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                  {
LABEL_70:
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[68]);
                    punkSite[68].lpVtbl = 0LL;
                    v17 = (CRotationManagerSync *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
                    if ( !v17
                      || (v18 = CRotationManagerSync::CRotationManagerSync(v17),
                          v19 = (CRotationManagerSync *)((char *)v18 + 72),
                          !v18) )
                    {
                      v19 = 0LL;
                    }
                    lpVtbl = (IUnknown *)v19;
                    if ( v19 )
                      Instance = (**(__int64 (__fastcall ***)(struct IPrivilegedPresentationOperations *, GUID *, IUnknown *))v19)(
                                   v19,
                                   &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                                   punkSite + 68);
                    else
                      Instance = -2147024882;
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
                    LODWORD(lpVtbl) = Instance;
                    if ( !CRVPrivate::cfhImmersiveShellStartup )
                    {
                      CCriticalFailureHandler::GetFakeFailure(v20, (int *)&lpVtbl);
                      CRVPrivate::cfhImmersiveShellStartup = 1;
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                      goto LABEL_83;
                    if ( Instance != -2147024882 && Instance != -2144862209 )
                    {
                      CCriticalFailureHandler::HandleFailure(
                        v20,
                        (int *)&lpVtbl,
                        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        0x1394u,
                        v33,
                        v34);
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                    {
LABEL_83:
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[69]);
                      punkSite[69].lpVtbl = 0LL;
                      v21 = (CImmersiveApplicationTransitionHelper *)operator new(
                                                                       0x68uLL,
                                                                       (const struct std::nothrow_t *)&std::nothrow);
                      if ( v21
                        && (v23 = CImmersiveApplicationTransitionHelper::CImmersiveApplicationTransitionHelper(v21),
                            (v24 = v23) != 0LL) )
                      {
                        Instance = (**(__int64 (__fastcall ***)(CImmersiveApplicationTransitionHelper *, GUID *, IUnknown *))v23)(
                                     v23,
                                     &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                                     punkSite + 69);
                        (*(void (__fastcall **)(CImmersiveApplicationTransitionHelper *))(*(_QWORD *)v24 + 16LL))(v24);
                      }
                      else
                      {
                        Instance = -2147024882;
                      }
                      LODWORD(lpVtbl) = Instance;
                      if ( !CRVPrivate::cfhImmersiveShellStartup )
                      {
                        CCriticalFailureHandler::GetFakeFailure(v22, (int *)&lpVtbl);
                        CRVPrivate::cfhImmersiveShellStartup = 1;
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                        goto LABEL_94;
                      if ( Instance != -2147024882 && Instance != -2144862209 )
                      {
                        CCriticalFailureHandler::HandleFailure(
                          v22,
                          (int *)&lpVtbl,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          0x139Eu,
                          v33,
                          v34);
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                      {
LABEL_94:
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[74]);
                        lpVtbl = (IUnknown *)punkSite[69].lpVtbl;
                        punkSite[74].lpVtbl = 0LL;
                        v36 = 0LL;
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
                        Instance = Microsoft::WRL::Details::MakeAndInitialize<CCharmsWindowManager,ICharmWindowManagerInternal,IImmersiveApplicationTransitionHelper * &>(
                                     &v36,
                                     &lpVtbl);
                        if ( Instance >= 0 )
                          Instance = (**v36)(v36, &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee, punkSite + 74);
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
                        LODWORD(lpVtbl) = Instance;
                        if ( !CRVPrivate::cfhImmersiveShellStartup )
                        {
                          CCriticalFailureHandler::GetFakeFailure(v25, (int *)&lpVtbl);
                          CRVPrivate::cfhImmersiveShellStartup = 1;
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                          goto LABEL_103;
                        if ( Instance != -2147024882 && Instance != -2144862209 )
                        {
                          CCriticalFailureHandler::HandleFailure(
                            v25,
                            (int *)&lpVtbl,
                            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            0x13A5u,
                            v33,
                            v34);
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                        {
LABEL_103:
                          Instance = IUnknown_SetSite((IUnknown *)punkSite[74].lpVtbl, punkSite);
                          LODWORD(lpVtbl) = Instance;
                          if ( !CRVPrivate::cfhImmersiveShellStartup )
                          {
                            CCriticalFailureHandler::GetFakeFailure(v26, (int *)&lpVtbl);
                            CRVPrivate::cfhImmersiveShellStartup = 1;
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                            goto LABEL_110;
                          if ( Instance != -2147024882 && Instance != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              v26,
                              (int *)&lpVtbl,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x13A8u,
                              v33,
                              v34);
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                          {
LABEL_110:
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[75]);
                            lpVtbl = punkSite + 30;
                            punkSite[75].lpVtbl = 0LL;
                            v37[0] = 0LL;
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37);
                            Instance = Microsoft::WRL::Details::MakeAndInitialize<CAppViewManager,CAppViewManager,IImmersiveApplicationManagerInternal * &>(
                                         v37,
                                         &lpVtbl);
                            if ( Instance >= 0 )
                              Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, IUnknown *))v37[0])(
                                           v37[0],
                                           &GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee,
                                           punkSite + 75);
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37);
                            LODWORD(lpVtbl) = Instance;
                            if ( !CRVPrivate::cfhImmersiveShellStartup )
                            {
                              CCriticalFailureHandler::GetFakeFailure(v27, (int *)&lpVtbl);
                              CRVPrivate::cfhImmersiveShellStartup = 1;
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                              goto LABEL_119;
                            if ( Instance != -2147024882 && Instance != -2144862209 )
                            {
                              CCriticalFailureHandler::HandleFailure(
                                v27,
                                (int *)&lpVtbl,
                                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                0x13B0u,
                                v33,
                                v34);
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                            {
LABEL_119:
                              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[65]);
                              punkSite[65].lpVtbl = 0LL;
                              v28 = (CRealmActivationHistory *)operator new(
                                                                 0x1A0uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
                              if ( v28
                                && (v29 = CRealmActivationHistory::CRealmActivationHistory(
                                            v28,
                                            (struct IImmersiveApplicationManagerInternal *)&punkSite[30]),
                                    (v30 = v29) != 0LL) )
                              {
                                Instance = (**(__int64 (__fastcall ***)(CRealmActivationHistory *, GUID *, IUnknown *))v29)(
                                             v29,
                                             &GUID_a98c0472_db38_4f6d_ba6f_6bf60514f600,
                                             punkSite + 65);
                                (*(void (__fastcall **)(CRealmActivationHistory *))(*(_QWORD *)v30 + 16LL))(v30);
                                if ( Instance >= 0 )
                                {
                                  Instance = IUnknown_SetSite((IUnknown *)punkSite[65].lpVtbl, punkSite);
                                  if ( Instance >= 0 )
                                  {
                                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[76]);
                                    Instance = CApplicationFrameService_CreateInstance(
                                                 (struct IImmersiveApplicationManagerInternal *)&punkSite[30],
                                                 v31,
                                                 (void **)&punkSite[76].lpVtbl);
                                    if ( Instance >= 0 )
                                    {
                                      Instance = IUnknown_SetSite((IUnknown *)punkSite[76].lpVtbl, punkSite);
                                      if ( Instance >= 0 )
                                      {
                                        lpVtbl = (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
                                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[77]);
                                        Instance = Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
                                                     &punkSite[77].lpVtbl,
                                                     (struct IPrivilegedPresentationOperations **)&lpVtbl);
                                      }
                                    }
                                  }
                                }
                              }
                              else
                              {
                                Instance = -2147024882;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
  }
  return (unsigned int)Instance;
}
