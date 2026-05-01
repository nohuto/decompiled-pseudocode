/*
 * XREFs of ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E15FC
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800DE6C0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800DE6C0.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800DFC30 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800DFC30.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800E0920 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009D1D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAAX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18009F940 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wi.c)
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E0C40 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E0EDC (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z @ 0x1800E144C (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x1800E1534 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800E27C4 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ?IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ @ 0x1800E2884 (-IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsAvailability::WriteFeedsAvailabilityToRegistry(
        ShellFeedsAvailability *this,
        bool *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  char v6; // r14
  bool IsCTAEnabled; // al
  ShellFeedsExperienceHelpers *v8; // rcx
  unsigned int *v9; // r8
  unsigned __int8 v10; // di
  const unsigned __int16 *v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned __int8 IsEnabled; // al
  BYTE *v16; // rdx
  char v18[4]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 v19[2]; // [rsp+24h] [rbp-2Ch] BYREF
  BYTE *lpData[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h]
  unsigned __int64 v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v6 = (char)this;
  *a3 = 0;
  v18[0] = 0;
  v21 = 0LL;
  v22 = 7LL;
  LOWORD(lpData[0]) = 0;
  IsCTAEnabled = ShellFeedsAvailabilityHelpers::IsCTAEnabled(this);
  v10 = IsCTAEnabled;
  if ( !v6 )
  {
    if ( IsCTAEnabled )
    {
      *(_DWORD *)v19 = 0;
      if ( ShellFeedsExperienceHelpers::GetShellFeedsRegKey(v8, v19, v9) < 0 || *(_DWORD *)v19 != 1 )
      {
        *a3 = v10;
        goto LABEL_12;
      }
    }
    v12 = ShellFeedsAvailability::CheckFeedsAvailability(v18, (char *)lpData);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 175LL;
      goto LABEL_22;
    }
  }
  v12 = ShellFeedsAvailability::CheckFeedsServerAvailability(v6, v18, a2, (char *)lpData);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 177LL;
    goto LABEL_22;
  }
  v10 = v18[0];
  if ( !v18[0] )
    goto LABEL_13;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl,
    IsEnabled != 0,
    1u);
LABEL_12:
  if ( v10 )
    goto LABEL_14;
LABEL_13:
  if ( !*a2 )
  {
LABEL_14:
    v12 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
            L"IsFeedsAvailable",
            (const unsigned __int16 *)v10,
            (__int64)v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 196LL;
      goto LABEL_22;
    }
  }
  if ( v10 || !v21 )
    goto LABEL_23;
  v16 = (BYTE *)lpData;
  if ( v22 >= 8 )
    v16 = lpData[0];
  v12 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"DisabledReason", v16, v11);
  v13 = v12;
  if ( v12 >= 0 )
  {
LABEL_23:
    v13 = 0;
    goto LABEL_24;
  }
  v14 = 201LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
    (const char *)(unsigned int)v12);
LABEL_24:
  std::wstring::_Tidy_deallocate(lpData);
  return v13;
}
