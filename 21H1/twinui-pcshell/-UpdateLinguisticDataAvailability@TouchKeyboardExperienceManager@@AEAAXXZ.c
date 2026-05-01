/*
 * XREFs of ?UpdateLinguisticDataAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180334730
 * Callers:
 *     wistd::__function::__func__lambda_881d65feb2be65a54f7a8ffb02cc23bd__void___cdecl(void)_::operator() @ 0x180326B30 (wistd--__function--__func__lambda_881d65feb2be65a54f7a8ffb02cc23bd__void___cdecl(void)_--operato.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18032DAB0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180341DD8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateLinguisticDataAvailability(TouchKeyboardExperienceManager *this)
{
  int PolicyInt; // eax
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

  v8 = 1;
  PolicyInt = PolicyManager_GetPolicyInt(L"TextInput", L"AllowLinguisticDataCollection", &v8);
  if ( PolicyInt < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x50A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)PolicyInt);
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  if ( v8 == 1 )
  {
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"1", 2u, 1u);
    v6 = v12;
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"LinguisticDataCollectionEnabled",
      0x20u,
      0x1Fu);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v10, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x514,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v4 = v10;
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"LinguisticDataCollectionEnabled", 0x20u, 0x1Fu);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v12, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x510,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
}
