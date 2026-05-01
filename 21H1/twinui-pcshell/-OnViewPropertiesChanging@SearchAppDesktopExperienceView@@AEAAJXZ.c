/*
 * XREFs of ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180019664
 * Callers:
 *     ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180019420 (-OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 *     ?ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x18007FEF0 (-ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 * Callees:
 *     ??1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800199C4 (--1CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180019C70 (-StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019DE4 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001A660 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001AEA0 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18001C47C (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18001C4C4 (-UpdateSuggestionsShowing@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002AC60 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BFI@AA @ 0x1800CB920 (--_9IPropertyValue@Foundation@Windows@@$BFI@AA.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BMI@AA @ 0x1800CEA5C (--_9IPropertyValue@Foundation@Windows@@$BMI@AA.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall SearchAppDesktopExperienceView::OnViewPropertiesChanging(SearchAppDesktopExperienceView *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // r14d
  HSTRING v7; // rbx
  int PropVal; // ebx
  int v9; // eax
  int v10; // eax
  HSTRING v11; // rbx
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  HSTRING v15; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  bool v20; // di
  int v21; // eax
  bool IsViewVisible; // al
  int v23; // eax
  struct Windows::Foundation::IPropertyValue *v25; // [rsp+28h] [rbp-E0h] BYREF
  struct Windows::Foundation::IPropertyValue *v26; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v31; // [rsp+70h] [rbp-98h]
  _QWORD v32[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v32,
    "CortanaExperienceManager_OnViewPropertiesChanging");
  v32[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v32);
  v28 = 0LL;
  v2 = *((_QWORD *)this + 19);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 64LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v4 = v3(v2, &v28);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A3,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      (int)v25);
  }
  else
  {
    v27 = v28;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
    v6 = *((_DWORD *)this + 32);
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WindowMode", 0xBu, 0xAu);
    v7 = v31;
    LODWORD(v25) = 0;
    v26 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
                v7,
                &v26);
    if ( PropVal >= 0 )
    {
      v9 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}(v26, &v25);
      PropVal = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v9,
          (int)v25);
      else
        PropVal = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
    v10 = (int)v25;
    if ( PropVal < 0 )
      v10 = 0;
    *((_DWORD *)this + 32) = v10;
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ViewMode", 9u, 8u);
    v11 = v31;
    LODWORD(v25) = 0;
    v26 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
    v12 = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
            v11,
            &v26);
    if ( v12 >= 0 )
    {
      v13 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}(v26, &v25);
      v12 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v13,
          (int)v25);
      else
        v12 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
    v14 = (int)v25;
    if ( v12 < 0 )
      v14 = 0;
    *((_DWORD *)this + 31) = v14;
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ClippingRect", 0xDu, 0xCu);
    v15 = v31;
    v29 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v25);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
                v15,
                &v25) >= 0 )
    {
      v16 =  Windows::Foundation::IPropertyValue::`vcall'{200,{flat}}(v25, &v29);
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v16,
          (int)v25);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v25);
    v17 = (int)*(float *)&v29;
    *((_DWORD *)this + 33) = (int)*(float *)&v29;
    v18 = (int)*((float *)&v29 + 1);
    *((_DWORD *)this + 34) = (int)*((float *)&v29 + 1);
    *((_DWORD *)this + 35) = (int)(float)((float)v17 + *((float *)&v29 + 2));
    *((_DWORD *)this + 36) = (int)(float)((float)v18 + *((float *)&v29 + 3));
    v19 = *((_DWORD *)this + 32);
    v20 = 0;
    if ( v6 == 9 )
    {
      if ( v19 != 9 )
      {
        v20 = 1;
        *((_BYTE *)this + 212) = 0;
      }
    }
    else if ( v19 == 9 )
    {
      *((_BYTE *)this + 212) = 1;
    }
    SearchAppDesktopExperienceView::UpdateSuggestionsShowing(this, v19 != 3);
    v21 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 19) + 48LL))(
            *((_QWORD *)this + 19),
            (char *)this + 180);
    v5 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C3,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v21,
        (int)v25);
    }
    else
    {
      IsViewVisible = SearchAppDesktopExperienceView::IsViewVisible(this);
      v23 = SearchAppDesktopExperienceView::PositionCortanaWindow(this, IsViewVisible, v20);
      if ( v23 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3C5,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
          (const char *)(unsigned int)v23,
          (int)v25);
      wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v32);
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging::~CortanaExperienceManager_OnViewPropertiesChanging((CortanaProactiveTelemetry::CortanaExperienceManager_OnViewPropertiesChanging *)v32);
  return v5;
}
