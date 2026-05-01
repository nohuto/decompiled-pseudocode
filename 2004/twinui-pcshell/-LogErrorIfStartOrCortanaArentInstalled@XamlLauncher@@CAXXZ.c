/*
 * XREFs of ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x18032CFE0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___::Run @ 0x18032E340 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___--Run.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180097680 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801956C0 (--$GetActivationFactory@V-$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Mi.c)
 *     ??$SearchNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x18032AE38 (--$SearchNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ??$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x18032AF6C (--$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ??$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x18032B06C (--$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
void XamlLauncher::LogErrorIfStartOrCortanaArentInstalled(void)
{
  __int64 v0; // rbx
  __int64 (__fastcall *v1)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, _BYTE *); // rdi
  _BYTE v7[4]; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h]

  v9 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Application",
    0x2Du,
    0x2Cu);
  if ( (int)Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IApplicationStatics>>(
              v11,
              &v9) >= 0 )
  {
    v7[0] = 0;
    v0 = v9;
    v1 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v9 + 184LL);
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
      0x38u,
      0x37u);
    v8 = v1(v0, 0LL, v11, v7);
    if ( v8 < 0 || !v7[0] )
      StartWindowTelemetry::ShellExperienceHostNotInstalled<long const &>(&v8);
    v2 = v9;
    v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v9 + 184LL);
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy!App",
      0x3Cu,
      0x3Bu);
    v8 = v3(v2, 0LL, v11, v7);
    if ( v8 < 0 || !v7[0] )
      StartWindowTelemetry::StartMenuExperienceHostNotInstalled<long const &>(&v8);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
      1u,
      v4);
    v5 = v9;
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v9 + 184LL);
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI",
      0x31u,
      0x30u);
    v8 = v6(v5, 0LL, v11, v7);
    if ( v8 < 0 || !v7[0] )
      StartWindowTelemetry::SearchNotInstalled<long const &>(&v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
}
