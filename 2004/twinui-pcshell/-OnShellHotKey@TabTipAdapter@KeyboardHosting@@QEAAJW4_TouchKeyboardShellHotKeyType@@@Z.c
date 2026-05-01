/*
 * XREFs of ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180360DC4
 * Callers:
 *     ?OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18034ECE0 (-OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180350A50 (-ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18034AF68 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18034B30C (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z @ 0x1803509B4 (-ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z.c)
 *     ??$ShellHotKeyRequestReceived@IPEAGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEAPEAGAEA_N0@Z @ 0x180358574 (--$ShellHotKeyRequestReceived@IPEAGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180361460 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180363478 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellHotKey(__int64 a1, int a2, __int64 a3, const char *a4)
{
  TouchKeyboardExperienceManager *v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  unsigned int v9; // edi
  int ShouldShowEmojiTipsOnHotKey; // eax
  HSTRING v11; // rbx
  int v12; // eax
  HSTRING v13; // rbx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  bool v18[4]; // [rsp+20h] [rbp-78h] BYREF
  int v19; // [rsp+24h] [rbp-74h] BYREF
  int InputAppState; // [rsp+28h] [rbp-70h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-58h] BYREF
  HSTRING v24; // [rsp+58h] [rbp-40h]
  HSTRING_HEADER v25; // [rsp+60h] [rbp-38h] BYREF
  HSTRING v26; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v22 = a1;
  InputAppState = a2;
  TouchKeyboardExperienceManager::GetForegroundAppId(a1, &pv, a3, a4);
  InputAppState = TouchKeyboardExperienceManager::GetInputAppState(*(_QWORD *)(a1 + 64));
  v22 = (__int64)pv;
  v19 = a2;
  TouchKeyboardExperienceTelemetryLogger::ShellHotKeyRequestReceived<unsigned int,unsigned short *,bool &,unsigned int>(
    &v19,
    &v22,
    (char *)(a1 + 449),
    &InputAppState);
  v9 = 2;
  if ( a2 == 1 )
  {
    v18[0] = 0;
    ShouldShowEmojiTipsOnHotKey = TouchKeyboardExperienceManager::ShouldShowEmojiTipsOnHotKey(v6, v18, v7, v8);
    if ( ShouldShowEmojiTipsOnHotKey < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x76F,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)ShouldShowEmojiTipsOnHotKey);
    if ( v18[0] )
    {
      v24 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
      v11 = v24;
      v26 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"ShowEmojiPanelTips", 0x13u, 0x12u);
      v12 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v26, v11);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x772,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v12);
    }
    else
    {
      v26 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v25, L"0", 2u, 1u);
      v13 = v26;
      v24 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShowEmojiPanelTips", 0x13u, 0x12u);
      v14 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v24, v13);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x776,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v14);
    }
  }
  else if ( a2 == 2 )
  {
    v9 = 4;
  }
  else
  {
    v9 = 3;
    if ( a2 != 3 )
    {
      v15 = -2147024809;
      v16 = 1923LL;
      goto LABEL_20;
    }
  }
  v15 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v9, 4LL, 1LL);
  if ( v15 < 0 )
  {
    v16 = 1927LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v15);
    if ( pv )
      CoTaskMemFree(pv);
    return (unsigned int)v15;
  }
  if ( pv )
    CoTaskMemFree(pv);
  return 0LL;
}
