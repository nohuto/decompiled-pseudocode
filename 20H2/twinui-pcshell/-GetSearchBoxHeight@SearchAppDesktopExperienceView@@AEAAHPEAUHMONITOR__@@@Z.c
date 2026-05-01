/*
 * XREFs of ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18005CF20
 * Callers:
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18005C004 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180206E00 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001370C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_0c65967083025c8585f472dd890e14b7_::operator() @ 0x1800A4490 (_lambda_0c65967083025c8585f472dd890e14b7_--operator().c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::GetSearchBoxHeight(
        SearchAppDesktopExperienceView *this,
        __int64 a2,
        HMONITOR a3)
{
  int v4; // eax
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-20h]
  unsigned int *v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, a2, a3);
  *(_QWORD *)v6 = this;
  v7 = &v11;
  v8 = &v10;
  v4 = lambda_0c65967083025c8585f472dd890e14b7_::operator()(v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x809,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
  return v10;
}
