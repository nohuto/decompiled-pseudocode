/*
 * XREFs of ?InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800B0C38
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034F530 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803502DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureCursorMovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180350464 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GestureCursorMovement@@@details@wil@@QEAA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180350564 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SuggestionUIOnDesktop@@@details@wil@@QEAA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803505F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180363478 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=48
void __fastcall TouchKeyboardExperienceManager::InitializeShellPreferencesDesktop(TouchKeyboardExperienceManager *this)
{
  int PolicyInt; // eax
  unsigned int v3; // r8d
  const WCHAR *v4; // rax
  KeyboardHosting::TabTipAdapter *v5; // rdi
  HSTRING Reserved1; // rbx
  int v7; // eax
  KeyboardHosting::TabTipAdapter *v8; // rdi
  HSTRING v9; // rbx
  int v10; // eax
  KeyboardHosting::TabTipAdapter *v11; // rdi
  HSTRING v12; // rbx
  int v13; // eax
  KeyboardHosting::TabTipAdapter *v14; // rdi
  HSTRING v15; // rbx
  int v16; // eax
  KeyboardHosting::TabTipAdapter *v17; // rdi
  HSTRING v18; // rbx
  int v19; // eax
  KeyboardHosting::TabTipAdapter *v20; // rdi
  HSTRING v21; // rbx
  int v22; // eax
  KeyboardHosting::TabTipAdapter *v23; // rdi
  HSTRING v24; // rbx
  int v25; // eax
  KeyboardHosting::TabTipAdapter *v26; // rdi
  HSTRING v27; // rbx
  int v28; // eax
  KeyboardHosting::TabTipAdapter *v29; // rdi
  HSTRING v30; // rbx
  int v31; // eax
  KeyboardHosting::TabTipAdapter *v32; // rdi
  HSTRING v33; // rbx
  int v34; // eax
  KeyboardHosting::TabTipAdapter *v35; // rdi
  HSTRING v36; // rbx
  int v37; // eax
  KeyboardHosting::TabTipAdapter *v38; // rdi
  HSTRING v39; // rbx
  int v40; // eax
  KeyboardHosting::TabTipAdapter *v41; // rdi
  HSTRING v42; // rbx
  int v43; // eax
  KeyboardHosting::TabTipAdapter *v44; // rdi
  HSTRING v45; // rbx
  int v46; // eax
  KeyboardHosting::TabTipAdapter *v47; // rdi
  HSTRING v48; // rbx
  int v49; // eax
  KeyboardHosting::TabTipAdapter *v50; // rdi
  HSTRING v51; // rbx
  int v52; // eax
  __int64 v53; // rdx
  KeyboardHosting::TabTipAdapter *v54; // rdi
  HSTRING v55; // rbx
  int v56; // eax
  __int64 v57; // r8
  int v58; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v59; // [rsp+28h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v61; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v62; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v63; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v58 = 0;
  PolicyInt = PolicyManager_GetPolicyInt(L"Handwriting", L"PanelDefaultModeDocked", &v58);
  if ( PolicyInt < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F0,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)PolicyInt);
  v4 = L"floating";
  if ( v58 )
    v4 = L"docked";
  v59 = v4;
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v62, &v59, v3)[1].Reserved.Reserved1;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"DefaultHandWritingPositionType",
    0x1Fu,
    0x1Eu);
  v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v61, Reserved1);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
  v9 = v61;
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"SkipCheckCanWideSizeFit", 0x18u, 0x17u);
  v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, v63, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5F9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  v11 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v12 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SkipCheckCanFullSizeFit", 0x18u, 0x17u);
  v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v11, v61, v12);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5FA,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  v14 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v15 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ChsNarrowLayoutsFollowVelocity",
    0x1Fu,
    0x1Eu);
  v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v14, v61, v15);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5FD,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  v17 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v18 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Paste_Disabled", 0xFu, 0xEu);
  v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v17, v61, v18);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x600,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
  v20 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"0", 2u, 1u);
  v21 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MultiUserAware", 0xFu, 0xEu);
  v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(v20, v61, v21);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x603,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
  v23 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v24 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AddInputPanelGutter", 0x14u, 0x13u);
  v25 = KeyboardHosting::TabTipAdapter::SetShellPreference(v23, v61, v24);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x606,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v25);
  v26 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v27 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"NarrowTwoRowCandidateBar", 0x19u, 0x18u);
  v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v26, v61, v27);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x609,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v28);
  v29 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v30 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"FloatingCandidateWindowEnabled",
    0x1Fu,
    0x1Eu);
  v31 = KeyboardHosting::TabTipAdapter::SetShellPreference(v29, v61, v30);
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x60C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v31);
  v32 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"0", 2u, 1u);
  v33 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuppressPositionSettingWhenOnly1ItemIsAvailable",
    0x30u,
    0x2Fu);
  v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(v32, v61, v33);
  if ( v34 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x60E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v34);
  v35 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v36 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"NarrowScalingEnabled", 0x15u, 0x14u);
  v37 = KeyboardHosting::TabTipAdapter::SetShellPreference(v35, v61, v36);
  if ( v37 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x611,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v37);
  v38 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v39 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WideScalingEnabled", 0x13u, 0x12u);
  v40 = KeyboardHosting::TabTipAdapter::SetShellPreference(v38, v61, v39);
  if ( v40 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x614,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v40);
  v41 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v42 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsToolBarEnabled", 0x11u, 0x10u);
  v43 = KeyboardHosting::TabTipAdapter::SetShellPreference(v41, v61, v42);
  if ( v43 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x617,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v43);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetImpl'::`2'::impl,
    0LL);
  v44 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"ms-settings:regionlanguage", 0x1Bu, 0x1Au);
  v45 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"KeyboardSettingsLauncherTargetUri",
    0x22u,
    0x21u);
  v46 = KeyboardHosting::TabTipAdapter::SetShellPreference(v44, v61, v45);
  if ( v46 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x61F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v46);
  v47 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v48 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"KeyboardSettingsDevice_IsTypingLauncherPageAvailable",
    0x35u,
    0x34u);
  v49 = KeyboardHosting::TabTipAdapter::SetShellPreference(v47, v61, v48);
  if ( v49 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x620,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v49);
  v50 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"wide", 5u, 4u);
  v51 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultKeyboardMode", 0x14u, 0x13u);
  v52 = KeyboardHosting::TabTipAdapter::SetShellPreference(v50, v61, v51);
  if ( v52 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x623,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v52);
  LOBYTE(v53) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
    v53);
  v54 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v63 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v62, L"1", 2u, 1u);
  v55 = v63;
  v61 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SupportsThemeChanges", 0x15u, 0x14u);
  v56 = KeyboardHosting::TabTipAdapter::SetShellPreference(v54, v61, v55);
  if ( v56 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x628,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v56);
  LOBYTE(v57) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SuggestionUIOnDesktop>::GetImpl'::`2'::impl,
    0LL,
    v57);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GestureCursorMovement>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GestureCursorMovement>::GetImpl'::`2'::impl,
    0LL);
}
