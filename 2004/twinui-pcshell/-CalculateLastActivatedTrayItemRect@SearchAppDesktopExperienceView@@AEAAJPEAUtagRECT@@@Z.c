/*
 * XREFs of ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001BB24
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001AAD0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001C6D0 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002FA70 (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18008893C (-OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18001BD94 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18001BDD8 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18001BFF0 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(
        SearchAppDesktopExperienceView *this,
        struct tagRECT *a2)
{
  float v2; // xmm0_4
  float v4; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  float v8; // xmm9_4
  HMONITOR v9; // r14
  int MonitorInformation; // ebx
  HMONITOR v11; // rdx
  int PerMonitorDpi; // eax
  int v13; // ecx
  int v14; // eax
  LONG right; // edi
  LONG left; // r14d
  int v17; // r15d
  int v18; // ebx
  LANGID ThreadUILanguage; // ax
  __m128i v20; // xmm7
  float v21; // xmm7_4
  float v22; // xmm8_4
  float v23; // xmm6_4
  LANGID v24; // ax
  __m128i v25; // xmm1
  float v26; // xmm1_4
  float v27; // xmm2_4
  __int64 result; // rax
  __int64 v29; // rdx
  int v30; // [rsp+28h] [rbp-79h]
  bool v31[4]; // [rsp+48h] [rbp-59h] BYREF
  int v32; // [rsp+4Ch] [rbp-55h] BYREF
  struct tagRECT v33; // [rsp+50h] [rbp-51h] BYREF
  struct tagRECT v34; // [rsp+60h] [rbp-41h] BYREF
  struct tagRECT v35; // [rsp+70h] [rbp-31h] BYREF
  RECT rc; // [rsp+80h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v2 = *((float *)this + 47);
  v4 = *((float *)this + 48);
  v6 = (int)v2;
  v7 = v2 + *((float *)this + 49);
  rc.left = v6;
  v8 = v4 + *((float *)this + 50);
  rc.top = (int)v4;
  rc.right = (int)v7;
  rc.bottom = (int)v8;
  v9 = MonitorFromRect(&rc, 0);
  MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                         this,
                         v9,
                         &v34,
                         &v35,
                         &v33,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v32,
                         v31);
  if ( MonitorInformation < 0 )
  {
    v29 = 1530LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v30);
    return (unsigned int)MonitorInformation;
  }
  v31[0] = 0;
  MonitorInformation = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v9, v31);
  if ( MonitorInformation < 0 )
  {
    v29 = 1533LL;
    goto LABEL_19;
  }
  PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v9, v11);
  v13 = 344;
  if ( v34.right - v34.left < 1196 )
    v13 = 320;
  v14 = MulDiv(v13, PerMonitorDpi, 96);
  right = v33.right;
  left = v33.left;
  v17 = v14;
  v18 = v33.right - v33.left;
  if ( ((v32 - 1) & 0xFFFFFFFD) != 0 )
  {
    v20 = _mm_cvtsi32_si128(v33.left);
  }
  else
  {
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      right = left;
    v20 = _mm_cvtsi32_si128(right);
  }
  LODWORD(v21) = _mm_cvtepi32_ps(v20).m128_u32[0];
  if ( v31[0] )
    v18 = v17;
  v22 = (float)v18;
  v23 = v21;
  v24 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v24) )
  {
    if ( v32 == 1 || (v23 = v21, v32 == 3) )
      v23 = v21 - v22;
  }
  if ( ((v32 - 1) & 0xFFFFFFFD) != 0 )
    v25 = _mm_cvtsi32_si128(v33.bottom);
  else
    v25 = _mm_cvtsi32_si128(v33.top);
  v26 = _mm_cvtepi32_ps(v25).m128_f32[0];
  v27 = (float)(v33.bottom - v33.top);
  if ( (float)(v27 + v26) > v8 )
    v26 = v8 - v27;
  a2->left = (int)v23;
  result = 0LL;
  a2->top = (int)v26;
  a2->right = (int)(float)(v22 + v23);
  a2->bottom = (int)(float)(v27 + v26);
  return result;
}
