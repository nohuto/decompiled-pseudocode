/*
 * XREFs of ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x18020ABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001AFAC (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180053E38 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18020C740 (-GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PE.c)
 *     ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18020CB20 (-GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18020D1C0 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18020D2FC (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::CanTransitionFromStart(
        CortanaDesktopExperienceView *this,
        unsigned __int8 *a2)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  LONG v8; // eax
  float v9; // xmm1_4
  HMONITOR v10; // rax
  int IsTraySearchBoxVisible; // ebx
  __int64 v12; // rdx
  CortanaDesktopExperienceView *v14; // rsi
  CortanaFlightingHelpers *v15; // rcx
  HMONITOR v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  int v19; // r14d
  HMONITOR v20; // r8
  int v21; // eax
  bool v22; // [rsp+40h] [rbp-29h] BYREF
  HMONITOR v23; // [rsp+48h] [rbp-21h] BYREF
  float v24[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-11h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v27; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v28; // [rsp+80h] [rbp+17h] BYREF
  RECT rc; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( IsSearchAndCortanaSplitEnabled() )
    goto LABEL_17;
  *a2 = 1;
  v4 = *((float *)this + 45);
  v5 = *((float *)this + 46);
  v6 = (int)v4;
  v7 = v4 + *((float *)this + 47);
  rc.left = v6;
  v8 = (int)v5;
  v9 = v5 + *((float *)this + 48);
  rc.top = v8;
  rc.right = (int)v7;
  rc.bottom = (int)v9;
  v10 = MonitorFromRect(&rc, 0);
  if ( !v10 )
  {
    IsTraySearchBoxVisible = -2147418113;
    v12 = 514LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible);
    return (unsigned int)IsTraySearchBoxVisible;
  }
  v14 = (CortanaDesktopExperienceView *)((char *)this - 16);
  v22 = 0;
  IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                             (CortanaDesktopExperienceView *)((char *)this - 16),
                             v10,
                             &v22);
  if ( IsTraySearchBoxVisible < 0 )
  {
    v12 = 516LL;
    goto LABEL_4;
  }
  if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v15) && !v22 )
    goto LABEL_17;
  IsTraySearchBoxVisible = CortanaDesktopExperienceView::GetImmersiveLauncherMonitorInformation(
                             v14,
                             &v23,
                             &v26,
                             &v28,
                             &v27,
                             (enum EDGEUI_TRAYSTUCKPLACE *)v25,
                             &v22);
  if ( IsTraySearchBoxVisible < 0 )
  {
    v12 = 541LL;
    goto LABEL_4;
  }
  v17 = 344LL;
  if ( v26.right - v26.left < 1196 )
    v17 = 320LL;
  v18 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v17, (__int64)v23, v16);
  v19 = v18 + v27.right - v27.left;
  IsTraySearchBoxVisible = CortanaDesktopExperienceView::GetStartSize(v14, (struct Windows::Foundation::Size *)v24);
  if ( IsTraySearchBoxVisible < 0 )
  {
    v12 = 545LL;
    goto LABEL_4;
  }
  v21 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x1E0, (__int64)v23, v20);
  if ( (float)v21 > v24[1] || (float)v19 > v24[0] )
LABEL_17:
    *a2 = 0;
  return 0LL;
}
