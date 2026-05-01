/*
 * XREFs of ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF570
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E0614 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800684D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NXZ @ 0x1800A7858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NXZ.c)
 *     ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x1800E0048 (-GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo.c)
 *     ?IsAuditMode@@YA_NXZ @ 0x1800E0120 (-IsAuditMode@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E0248 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_N.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x1800E054C (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800E1FAC (-IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800E2034 (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsFeedsAppInstalled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800ECFA8 (-IsFeedsAppInstalled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800ED5B0 (-IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1801AFBBC (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1801FA1DC (-IsUserOOBE@@YA_NXZ.c)
 */

__int64 __fastcall ShellFeedsAvailability::CheckFeedsAvailability(char *a1, char *a2)
{
  unsigned __int8 *v4; // rdx
  unsigned __int8 *v5; // rdx
  int IsFeedsAppInstalled; // esi
  __int64 v7; // rdx
  char v9; // al
  char v10; // al
  char v11; // al
  bool v12; // al
  char v13; // cl
  char v14; // al
  char v15; // cl
  bool v16; // al
  char v17; // cl
  bool v18; // al
  ShellFeedsAvailabilityHelpers *v19; // rcx
  unsigned __int8 IsTempProfile; // al
  bool v21; // si
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  int v24; // eax
  unsigned int v25; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v27; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0;
  std::wstring::assign(a2, &szAgent, 0LL);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::GetImpl'::`2'::impl) )
  {
    v27 = 0;
    IsFeedsAppInstalled = ShellFeedsAvailabilityHelpers::IsFeedsAppInstalled((ShellFeedsAvailabilityHelpers *)&v27, v4);
    if ( IsFeedsAppInstalled < 0 )
    {
      v7 = 30LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
        (const char *)(unsigned int)IsFeedsAppInstalled);
      return (unsigned int)IsFeedsAppInstalled;
    }
    v9 = v27;
    *a1 = v27;
    if ( !v9 )
      std::wstring::assign(a2, L"AppNotInstalled", 0xFuLL);
    if ( *a1 )
    {
      v27 = 0;
      IsFeedsAppInstalled = ShellFeedsAvailabilityHelpers::IsFeedsAllowedOnSKU(
                              (ShellFeedsAvailabilityHelpers *)&v27,
                              v5);
      if ( IsFeedsAppInstalled < 0 )
      {
        v7 = 40LL;
        goto LABEL_4;
      }
      v10 = v27;
      *a1 = v27;
      if ( !v10 )
        std::wstring::assign(a2, L"NotAllowedOnSKU", 0xFuLL);
      if ( *a1 )
      {
        v27 = 0;
        IsFeedsAppInstalled = ShellFeedsAvailabilityHelpers::IsEnterprisePolicyEnabled(
                                (ShellFeedsAvailabilityHelpers *)&v27,
                                v5);
        if ( IsFeedsAppInstalled < 0 )
        {
          v7 = 51LL;
          goto LABEL_4;
        }
        v11 = v27;
        *a1 = v27;
        if ( !v11 )
          std::wstring::assign(a2, L"DisabledByPolicy", 0x10uLL);
      }
    }
    if ( *a1 )
    {
      v12 = IsShellLauncherEnabledForCurrentUser();
      v13 = !v12;
      *a1 = !v12;
      if ( v12 )
      {
        std::wstring::assign(a2, L"ShellLauncherDisabledForCurrentUser", 0x23uLL);
        v13 = *a1;
      }
      if ( v13 )
      {
        if ( GetSystemMetrics(67) )
        {
          v14 = 1;
          v15 = 0;
        }
        else
        {
          v14 = 0;
          v15 = 1;
        }
        *a1 = v15;
        if ( v14 )
        {
          std::wstring::assign(a2, L"DisabledInSafeMode", 0x12uLL);
          v15 = *a1;
        }
        if ( v15 )
        {
          v16 = IsAuditMode();
          v17 = !v16;
          *a1 = !v16;
          if ( v16 )
          {
            std::wstring::assign(a2, L"DisabledInAuditMode", 0x13uLL);
            v17 = *a1;
          }
          if ( v17 )
          {
            v18 = IsUserOOBE();
            LOBYTE(v19) = !v18;
            *a1 = !v18;
            if ( v18 )
            {
              std::wstring::assign(a2, L"DisabledForOOBE", 0xFuLL);
              LOBYTE(v19) = *a1;
            }
            if ( (_BYTE)v19 )
            {
              IsTempProfile = ShellFeedsAvailabilityHelpers::IsTempProfile(v19);
              *a1 = IsTempProfile == 0;
              if ( IsTempProfile )
                std::wstring::assign(a2, L"DisabledForTempUserProfile", 0x1AuLL);
            }
          }
        }
      }
    }
    LOBYTE(v5) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::GetImpl'::`2'::impl,
      v5,
      0LL);
    v21 = (unsigned __int8)GetInstalledBrowserChannelInfo() != 0;
    v24 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
            L"IsAnaheimEdgeInstalled",
            (const unsigned __int16 *)v21,
            v22,
            v23);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailability.cpp",
        (const char *)(unsigned int)v24);
      return v25;
    }
    if ( *a1 )
    {
      *a1 = v21;
      if ( !v21 )
        std::wstring::assign(a2, L"AnaheimEdgeNotInstalled", 0x17uLL);
    }
  }
  return 0LL;
}
