/*
 * XREFs of ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18034BE54
 * Callers:
 *     _lambda_e127833a80797c5d08a14d2b9986789f_::operator() @ 0x1800AFC2C (_lambda_e127833a80797c5d08a14d2b9986789f_--operator().c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18034C138 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020628 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008E202 (WINRT_WindowsGetStringRawBuffer.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800938C8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A89D0 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??B_Atomic_bool@std@@QEBA_NXZ @ 0x18021F4BC (--B_Atomic_bool@std@@QEBA_NXZ.c)
 *     ??$call@AEAV_lambda_1ffd59018855fb89b3c56dc6f41cf375_@@@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_1ffd59018855fb89b3c56dc6f41cf375_@@@Z @ 0x180345C28 (--$call@AEAV_lambda_1ffd59018855fb89b3c56dc6f41cf375_@@@-$factory_cache_entry@UKnownOnScreenInpu.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x180348DE8 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18034BB30 (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFram.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18034BD38 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x18034C418 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
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
  HSTRING v13; // rbx
  int TitleBar; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct IApplicationFrameTitleBar *v18; // rbx
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HSTRING string; // [rsp+68h] [rbp+38h] BYREF
  struct IApplicationFrameTitleBar *v22; // [rsp+70h] [rbp+40h] BYREF
  struct IApplicationFrameTitleBar *v23; // [rsp+78h] [rbp+48h] BYREF

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
  if ( !*((_BYTE *)a2 + 33) && !std::_Atomic_bool::operator bool((_BYTE *)a2 + 32) )
  {
    if ( !KBViewInfo::IsAppDefaultView(a2) )
    {
      v10 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)a2, v9);
      if ( v10 && !SetPropW(v10, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAF3,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)0x80004005LL);
        return 2147500037LL;
      }
      string = 0LL;
      v23 = 0LL;
      AppFrameWrapper = TouchKeyboardExperienceManager::CreateAppFrameWrapper(
                          this,
                          (struct IApplicationFrameWrapper **)&string);
      if ( AppFrameWrapper < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2808LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)AppFrameWrapper);
        __debugbreak();
      }
      v13 = string;
      TitleBar = TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(
                   retaddr,
                   (struct IApplicationFrameWrapper *)string,
                   &v23);
      if ( TitleBar < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2809LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)TitleBar);
        __debugbreak();
      }
      v15 = (*(__int64 (__fastcall **)(HSTRING, __int64))(*(_QWORD *)v13 + 48LL))(v13, 3LL);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2812LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      v16 = (*(__int64 (__fastcall **)(HSTRING, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, *(_QWORD *)a2);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2813LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 568LL))(*(_QWORD *)a2, 1LL);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          2816LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      v18 = v23;
      if ( *((struct IApplicationFrameTitleBar **)a2 + 2) != v23 )
      {
        v22 = v23;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
        v22 = (struct IApplicationFrameTitleBar *)*((_QWORD *)a2 + 2);
        *((_QWORD *)a2 + 2) = v18;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      }
      Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=((__int64 *)a2 + 1, (__int64 *)&string);
      *((_BYTE *)a2 + 33) = 1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
    }
    if ( *(_QWORD *)a2 && !std::_Atomic_bool::operator bool((_BYTE *)a2 + 32) )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 392LL))(*(_QWORD *)a2, 3LL);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB0D,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
    }
  }
  return 0LL;
}
