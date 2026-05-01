/*
 * XREFs of ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18005C004
 * Callers:
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x180060BC0 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@W4ShellExperienceViewFocusOptions@4567@@Z @ 0x1800A4C70 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180206B00 (-MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001370C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x18005C2D8 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x18005C768 (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18005CF20 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z @ 0x180096F54 (-GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon@@@details@wil@@QEAA_NXZ @ 0x180097614 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrim.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer@@@details@wil@@QEAA_NXZ @ 0x180097718 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSear_ea_180097718.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::GetActivateArgs(
        SearchAppDesktopExperienceView *this,
        HSTRING a2,
        HSTRING *a3)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rax
  HMONITOR v9; // rdi
  unsigned int v10; // ebx
  unsigned int SearchBoxHeight; // r15d
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  const wchar_t *StringRawBuffer; // rax
  const wchar_t *v16; // rbx
  HMONITOR v17; // r8
  bool v18; // r14
  __int64 WindowsSearchBoxWidthWithMonParamConsidered; // rcx
  HMONITOR v20; // r8
  __m128i v21; // xmm0
  HSTRING newString; // [rsp+20h] [rbp-60h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-58h] BYREF
  UINT32 length; // [rsp+30h] [rbp-50h] BYREF
  RECT rc; // [rsp+38h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a3 = 0LL;
  v6 = *((float *)this + 47);
  rc.left = (int)v6;
  v7 = *((float *)this + 48);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 49));
  rc.bottom = (int)(float)(v7 + *((float *)this + 50));
  v8 = MonitorFromRect(&rc, 0);
  v9 = v8;
  if ( v8 )
  {
    SearchBoxHeight = SearchAppDesktopExperienceView::GetSearchBoxHeight(this, v8);
    WindowsDeleteString(0LL);
    string2 = 0LL;
    v12 = SearchAppDesktopExperienceView::BuildAdditionalArgsString(
            this,
            v9,
            (ExperienceManagerUtils *)SearchBoxHeight,
            &string2);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A4,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v12,
        (int)newString);
LABEL_24:
      ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)&string2);
      return v10;
    }
    WindowsDeleteString(0LL);
    newString = 0LL;
    v13 = WindowsConcatString(a2, string2, &newString);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v13 = WindowsDuplicateString(newString, a3);
      v10 = v13;
      if ( v13 >= 0 )
      {
        length = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(newString, &length);
        v16 = StringRawBuffer;
        if ( StringRawBuffer )
          *((_BYTE *)this + 209) = wcsstr(StringRawBuffer, L"&QuerySource=StartButton") != 0LL;
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_UpdateSearchBoxWidthFromServer>::GetImpl'::`2'::impl)
          || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixShortenedSBInNonPrimaryMon>::GetImpl'::`2'::impl) )
        {
          WindowsSearchBoxWidthWithMonParamConsidered = 320LL;
        }
        else
        {
          mi.cbSize = 40;
          memset(&mi.rcMonitor, 0, 36);
          v18 = 1;
          if ( GetMonitorInfoW(v9, &mi) )
            v18 = mi.dwFlags == 1;
          WindowsSearchBoxWidthWithMonParamConsidered = (unsigned int)GetWindowsSearchBoxWidthWithMonParamConsidered(
                                                                        v18,
                                                                        0,
                                                                        0);
        }
        *((float *)this + 45) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                         (ExperienceManagerUtils *)WindowsSearchBoxWidthWithMonParamConsidered,
                                         (__int64)v9,
                                         v17);
        if ( wcsstr(v16, L"StartMode=QFSearchBox") || wcsstr(v16, L"StartMode=NotificationAnimation") )
          v21 = _mm_cvtsi32_si128(SearchBoxHeight);
        else
          v21 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x290, (__int64)v9, v20));
        *((_DWORD *)this + 46) = _mm_cvtepi32_ps(v21).m128_u32[0];
        v10 = 0;
        goto LABEL_23;
      }
      v14 = 1448LL;
    }
    else
    {
      v14 = 1447LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v13,
      (int)newString);
LABEL_23:
    ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)&newString);
    goto LABEL_24;
  }
  v10 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A0,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL,
    (int)newString);
  return v10;
}
