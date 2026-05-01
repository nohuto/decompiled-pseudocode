/*
 * XREFs of ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18032A304
 * Callers:
 *     _lambda_77ff76289f7bbfebb9a2250fa767bd8c_::operator() @ 0x1800A19B0 (_lambda_77ff76289f7bbfebb9a2250fa767bd8c_--operator().c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18032A63C (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008BF68 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008D902 (WINRT_WindowsGetStringRawBuffer.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BC00 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SkipInitializationIfDestroyed_30958024@@@details@wil@@QEAA_NXZ @ 0x1800A485C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SkipInitializationIfDes.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x1800C0B14 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011C428 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B_Atomic_bool@std@@QEBA_NXZ @ 0x1801FC324 (--B_Atomic_bool@std@@QEBA_NXZ.c)
 *     ??$call@AEAV_lambda_1ffd59018855fb89b3c56dc6f41cf375_@@@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_1ffd59018855fb89b3c56dc6f41cf375_@@@Z @ 0x180324098 (--$call@AEAV_lambda_1ffd59018855fb89b3c56dc6f41cf375_@@@-$factory_cache_entry@UKnownOnScreenInpu.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x180327298 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x180329FE0 (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFram.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18032A1E8 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x18032A91C (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2)
{
  __int64 v4; // rcx
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v9; // rdx
  HWND v10; // rax
  int AppFrameWrapper; // eax
  wil::details::in1diag3 *v13; // rcx
  HSTRING v14; // rbx
  int TitleBar; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct IApplicationFrameTitleBar *v19; // rbx
  int v20; // eax
  int v21; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HSTRING string; // [rsp+68h] [rbp+38h] BYREF
  struct IApplicationFrameTitleBar *v24; // [rsp+70h] [rbp+40h] BYREF
  struct IApplicationFrameTitleBar *v25; // [rsp+78h] [rbp+48h] BYREF

  KBViewInfo::InitializeIds(a2);
  winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<_lambda_1ffd59018855fb89b3c56dc6f41cf375_ &>(
    v4,
    (__int64)&string);
  StringRawBuffer = WINRT_WindowsGetStringRawBuffer(string, 0LL);
  v6 = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 14), 0LL);
  LOBYTE(StringRawBuffer) = CompareStringOrdinal(v6, -1, StringRawBuffer, -1, 1) == 2;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&string);
  if ( (_BYTE)StringRawBuffer )
  {
    v7 = *((_DWORD *)a2 + 26);
    *((_DWORD *)this + 179) = v7;
    v8 = *((_QWORD *)this + 86);
    *(_DWORD *)(v8 + 488) = v7;
    *(_DWORD *)(*(_QWORD *)(v8 + 104) + 612LL) = v7;
  }
  if ( *((_BYTE *)a2 + 33) || std::_Atomic_bool::operator bool((_BYTE *)a2 + 32) )
    return 0LL;
  if ( !KBViewInfo::IsAppDefaultView(a2) )
  {
    v10 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)a2, v9);
    if ( v10 && !SetPropW(v10, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB22,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    string = 0LL;
    v25 = 0LL;
    AppFrameWrapper = TouchKeyboardExperienceManager::CreateAppFrameWrapper(
                        this,
                        (struct IApplicationFrameWrapper **)&string);
    v13 = retaddr;
    if ( AppFrameWrapper < 0 )
    {
LABEL_28:
      wil::details::in1diag3::FailFast_Hr(
        v13,
        2855LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)AppFrameWrapper);
      __debugbreak();
    }
    v14 = string;
    TitleBar = TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(
                 retaddr,
                 (struct IApplicationFrameWrapper *)string,
                 &v25);
    if ( TitleBar < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2856LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)TitleBar);
      __debugbreak();
    }
    v16 = (*(__int64 (__fastcall **)(HSTRING, __int64))(*(_QWORD *)v14 + 48LL))(v14, 3LL);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2859LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    v17 = (*(__int64 (__fastcall **)(HSTRING, _QWORD))(*(_QWORD *)v14 + 104LL))(v14, *(_QWORD *)a2);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2860LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 568LL))(*(_QWORD *)a2, 1LL);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2863LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_27:
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2885LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v21);
      goto LABEL_28;
    }
    v19 = v25;
    if ( *((struct IApplicationFrameTitleBar **)a2 + 2) != v25 )
    {
      v24 = v25;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
      v24 = (struct IApplicationFrameTitleBar *)*((_QWORD *)a2 + 2);
      *((_QWORD *)a2 + 2) = v19;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    }
    Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=((__int64 *)a2 + 1, (__int64 *)&string);
    *((_BYTE *)a2 + 33) = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SkipInitializationIfDestroyed_30958024>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SkipInitializationIfDestroyed_30958024>::GetImpl'::`2'::impl) )
  {
    if ( Microsoft::WRL::operator!=<IApplicationViewCollection>(a2)
      && !std::_Atomic_bool::operator bool((_BYTE *)a2 + 32) )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 392LL))(*(_QWORD *)a2, 3LL);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB3E,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v20);
    }
    return 0LL;
  }
  if ( Microsoft::WRL::operator!=<IApplicationViewCollection>(a2) )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 392LL))(*(_QWORD *)a2, 3LL);
    if ( v21 < 0 )
      goto LABEL_27;
  }
  return 0LL;
}
