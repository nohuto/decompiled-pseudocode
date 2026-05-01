/*
 * XREFs of ?InitializeShellPreferencesHub@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800B1614
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034F530 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180363478 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=34
void __fastcall TouchKeyboardExperienceManager::InitializeShellPreferencesHub(TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapter *v2; // rdi
  HSTRING v3; // rbx
  int v4; // eax
  KeyboardHosting::TabTipAdapter *v5; // rdi
  HSTRING v6; // rbx
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
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v54; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER v55; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v56; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"floating", 9u, 8u);
  v3 = v54;
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"DefaultHandWritingPositionType", 0x1Fu, 0x1Eu);
  v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(v2, v56, v3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x646,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"1", 2u, 1u);
  v6 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SkipCheckCanWideSizeFit", 0x18u, 0x17u);
  v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v54, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x647,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"1", 2u, 1u);
  v9 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SkipCheckCanFullSizeFit", 0x18u, 0x17u);
  v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, v54, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x648,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  v11 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"1", 2u, 1u);
  v12 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Paste_Disabled", 0xFu, 0xEu);
  v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(v11, v54, v12);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x64B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  v14 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"0", 2u, 1u);
  v15 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MultiUserAware", 0xFu, 0xEu);
  v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v14, v54, v15);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x64E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  v17 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"1", 2u, 1u);
  v18 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AddInputPanelGutter", 0x14u, 0x13u);
  v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(v17, v54, v18);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x651,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
  v20 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"1", 2u, 1u);
  v21 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"FloatingCandidateWindowEnabled",
    0x1Fu,
    0x1Eu);
  v22 = KeyboardHosting::TabTipAdapter::SetShellPreference(v20, v54, v21);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x654,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
  v23 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"0", 2u, 1u);
  v24 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SuppressPositionSettingWhenOnly1ItemIsAvailable",
    0x30u,
    0x2Fu);
  v25 = KeyboardHosting::TabTipAdapter::SetShellPreference(v23, v54, v24);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x656,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v25);
  v26 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"1", 2u, 1u);
  v27 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"WideScalingEnabled", 0x13u, 0x12u);
  v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(v26, v54, v27);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x659,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v28);
  v29 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"1", 2u, 1u);
  v30 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsToolBarEnabled", 0x11u, 0x10u);
  v31 = KeyboardHosting::TabTipAdapter::SetShellPreference(v29, v54, v30);
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x65C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v31);
  v32 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"0", 2u, 1u);
  v33 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"KeyboardSettingsDevice_IsTypingLauncherPageAvailable",
    0x35u,
    0x34u);
  v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(v32, v54, v33);
  if ( v34 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x65E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v34);
  v35 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"wide", 5u, 4u);
  v36 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultKeyboardMode", 0x14u, 0x13u);
  v37 = KeyboardHosting::TabTipAdapter::SetShellPreference(v35, v54, v36);
  if ( v37 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x661,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v37);
  v38 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"0", 2u, 1u);
  v39 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SupportsThemeChanges", 0x15u, 0x14u);
  v40 = KeyboardHosting::TabTipAdapter::SetShellPreference(v38, v54, v39);
  if ( v40 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x664,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v40);
  v41 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"1", 2u, 1u);
  v42 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"IsNearCaretKeyboardAvailable",
    0x1Du,
    0x1Cu);
  v43 = KeyboardHosting::TabTipAdapter::SetShellPreference(v41, v54, v42);
  if ( v43 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x666,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v43);
  v44 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"3", 2u, 1u);
  v45 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"HandwritingScalingFactor", 0x19u, 0x18u);
  v46 = KeyboardHosting::TabTipAdapter::SetShellPreference(v44, v54, v45);
  if ( v46 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x667,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v46);
  v47 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"floating", 9u, 8u);
  v48 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"KeyboardLayoutPosition", 0x17u, 0x16u);
  v49 = KeyboardHosting::TabTipAdapter::SetShellPreference(v47, v54, v48);
  if ( v49 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x668,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v49);
  v50 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v56 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v55, L"0", 2u, 1u);
  v51 = v56;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"MultiUserAwareLocalSettingsEnabled",
    0x23u,
    0x22u);
  v52 = KeyboardHosting::TabTipAdapter::SetShellPreference(v50, v54, v51);
  if ( v52 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x669,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v52);
}
