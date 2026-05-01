/*
 * XREFs of ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E0614
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800DCFA0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800DCFA0.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800DE510 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800DE510.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800DF240 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009C094 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAAX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18009E4F4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@details@wil@@QEAA_NXZ @ 0x1800DF150 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@details@wil@.c)
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF570 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF80C (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z @ 0x1800E0464 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x1800E054C (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650@@@details@wil@@QEAA_NXZ @ 0x1800E0878 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108971@@@details@wil@@QEAA_NXZ @ 0x1800E08B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReaso.c)
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800E1CF8 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ?IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ @ 0x1800E1E70 (-IsCTAEnabled@ShellFeedsAvailabilityHelpers@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsAvailability::WriteFeedsAvailabilityToRegistry(
        ShellFeedsAvailability *this,
        _BYTE *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  char v6; // si
  char IsEnabled; // al
  bool v8; // r9
  ShellFeedsAvailabilityHelpers *v9; // rcx
  bool IsCTAEnabled; // al
  ShellFeedsExperienceHelpers *v11; // rcx
  unsigned int *v12; // r8
  unsigned __int8 v13; // di
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  __int64 v21; // r8
  const unsigned __int16 *v22; // r8
  BYTE *v23; // rdx
  BYTE *v24; // rdx
  bool v26[4]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 v27[2]; // [rsp+24h] [rbp-2Ch] BYREF
  BYTE *lpData[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h]
  unsigned __int64 v30; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v6 = (char)this;
  *a3 = 0;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650>::__private_IsEnabled(
                &`wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650>::GetImpl'::`2'::impl,
                a2,
                a3,
                a4);
  v8 = v26[0];
  if ( IsEnabled )
    v8 = 0;
  v26[0] = v8;
  v29 = 0LL;
  v30 = 7LL;
  LOWORD(lpData[0]) = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCTACompliance>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsCTACompliance>::GetImpl'::`2'::impl) )
  {
    if ( !v6 )
    {
      v17 = ShellFeedsAvailability::CheckFeedsAvailability((char *)v26, (char *)lpData);
      v18 = v17;
      if ( v17 < 0 )
      {
        v19 = 211LL;
        goto LABEL_39;
      }
    }
    v17 = ShellFeedsAvailability::CheckFeedsServerAvailability(v6, v26, a2, (char *)lpData);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 213LL;
      goto LABEL_39;
    }
    goto LABEL_18;
  }
  IsCTAEnabled = ShellFeedsAvailabilityHelpers::IsCTAEnabled(v9);
  v13 = IsCTAEnabled;
  if ( v6 )
    goto LABEL_11;
  if ( IsCTAEnabled )
  {
    *(_DWORD *)v27 = 0;
    if ( ShellFeedsExperienceHelpers::GetShellFeedsRegKey(v11, v27, v12) < 0 || *(_DWORD *)v27 != 1 )
    {
      *a3 = v13;
      goto LABEL_20;
    }
  }
  v17 = ShellFeedsAvailability::CheckFeedsAvailability((char *)v26, (char *)lpData);
  v18 = v17;
  if ( v17 >= 0 )
  {
LABEL_11:
    v17 = ShellFeedsAvailability::CheckFeedsServerAvailability(v6, v26, a2, (char *)lpData);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = 194LL;
      goto LABEL_39;
    }
LABEL_18:
    v13 = v26[0];
    if ( v26[0] )
    {
      v20 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl,
        v20 != 0,
        1u);
    }
LABEL_20:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650>::__private_IsEnabled(
                            &`wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315650>::GetImpl'::`2'::impl,
                            v14,
                            v15,
                            v16) )
    {
      if ( v13 || !*a2 )
      {
        v17 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"IsFeedsAvailable", (const unsigned __int16 *)v13, v21);
        v18 = v17;
        if ( v17 < 0 )
        {
          v19 = 229LL;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v17 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"IsFeedsAvailable", (const unsigned __int16 *)v13, v21);
      v18 = v17;
      if ( v17 < 0 )
      {
        v19 = 234LL;
        goto LABEL_39;
      }
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108971>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FeedsEmptyDisabledReasonFix_33108971>::GetImpl'::`2'::impl) )
    {
      if ( !v13 && v29 )
      {
        v23 = (BYTE *)lpData;
        if ( v30 >= 8 )
          v23 = lpData[0];
        v17 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"DisabledReason", v23, v22);
        v18 = v17;
        if ( v17 < 0 )
        {
          v19 = 241LL;
          goto LABEL_39;
        }
      }
    }
    else if ( !v13 )
    {
      v24 = (BYTE *)lpData;
      if ( v30 >= 8 )
        v24 = lpData[0];
      v17 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(L"DisabledReason", v24, v22);
      v18 = v17;
      if ( v17 < 0 )
      {
        v19 = 248LL;
        goto LABEL_39;
      }
    }
    v18 = 0;
    goto LABEL_41;
  }
  v19 = 192LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
    (const char *)(unsigned int)v17);
LABEL_41:
  std::wstring::_Tidy_deallocate(lpData);
  return v18;
}
