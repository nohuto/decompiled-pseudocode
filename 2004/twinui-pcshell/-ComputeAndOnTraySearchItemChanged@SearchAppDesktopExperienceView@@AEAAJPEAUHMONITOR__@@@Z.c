/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x18004E8E0
 * Callers:
 *     ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18004E894 (-PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001AFAC (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18001BDD8 (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        SearchAppDesktopExperienceView *this,
        HMONITOR a2)
{
  int MonitorInformation; // eax
  HMONITOR v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // ebx
  LANGID ThreadUILanguage; // ax
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-50h]
  struct tagRECT v12; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v14; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  bool v16; // [rsp+A0h] [rbp+30h] BYREF
  int v17; // [rsp+A8h] [rbp+38h] BYREF

  MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &v12,
                         &v14,
                         &v13,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v17,
                         &v16);
  v6 = MonitorInformation;
  if ( MonitorInformation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v11);
    return v6;
  }
  else
  {
    v7 = 344LL;
    v8 = v12.right - v12.left;
    if ( v12.right - v12.left < 1196 )
      v7 = 320LL;
    ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v7, (__int64)a2, v5);
    if ( v17 != 2 )
    {
      ThreadUILanguage = GetThreadUILanguage();
      IsBiDiLocale(ThreadUILanguage);
    }
    *(float *)&v13.left = (float)v12.left;
    *(float *)&v13.top = (float)v12.top;
    *(float *)&v13.right = (float)v8;
    result = 0LL;
    *(float *)&v13.bottom = (float)(v12.bottom - v12.top);
    *(struct tagRECT *)((char *)this + 188) = v13;
  }
  return result;
}
