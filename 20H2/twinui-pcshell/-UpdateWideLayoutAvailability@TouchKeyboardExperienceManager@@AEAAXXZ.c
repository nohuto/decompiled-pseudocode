/*
 * XREFs of ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180355E94
 * Callers:
 *     wistd::__function::__func__lambda_c021a0adf15c0f9fcce0429322079dc8__void___cdecl(void)_::operator() @ 0x180347C70 (wistd--__function--__func__lambda_c021a0adf15c0f9fcce0429322079dc8__void___cdecl(void)_--operato.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034EAD0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x18034A958 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180362BB8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateWideLayoutAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  HSTRING v6; // rbx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v10; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER v11; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v12; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v8 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"TouchKeyboardWideModeAvailability",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v8);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x47C,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  v3 = this[86];
  if ( v8 == 2 )
  {
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v4 = v10;
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"KeyboardModeEnabled_wide", 0x19u, 0x18u);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v12, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x481,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"1", 2u, 1u);
    v6 = v12;
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_wide",
      0x19u,
      0x18u);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v10, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x485,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
}
