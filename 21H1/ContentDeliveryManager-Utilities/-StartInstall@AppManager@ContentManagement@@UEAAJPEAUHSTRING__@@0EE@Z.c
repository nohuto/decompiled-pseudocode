/*
 * XREFs of ?StartInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE@Z @ 0x180057ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005A78C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::StartInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        char a5)
{
  HSTRING v5; // rdi
  HSTRING v6; // rsi
  __int64 v9; // r9

  v5 = a3;
  v6 = a2;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    a2,
    a3);
  LOBYTE(v9) = a4;
  return (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, HSTRING, __int64, char, _QWORD, _QWORD))(*(_QWORD *)this + 128LL))(
           this,
           v6,
           v5,
           v9,
           a5,
           0LL,
           0LL);
}
