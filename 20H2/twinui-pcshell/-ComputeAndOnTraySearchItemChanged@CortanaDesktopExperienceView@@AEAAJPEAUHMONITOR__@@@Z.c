/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x18020A540
 * Callers:
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020F360 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1802108E0 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180012934 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001370C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x180096A20 (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18020BFB0 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x18020DC50 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        CortanaDesktopExperienceView *this,
        HMONITOR a2)
{
  int MonitorInformation; // ebx
  __int64 v5; // rdx
  unsigned int CortanaWidthWithoutGutter; // eax
  HMONITOR v8; // r8
  float v9; // xmm6_4
  LANGID ThreadUILanguage; // ax
  float right; // xmm0_4
  bool v12; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v13; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v14[4]; // [rsp+68h] [rbp-9h] BYREF
  struct tagRECT v15; // [rsp+78h] [rbp+7h] BYREF
  RECT rc; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &rc,
                         &v15,
                         &v13,
                         (enum EDGEUI_TRAYSTUCKPLACE *)v14,
                         &v12);
  if ( MonitorInformation < 0 )
  {
    v5 = 1833LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  CortanaWidthWithoutGutter = GetCortanaWidthWithoutGutter(&rc, 1);
  v9 = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                (ExperienceManagerUtils *)CortanaWidthWithoutGutter,
                (__int64)a2,
                v8);
  if ( v14[0] == 2 || (ThreadUILanguage = GetThreadUILanguage(), (unsigned int)IsBiDiLocale(ThreadUILanguage)) && v14[0] )
    right = (float)v13.left - v9;
  else
    right = (float)v13.right;
  *(float *)&v15.left = right;
  *(float *)&v15.top = (float)v13.top;
  *(float *)&v13.left = (float)rc.left;
  *(float *)&v15.bottom = (float)(v13.bottom - v13.top);
  *(float *)&v15.right = v9;
  *(float *)&v13.top = (float)rc.top;
  *(float *)&v13.right = (float)(rc.right - rc.left);
  *(float *)&v13.bottom = (float)(rc.bottom - rc.top);
  MonitorInformation = CortanaDesktopExperienceView::OnTraySearchItemChanged((char *)this + 16, &v13, &v15);
  if ( MonitorInformation < 0 )
  {
    v5 = 1856LL;
    goto LABEL_3;
  }
  return 0LL;
}
