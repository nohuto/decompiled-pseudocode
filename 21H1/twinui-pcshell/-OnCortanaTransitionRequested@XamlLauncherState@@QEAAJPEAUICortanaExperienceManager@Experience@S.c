/*
 * XREFs of ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18004DA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180011700 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004DB34 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18004DC9C (-ShowSearchOrCortana@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18005FC14 (--$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180085550 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncherState::OnCortanaTransitionRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  HSTRING string[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  char v13; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v4 = (_DWORD *)((char *)this + 64);
  LODWORD(string[0]) = *((_DWORD *)this + 16);
  string[1] = (HSTRING)this;
  v12 = *(_OWORD *)string;
  v13 = 1;
  switch ( LODWORD(string[0]) )
  {
    case 1:
      *v4 = 18;
      goto LABEL_7;
    case 2:
      *v4 = 19;
      goto LABEL_7;
    case 3:
      *v4 = 20;
      goto LABEL_7;
    case 4:
      *v4 = 21;
      goto LABEL_7;
  }
  if ( LODWORD(string[0]) != 5 )
  {
    if ( LODWORD(string[0]) == 7 )
    {
      string[0] = 0LL;
      v9 = Microsoft::WRL::Wrappers::HString::Set(
             (Microsoft::WRL::Wrappers::HString *)string,
             L"StartMode=AppTransition",
             0x17u);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v9 = XamlLauncherState::ShowSearchOrCortana(this, string[0]);
        v6 = v9;
        if ( v9 >= 0 )
        {
          WindowsDeleteString(string[0]);
          goto LABEL_7;
        }
        v10 = 2082LL;
      }
      else
      {
        v10 = 2081LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v9,
        (int)string[0]);
      WindowsDeleteString(string[0]);
      goto LABEL_8;
    }
    if ( LODWORD(string[0]) != 12 )
      goto LABEL_7;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"StartMode=AppTransition",
      0x18u,
      0x17u);
    string[0] = v15;
    v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 125, string);
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_7;
    v8 = 2098LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v5,
      (int)string[0]);
    goto LABEL_8;
  }
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"StartMode=AppTransition", 0x18u, 0x17u);
  v5 = XamlLauncherState::ShowCortanaFromOpenStart(this, v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 2088LL;
    goto LABEL_21;
  }
LABEL_7:
  v6 = 0;
LABEL_8:
  v13 = 0;
  StartWindowTelemetry::OnCortanaTransitionRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v12,
    v4);
  return v6;
}
