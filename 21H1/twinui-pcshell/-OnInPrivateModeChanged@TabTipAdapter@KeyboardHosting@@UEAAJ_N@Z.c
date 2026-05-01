/*
 * XREFs of ?OnInPrivateModeChanged@TabTipAdapter@KeyboardHosting@@UEAAJ_N@Z @ 0x18033DA00
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180341DD8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInPrivateModeChanged(
        KeyboardHosting::TabTipAdapter *this,
        char a2,
        unsigned int a3)
{
  const WCHAR *v4; // rax
  HSTRING Reserved1; // rbx
  int v6; // eax
  const WCHAR *v8; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-50h] BYREF
  HSTRING v10; // [rsp+40h] [rbp-38h]
  HSTRING_HEADER v11; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = L"true";
  if ( !a2 )
    v4 = L"false";
  v8 = v4;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, &v8, a3)[1].Reserved.Reserved1;
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsInPrivateMode", 0x10u, 0xFu);
  v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(
         (KeyboardHosting::TabTipAdapter *)((char *)this - 8),
         v10,
         Reserved1);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x69F,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
  return 0LL;
}
