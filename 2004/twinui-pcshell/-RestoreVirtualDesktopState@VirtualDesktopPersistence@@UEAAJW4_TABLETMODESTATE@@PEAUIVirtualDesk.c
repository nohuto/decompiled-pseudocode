/*
 * XREFs of ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180435C70
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002D050 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050BC0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180084D3C (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18019BDD4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?ReadPerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEAPEAXPEA_K@Z @ 0x180435B7C (-ReadPerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEAPEAXPEA_K@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x18046C6C8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C73C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall VirtualDesktopPersistence::RestoreVirtualDesktopState(
        VirtualDesktopPersistence *a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r15
  __int64 v8; // r12
  char v9; // di
  __int64 (__fastcall *v10)(__int64 *, __int64 *); // rbx
  CCriticalFailureHandler *v11; // rcx
  int v12; // ebx
  LPVOID *v13; // rdx
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  const WCHAR *v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rax
  CCriticalFailureHandler *v20; // rcx
  _QWORD *v21; // r15
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r12
  _QWORD *v24; // r14
  __int64 (__fastcall *v25)(__int64 *, _QWORD *, struct IVirtualDesktop **); // rbx
  CCriticalFailureHandler *v26; // rcx
  const unsigned __int16 *v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  WCHAR *v30; // r15
  struct IVirtualDesktop *v31; // rbx
  __int64 (__fastcall *v32)(struct IVirtualDesktop *, GUID *, __int64 *); // rdi
  int v33; // eax
  unsigned int v34; // r8d
  int v35; // ebx
  __int64 v36; // rbx
  __int64 (__fastcall *v37)(__int64, PVOID); // rdi
  HSTRING_HEADER *v38; // rax
  int v39; // eax
  __int64 (__fastcall *v40)(__int64 *, __int64, __int64, const WCHAR **); // rbx
  CCriticalFailureHandler *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  unsigned int v44; // edi
  void *v45; // rcx
  unsigned __int64 *v47; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v48; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v49; // [rsp+28h] [rbp-D8h]
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+44h] [rbp-BCh] BYREF
  struct IVirtualDesktop *v52; // [rsp+48h] [rbp-B8h] BYREF
  const WCHAR *v53; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v54; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-78h]
  unsigned __int64 v61; // [rsp+90h] [rbp-70h]
  _OWORD *v62; // [rsp+98h] [rbp-68h]
  _OWORD *v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  VirtualDesktopPersistence *v65; // [rsp+B0h] [rbp-50h]
  LPVOID pv; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v67; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int128 v69; // [rsp+D0h] [rbp-30h]
  HSTRING_HEADER v70; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v5 = a4;
  v68 = a4;
  v51 = a2;
  v65 = a1;
  v8 = a5;
  v59 = a5;
  v9 = 0;
  v56 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(*a3 + 224);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
  v12 = v10(a3, &v56);
  v50 = v12;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v52) >= 0 )
  {
    switch ( (_DWORD)v52 )
    {
      case 2:
        v12 = -2023406815;
        goto LABEL_11;
      case 3:
        v12 = -2023406814;
        goto LABEL_11;
      case 4:
        v12 = -2147418094;
        goto LABEL_11;
      case 5:
        v12 = -2147022986;
LABEL_11:
        v50 = v12;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_13:
  if ( v12 >= 0 )
    goto LABEL_19;
  if ( v12 != -2147024882 && v12 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v11,
      &v50,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      0x57u,
      v47,
      v48);
    v12 = v50;
  }
  if ( v12 >= 0 )
  {
LABEL_19:
    v54 = 0LL;
    v57 = 0LL;
    v13 = &v57;
    v49 = (unsigned __int64 *)&v57;
    LODWORD(v47) = 3;
    LOBYTE(v13) = 1;
    if ( (*(int (__fastcall **)(_QWORD *, LPVOID *, _QWORD, const wchar_t *))(**((_QWORD **)a1 + 2) + 24LL))(
           *((_QWORD **)a1 + 2),
           v13,
           0LL,
           L"VirtualDesktopIDs") >= 0 )
    {
      v14 = retaddr;
      if ( v60 )
      {
        v14 = retaddr;
        if ( (v60 & 0xF) == 0 )
        {
          v21 = v57;
          v62 = v57;
          v57 = 0LL;
          v63 = v62;
          v22 = v60 >> 4;
          v61 = v60 >> 4;
          v69 = *v62;
          v55 = 0LL;
          v49 = (unsigned __int64 *)&v55;
          LODWORD(v47) = 3;
          if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD, const wchar_t *))(**((_QWORD **)a1 + 2) + 24LL))(
                 *((_QWORD **)a1 + 2),
                 0LL,
                 0LL,
                 L"CurrentVirtualDesktop") >= 0 )
          {
            if ( v64 == 16 )
              v69 = *(_OWORD *)v55;
            else
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x6A,
                (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                (const char *)0x8000FFFFLL);
          }
          v23 = 0LL;
          if ( v22 )
          {
            v24 = v21;
            while ( 1 )
            {
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
                1u);
              v52 = 0LL;
              v25 = *(__int64 (__fastcall **)(__int64 *, _QWORD *, struct IVirtualDesktop **))(*a3 + 160);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
              v12 = v25(a3, v24, &v52);
              v50 = v12;
              if ( !CRVPrivate::cfhImmersiveShellStartup )
              {
                CCriticalFailureHandler::GetFakeFailure(v26, &v50);
                CRVPrivate::cfhImmersiveShellStartup = 1;
                v12 = v50;
              }
              if ( v12 < 0 )
              {
                if ( v12 != -2147024882 && v12 != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v26,
                    &v50,
                    L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                    0x75u,
                    v47,
                    v49);
                  v12 = v50;
                }
                if ( v12 < 0 )
                  break;
              }
              v29 = *v24 - v69;
              if ( *v24 == (_QWORD)v69 )
                v29 = v24[1] - *((_QWORD *)&v69 + 1);
              if ( !v29 )
                Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v54, (__int64 *)&v52);
              if ( (int)VirtualDesktopPersistence::ReadPerDesktopData(v65, v52, v27, v28, &pv, &v67) >= 0 )
              {
                v30 = (WCHAR *)pv;
                v53 = 0LL;
                CoTaskMemFree(0LL);
                v53 = v30;
                v58 = 0LL;
                if ( (v67 & 1) == 0 && v67 )
                {
                  v31 = v52;
                  v32 = **(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v52;
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
                  v33 = v32(v31, &GUID_4b27dbf1_5392_476b_ab37_f409943e0785, &v58);
                  v35 = v33;
                  if ( v33 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x85,
                      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                      (const char *)(unsigned int)v33);
                  if ( v35 >= 0 )
                  {
                    v36 = v58;
                    v37 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v58 + 24LL);
                    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v70, &v53, v34);
                    v39 = v37(v36, v38[1].Reserved.Reserved1);
                    if ( v39 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x87,
                        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                        (const char *)(unsigned int)v39);
                    v71 = 0LL;
                  }
                  v22 = v61;
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
                v53 = 0LL;
                CoTaskMemFree(v30);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
              ++v23;
              v24 += 2;
              if ( v23 >= v22 )
              {
                v21 = v62;
                goto LABEL_66;
              }
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x75,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v12);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
            v21 = v62;
          }
          else
          {
LABEL_66:
            if ( v54 )
              goto LABEL_77;
            v40 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, const WCHAR **))(*a3 + 240);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
            v12 = v40(a3, v56, 5LL, &v54);
            v50 = v12;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v41, &v50);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              v12 = v50;
            }
            if ( v12 >= 0 )
              goto LABEL_77;
            if ( v12 != -2147024882 && v12 != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v41,
                &v50,
                L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                0x99u,
                v47,
                v49);
              v12 = v50;
            }
            if ( v12 >= 0 )
            {
LABEL_77:
              v9 = 1;
              v43 = v55;
              v55 = 0LL;
              CoTaskMemFree(v43);
              v63 = 0LL;
              CoTaskMemFree(v21);
              v5 = v68;
              v8 = v59;
LABEL_24:
              v17 = v54;
              v53 = v54;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v53);
              if ( v51 == 1 )
              {
                v18 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 96LL))(v5, &v59);
                Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v53, v18);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v59);
                v17 = v53;
              }
              v19 = *a3;
              if ( v9 )
              {
                v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, const WCHAR *))(v19 + 168))(a3, v56, v17);
                v50 = v12;
                if ( CRVPrivate::cfhImmersiveShellStartup )
                {
LABEL_83:
                  if ( v12 >= 0 )
                    goto LABEL_104;
                  v44 = 175;
LABEL_99:
                  if ( v12 != -2147024882 && v12 != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v20,
                      &v50,
                      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                      v44,
                      v47,
                      v49);
                    v12 = v50;
                  }
                  if ( v12 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v44,
                      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
                      (const char *)(unsigned int)v12);
LABEL_105:
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v53);
                    goto LABEL_106;
                  }
LABEL_104:
                  (*(void (__fastcall **)(__int64, const WCHAR *))(*(_QWORD *)v8 + 40LL))(v8, v54);
                  v12 = 0;
                  goto LABEL_105;
                }
                if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v51) >= 0 )
                {
                  switch ( v51 )
                  {
                    case 2u:
                      v12 = -2023406815;
                      goto LABEL_81;
                    case 3u:
                      v12 = -2023406814;
                      goto LABEL_81;
                    case 4u:
                      v12 = -2147418094;
                      goto LABEL_81;
                    case 5u:
                      v12 = -2147022986;
LABEL_81:
                      v50 = v12;
                      break;
                  }
                }
                CRVPrivate::cfhImmersiveShellStartup = 1;
                goto LABEL_83;
              }
              v12 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR *))(v19 + 176))(a3, v17);
              v50 = v12;
              if ( CRVPrivate::cfhImmersiveShellStartup )
              {
LABEL_97:
                if ( v12 >= 0 )
                  goto LABEL_104;
                v44 = 179;
                goto LABEL_99;
              }
              if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v51) >= 0 )
              {
                switch ( v51 )
                {
                  case 2u:
                    v12 = -2023406815;
                    goto LABEL_95;
                  case 3u:
                    v12 = -2023406814;
                    goto LABEL_95;
                  case 4u:
                    v12 = -2147418094;
                    goto LABEL_95;
                  case 5u:
                    v12 = -2147022986;
LABEL_95:
                    v50 = v12;
                    break;
                }
              }
              CRVPrivate::cfhImmersiveShellStartup = 1;
              goto LABEL_97;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x99,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
              (const char *)(unsigned int)v12);
          }
          v42 = v55;
          v55 = 0LL;
          CoTaskMemFree(v42);
          v63 = 0LL;
          CoTaskMemFree(v21);
LABEL_106:
          v45 = v57;
          v57 = 0LL;
          CoTaskMemFree(v45);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
          goto LABEL_107;
        }
        v15 = 2147549183LL;
        v16 = 97LL;
      }
      else
      {
        v15 = 2147943568LL;
        v16 = 96LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v14,
        (void *)v16,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
        (const char *)v15);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v54, &v56);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
    (const char *)(unsigned int)v12);
LABEL_107:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
  return (unsigned int)v12;
}
