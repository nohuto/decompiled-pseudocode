/*
 * XREFs of ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180211160
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18020BB58 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x18020AD94 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::SetPositioningAnchorForNotificationAnimation(
        CortanaDesktopExperienceView *this)
{
  HWND WindowW; // rax
  HMONITOR PropW; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !WindowW )
    return 0LL;
  PropW = (HMONITOR)GetPropW(WindowW, L"TaskbarMonitor");
  if ( !PropW )
    return 0LL;
  v4 = CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, PropW);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x843,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
