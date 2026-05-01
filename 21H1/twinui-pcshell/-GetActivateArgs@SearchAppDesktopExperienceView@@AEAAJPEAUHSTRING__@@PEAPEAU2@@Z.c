/*
 * XREFs of ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18004E07C
 * Callers:
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18004DDC0 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x18004EA80 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1801E4110 (-MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001AB3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x18004E270 (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18004EA28 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::GetActivateArgs(
        SearchAppDesktopExperienceView *this,
        HSTRING a2,
        HSTRING *a3)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rax
  HMONITOR v9; // rsi
  unsigned int SearchBoxHeight; // r14d
  int v11; // eax
  unsigned int v12; // ebx
  HRESULT v13; // eax
  const wchar_t *StringRawBuffer; // rax
  HMONITOR v15; // r8
  const wchar_t *v16; // rbx
  __m128i v17; // xmm0
  __int64 v19; // rdx
  HMONITOR v20; // r8
  HSTRING newString; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  UINT32 length; // [rsp+30h] [rbp-20h] BYREF
  RECT rc; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  *a3 = 0LL;
  v6 = *((float *)this + 47);
  rc.left = (int)v6;
  v7 = *((float *)this + 48);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 49));
  rc.bottom = (int)(float)(v7 + *((float *)this + 50));
  v8 = MonitorFromRect(&rc, 0);
  v9 = v8;
  if ( !v8 )
  {
    v12 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E0,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL,
      (int)newString);
    return v12;
  }
  SearchBoxHeight = SearchAppDesktopExperienceView::GetSearchBoxHeight(this, v8);
  WindowsDeleteString(0LL);
  string2 = 0LL;
  v11 = SearchAppDesktopExperienceView::BuildAdditionalArgsString(
          this,
          v9,
          (ExperienceManagerUtils *)SearchBoxHeight,
          &string2);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E4,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v11,
      (int)newString);
    goto LABEL_11;
  }
  WindowsDeleteString(0LL);
  newString = 0LL;
  v13 = WindowsConcatString(a2, string2, &newString);
  v12 = v13;
  if ( v13 < 0 )
  {
    v19 = 1255LL;
  }
  else
  {
    v13 = WindowsDuplicateString(newString, a3);
    v12 = v13;
    if ( v13 >= 0 )
    {
      length = 0;
      StringRawBuffer = WindowsGetStringRawBuffer(newString, &length);
      v16 = StringRawBuffer;
      if ( StringRawBuffer )
        *((_BYTE *)this + 209) = wcsstr(StringRawBuffer, L"&QuerySource=StartButton") != 0LL;
      *((float *)this + 45) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x140,
                                       (__int64)v9,
                                       v15);
      if ( wcsstr(v16, L"StartMode=QFSearchBox") || wcsstr(v16, L"StartMode=NotificationAnimation") )
        v17 = _mm_cvtsi32_si128(SearchBoxHeight);
      else
        v17 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x290, (__int64)v9, v20));
      *((_DWORD *)this + 46) = _mm_cvtepi32_ps(v17).m128_u32[0];
      v12 = 0;
      goto LABEL_10;
    }
    v19 = 1256LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v13,
    (int)newString);
LABEL_10:
  WindowsDeleteString(newString);
  newString = 0LL;
LABEL_11:
  WindowsDeleteString(string2);
  return v12;
}
