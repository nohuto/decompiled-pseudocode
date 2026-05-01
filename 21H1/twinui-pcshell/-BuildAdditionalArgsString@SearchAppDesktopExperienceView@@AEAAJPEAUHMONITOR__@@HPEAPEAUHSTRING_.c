/*
 * XREFs of ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x18004E270
 * Callers:
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18004E07C (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001B67C (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18001BB7C (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x18004E72C (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ?GetHideFileExtensionsEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18004E790 (-GetHideFileExtensionsEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18004E840 (-GetColorPrevalenceEnabled@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x18004E8F0 (-GetAppsUseLightTheme@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18004E9A0 (-GetStuckPlace@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SearchAppDesktopExperienceView::BuildAdditionalArgsString(
        SearchAppDesktopExperienceView *this,
        ExperienceManagerUtils *a2,
        ExperienceManagerUtils *a3,
        HSTRING *newString)
{
  unsigned int v7; // ebx
  HSTRING v8; // rbx
  HRESULT v9; // eax
  SearchAppDesktopExperienceView *v10; // rcx
  unsigned int v11; // ebx
  bool ColorPrevalenceEnabled; // al
  const WCHAR *v13; // rcx
  unsigned int v14; // r8d
  HSTRING_HEADER *v15; // rax
  HRESULT v16; // eax
  HRESULT StuckPlace; // eax
  HSTRING v18; // rbx
  HRESULT v19; // eax
  HRESULT IsTraySearchBoxVisible; // eax
  const WCHAR *v21; // rax
  unsigned int v22; // r8d
  HSTRING_HEADER *v23; // rax
  HMONITOR v24; // rax
  HRESULT v25; // eax
  const WCHAR *v26; // rax
  unsigned int v27; // r8d
  HSTRING_HEADER *v28; // rax
  SearchAppDesktopExperienceView *v29; // rcx
  bool AppsUseLightTheme; // al
  const WCHAR *v31; // rcx
  unsigned int v32; // r8d
  HSTRING_HEADER *v33; // rax
  HRESULT v34; // eax
  SearchAppDesktopExperienceView *v35; // rcx
  bool HideFileExtensionsEnabled; // al
  unsigned int v37; // r8d
  const WCHAR *v38; // rcx
  HSTRING_HEADER *v39; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  int v45; // [rsp+20h] [rbp-E0h] BYREF
  const WCHAR *v46; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING v47; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v48; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string2; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING newStringa; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v51; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v52; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-98h] BYREF
  HSTRING_HEADER v55; // [rsp+70h] [rbp-90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-70h] BYREF
  HSTRING string1; // [rsp+A8h] [rbp-58h]
  WCHAR sourceString[40]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR v59[40]; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  *newString = 0LL;
  v7 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)a3, a2, (HMONITOR)a3);
  memset_0(sourceString, 0, 0x44uLL);
  _o__itow_s(v7, sourceString, 34LL, 10LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, sourceString) + 24);
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&SpeechTextInputHeight=", 0x18u, 0x17u);
  v9 = WindowsConcatString(string1, v8, &string);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47E,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v9,
      v45);
    goto LABEL_29;
  }
  newStringa = 0LL;
  ColorPrevalenceEnabled = SearchAppDesktopExperienceView::GetColorPrevalenceEnabled(v10);
  v13 = L"&ColorPrevalenceEnabled=true";
  if ( !ColorPrevalenceEnabled )
    v13 = L"&ColorPrevalenceEnabled=false";
  v46 = v13;
  WindowsDeleteString(newStringa);
  newStringa = 0LL;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, &v46, v14);
  v16 = WindowsConcatString(string, (HSTRING)v15[1].Reserved.Reserved1, &newStringa);
  v11 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x483,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v16,
      v45);
    goto LABEL_28;
  }
  string2 = 0LL;
  StuckPlace = SearchAppDesktopExperienceView::GetStuckPlace(this, (HMONITOR)a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v54);
  v11 = StuckPlace;
  if ( StuckPlace < 0 )
  {
    v41 = 1160LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)StuckPlace,
      v45);
    goto LABEL_27;
  }
  memset_0(v59, 0, 0x44uLL);
  _o__itow_s(v54, v59, 34LL, 10LL);
  WindowsDeleteString(string2);
  string2 = 0LL;
  v18 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, v59) + 24);
  string1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"&TaskbarOrientation=", 0x15u, 0x14u);
  StuckPlace = WindowsConcatString(string1, v18, &string2);
  v11 = StuckPlace;
  if ( StuckPlace < 0 )
  {
    v41 = 1163LL;
    goto LABEL_34;
  }
  v52 = 0LL;
  WindowsDeleteString(0LL);
  v52 = 0LL;
  v19 = WindowsConcatString(newStringa, string2, &v52);
  v11 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48E,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v19,
      v45);
    goto LABEL_26;
  }
  v48 = 0LL;
  IsTraySearchBoxVisible = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, (HMONITOR)a2, (bool *)&v45);
  v11 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    v42 = 1171LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible,
      v45);
    goto LABEL_25;
  }
  v21 = L"&SearchBoxInTaskbar=true";
  if ( !(_BYTE)v45 )
    v21 = L"&SearchBoxInTaskbar=false";
  v46 = v21;
  WindowsDeleteString(v48);
  v48 = 0LL;
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, &v46, v22);
  IsTraySearchBoxVisible = WindowsConcatString(v52, (HSTRING)v23[1].Reserved.Reserved1, &v48);
  v11 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    v42 = 1173LL;
    goto LABEL_38;
  }
  v47 = 0LL;
  v46 = 0LL;
  v24 = MonitorFromPoint(0LL, 1u);
  v25 = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v24, (bool *)&v45);
  v11 = v25;
  if ( v25 < 0 )
  {
    v43 = 1180LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v25,
      v45);
    goto LABEL_24;
  }
  v26 = L"&SearchBoxInTaskbarPrimaryMonitor=true";
  if ( !(_BYTE)v45 )
    v26 = L"&SearchBoxInTaskbarPrimaryMonitor=false";
  v46 = v26;
  WindowsDeleteString(v47);
  v47 = 0LL;
  v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, &v46, v27);
  v25 = WindowsConcatString(v48, (HSTRING)v28[1].Reserved.Reserved1, &v47);
  v11 = v25;
  if ( v25 < 0 )
  {
    v43 = 1182LL;
    goto LABEL_41;
  }
  v51 = 0LL;
  AppsUseLightTheme = SearchAppDesktopExperienceView::GetAppsUseLightTheme(v29);
  v31 = L"&AppsUseLightTheme=true";
  if ( !AppsUseLightTheme )
    v31 = L"&AppsUseLightTheme=false";
  v46 = v31;
  WindowsDeleteString(v51);
  v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, &v46, v32);
  v34 = WindowsConcatString(v47, (HSTRING)v33[1].Reserved.Reserved1, &v51);
  v11 = v34;
  if ( v34 < 0 )
  {
    v44 = 1187LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v34,
      v45);
    goto LABEL_23;
  }
  HideFileExtensionsEnabled = SearchAppDesktopExperienceView::GetHideFileExtensionsEnabled(v35);
  v38 = L"&HideFileExtensions=true";
  if ( !HideFileExtensionsEnabled )
    v38 = L"&HideFileExtensions=false";
  v46 = v38;
  v39 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v55, &v46, v37);
  v34 = WindowsConcatString(v51, (HSTRING)v39[1].Reserved.Reserved1, newString);
  v11 = v34;
  if ( v34 < 0 )
  {
    v44 = 1191LL;
    goto LABEL_44;
  }
  v11 = 0;
LABEL_23:
  WindowsDeleteString(v51);
  v51 = 0LL;
LABEL_24:
  WindowsDeleteString(v47);
  v47 = 0LL;
LABEL_25:
  WindowsDeleteString(v48);
  v48 = 0LL;
LABEL_26:
  WindowsDeleteString(v52);
  v52 = 0LL;
LABEL_27:
  WindowsDeleteString(string2);
  string2 = 0LL;
LABEL_28:
  WindowsDeleteString(newStringa);
  newStringa = 0LL;
LABEL_29:
  WindowsDeleteString(string);
  return v11;
}
