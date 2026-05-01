/*
 * XREFs of ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180060E14
 * Callers:
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x180060BC0 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 *     ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180207470 (-OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x180060E60 (-ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x18006103C (-GetImmersiveLauncherMonitor@SearchAppDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::PositionAlongsideStart(SearchAppDesktopExperienceView *this)
{
  int ImmersiveLauncherMonitor; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v7; // [rsp+38h] [rbp+10h] BYREF

  ImmersiveLauncherMonitor = SearchAppDesktopExperienceView::GetImmersiveLauncherMonitor(this, &v7);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v4 = 1582LL;
  }
  else
  {
    ImmersiveLauncherMonitor = SearchAppDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, v7);
    if ( ImmersiveLauncherMonitor >= 0 )
      return 0LL;
    v4 = 1583LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)ImmersiveLauncherMonitor,
    v5);
  return (unsigned int)ImmersiveLauncherMonitor;
}
