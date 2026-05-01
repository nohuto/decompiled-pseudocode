/*
 * XREFs of ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18035DB08
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x18006F130 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034F530 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035CE38 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800684D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     WINRT_WindowsCreateStringReference @ 0x18008E88E (WINRT_WindowsCreateStringReference.c)
 *     ??$wait_get@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhstring@1@AEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@@Z @ 0x18009679C (--$wait_get@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA-AUhstr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B23E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ??$call@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@Z @ 0x1801E76A0 (--$call@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@-$factory_cache_entry@UAppExtensionCatal.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801E8088 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?Symbols@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1801E88E8 (-Symbols@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatic.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IngestInputApp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180362D00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IngestInputApp@@@details@wil@@QEAAX_NW4Re.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KeyboardHosting::TabTipAdapter::GetDefaultInputAppId(char *a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 result; // rax
  DWORD pcbData; // [rsp+40h] [rbp-268h] BYREF
  HSTRING *p_string; // [rsp+48h] [rbp-260h] BYREF
  HSTRING v9; // [rsp+50h] [rbp-258h] BYREF
  __int64 v10; // [rsp+58h] [rbp-250h] BYREF
  HSTRING string; // [rsp+60h] [rbp-248h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-240h] BYREF
  _WORD pvData[264]; // [rsp+80h] [rbp-228h] BYREF

  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      1u,
      3u);
    memset_0(pvData, 0, 0x208uLL);
    pcbData = 520;
    if ( RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Input", L"InputAppId", 2u, 0LL, pvData, &pcbData)
      || pcbData <= 2 )
    {
      LOBYTE(v2) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_IngestInputApp>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_IngestInputApp>::GetImpl'::`2'::impl,
        v2);
      WINRT_WindowsCreateStringReference(L"com.microsoft.windows.input.app", 0x1Fu, &hstringHeader, &string);
      p_string = &string;
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::call<_lambda_3174d6f28dd4ff66a1abe0cc6653db52_ &>(
        v4,
        (__int64)&v10,
        &p_string);
      v5 = winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Symbols(
             &v10,
             &p_string);
      winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>((__int64)&v9, v5);
      if ( p_string )
        winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&p_string);
      if ( v9 )
      {
        winrt::hstring::operator std::basic_string_view<unsigned short>(&v9, (PCWSTR *)&string);
        std::wstring::assign(a1, string, (unsigned __int64)hstringHeader.Reserved.Reserved1);
      }
      else
      {
        std::wstring::assign(a1, L"MicrosoftWindows.Client.CBS_cw5n1h2txyewy!InputApp", 0x32uLL);
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
      if ( v10 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v10);
    }
    else
    {
      v3 = -1LL;
      do
        ++v3;
      while ( pvData[v3] );
      std::wstring::assign(a1, pvData, v3);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147500037LL;
  }
  return result;
}
