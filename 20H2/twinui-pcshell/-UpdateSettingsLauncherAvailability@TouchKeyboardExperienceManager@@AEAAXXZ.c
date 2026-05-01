/*
 * XREFs of ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180355984
 * Callers:
 *     ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x18034EA40 (-OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034EAD0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x18034B95C (-IsAnyOOBE@@YA_NXZ.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x18034BC50 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180362BB8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x180477ED8 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(
        TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager *v2; // rcx
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
  int v8; // eax
  HSTRING_HEADER v9; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v10; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v12; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( (unsigned int)IsUserAssignedAccessSingleApp(-4LL)
    || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v2)
    || IsAnyOOBE()
    || IsPPIEdition() )
  {
    v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v9, L"0", 2u, 1u);
    v7 = v10;
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsSettingsLauncherAvailable",
      0x1Cu,
      0x1Bu);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v12, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x588,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v4 = v12;
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v9, L"IsSettingsLauncherAvailable", 0x1Cu, 0x1Bu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v10, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x58C,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v10 = 0LL;
    v12 = 0LL;
  }
}
