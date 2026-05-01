/*
 * XREFs of ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180354FA8
 * Callers:
 *     wistd::__function::__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_::operator() @ 0x180348670 (wistd--__function--__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_--operato.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034F530 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800447C8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x18034B3B8 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180363478 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall TouchKeyboardExperienceManager::UpdateDockedModeAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
  int v8; // eax
  KeyboardHosting::TabTipAdapter *v9; // rdi
  HSTRING v10; // rbx
  int v11; // eax
  KeyboardHosting::TabTipAdapter *v12; // rdi
  HSTRING v13; // rbx
  int v14; // eax
  KeyboardHosting::TabTipAdapter *v15; // rdi
  HSTRING v16; // rbx
  int v17; // eax
  KeyboardHosting::TabTipAdapter *v18; // rdi
  HSTRING v19; // rbx
  int v20; // eax
  KeyboardHosting::TabTipAdapter *v21; // rdi
  HSTRING v22; // rbx
  int v23; // eax
  KeyboardHosting::TabTipAdapter *v24; // rdi
  HSTRING v25; // rbx
  int v26; // eax
  KeyboardHosting::TabTipAdapter *v27; // rdi
  HSTRING v28; // rbx
  int v29; // eax
  KeyboardHosting::TabTipAdapter *v30; // rdi
  HSTRING v31; // rbx
  int v32; // eax
  int v33; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v35; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER v36; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v37; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v33 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"ForceTouchKeyboardDockedState",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v33);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4F6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  if ( v33 != 2 || IsPPIEdition() )
  {
    v18 = this[86];
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"1", 2u, 1u);
    v19 = v37;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_split_floating",
      0x2Du,
      0x2Cu);
    v20 = KeyboardHosting::TabTipAdapter::SetShellPreference(v18, v35, v19);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x503,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
    v21 = this[86];
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"1", 2u, 1u);
    v22 = v37;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_handwriting_floating",
      0x33u,
      0x32u);
    v23 = KeyboardHosting::TabTipAdapter::SetShellPreference(v21, v35, v22);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x504,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
    v24 = this[86];
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"1", 2u, 1u);
    v25 = v37;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_narrow_floating",
      0x2Eu,
      0x2Du);
    v26 = KeyboardHosting::TabTipAdapter::SetShellPreference(v24, v35, v25);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x505,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v26);
    v27 = this[86];
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"1", 2u, 1u);
    v28 = v37;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_wide_floating",
      0x2Cu,
      0x2Bu);
    v29 = KeyboardHosting::TabTipAdapter::SetShellPreference(v27, v35, v28);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x506,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v29);
    v30 = this[86];
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"1", 2u, 1u);
    v31 = v37;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_full_floating",
      0x2Cu,
      0x2Bu);
    v32 = KeyboardHosting::TabTipAdapter::SetShellPreference(v30, v35, v31);
    if ( v32 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x507,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v32);
  }
  else
  {
    v3 = this[86];
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v4 = v35;
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v36,
      L"KeyboardLayoutPositionEnabled_split_floating",
      0x2Du,
      0x2Cu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v37, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4FB,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = this[86];
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"0", 2u, 1u);
    v7 = v37;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_handwriting_floating",
      0x33u,
      0x32u);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v35, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4FC,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    v9 = this[86];
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"0", 2u, 1u);
    v10 = v37;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_narrow_floating",
      0x2Eu,
      0x2Du);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v9, v35, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4FD,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v12 = this[86];
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"0", 2u, 1u);
    v13 = v37;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_wide_floating",
      0x2Cu,
      0x2Bu);
    v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(v12, v35, v13);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4FE,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    v15 = this[86];
    v37 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v36, L"0", 2u, 1u);
    v16 = v37;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_full_floating",
      0x2Cu,
      0x2Bu);
    v17 = KeyboardHosting::TabTipAdapter::SetShellPreference(v15, v35, v16);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4FF,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
  }
}
