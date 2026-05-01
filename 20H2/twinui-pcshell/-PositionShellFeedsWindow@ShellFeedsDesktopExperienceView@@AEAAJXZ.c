/*
 * XREFs of ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A86DC
 * Callers:
 *     ?InputHostHiding@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800A6FB0 (-InputHostHiding@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1800A7050 (-InputHostShowing@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_M.c)
 *     ?OnViewPropertiesChanging@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A81D4 (-OnViewPropertiesChanging@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A8408 (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18001370C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ??$ShellFeedsDesktopExperienceView_PositionShellFeedsWindow@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShellFeedsTelemetry@@SAXAEAJ0000000@Z @ 0x1800A52B8 (--$ShellFeedsDesktopExperienceView_PositionShellFeedsWindow@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@She.c)
 *     ?ComputeShellFeedsWindowRect@ShellFeedsDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHAEBU2@1111H@Z @ 0x1800A5BD0 (-ComputeShellFeedsWindowRect@ShellFeedsDesktopExperienceView@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCK.c)
 *     ?EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A60E0 (-EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetMonitorInformation@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1800A686C (-GetMonitorInformation@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW.c)
 *     ?GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800A6C74 (-GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 *     ?ShowBorder@ShellFeedsDesktopExperienceView@@AEAAJUtagRECT@@0@Z @ 0x1800A90F4 (-ShowBorder@ShellFeedsDesktopExperienceView@@AEAAJUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::PositionShellFeedsWindow(ShellFeedsDesktopExperienceView *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  HMONITOR v4; // rsi
  unsigned int v5; // ebx
  int *v6; // r14
  int MonitorInformation; // edi
  __int64 v8; // rdx
  int v10; // eax
  HMONITOR v11; // r8
  int v12; // edi
  HMONITOR v13; // r8
  int v14; // r15d
  HMONITOR v15; // r8
  int v16; // eax
  struct tagRECT v17; // xmm1
  struct tagRECT v18; // xmm0
  __int64 *v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  bool v22; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v23; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v24; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v25; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v26[8]; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v27; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-40h]
  __int128 v30; // [rsp+D8h] [rbp-30h]
  __int128 v31; // [rsp+E8h] [rbp-20h]
  _OWORD v32[4]; // [rsp+F8h] [rbp-10h] BYREF
  RECT rc; // [rsp+138h] [rbp+30h] BYREF
  struct tagRECT v34; // [rsp+148h] [rbp+40h] BYREF
  RECT v35; // [rsp+158h] [rbp+50h] BYREF
  struct tagRECT v36; // [rsp+168h] [rbp+60h] BYREF
  RECT v37; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v2 = *((float *)this + 34);
  rc.left = (int)v2;
  v3 = *((float *)this + 35);
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 36));
  rc.bottom = (int)(float)(v3 + *((float *)this + 37));
  v4 = MonitorFromRect(&rc, 0);
  if ( v4 )
  {
    v6 = (int *)((char *)this + 152);
    MonitorInformation = ShellFeedsDesktopExperienceView::GetMonitorInformation(
                           this,
                           v4,
                           &v25,
                           &v34,
                           &v27,
                           (ShellFeedsDesktopExperienceView *)((char *)this + 152),
                           &v22);
    if ( MonitorInformation < 0 )
    {
      v8 = 1242LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)MonitorInformation);
      return (unsigned int)MonitorInformation;
    }
    v35 = 0LL;
    MonitorInformation = ShellFeedsDesktopExperienceView::EnsureInputHostManager(this);
    if ( MonitorInformation < 0 )
    {
      v8 = 1246LL;
      goto LABEL_5;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _BYTE *))(**((_QWORD **)this + 12) + 40LL))(
            *((_QWORD *)this + 12),
            &v35,
            v26);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4DF,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v10);
    v37 = v35;
    v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (__int64)v4, v11);
    v14 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 32),
            (__int64)v4,
            v13);
    v16 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 33),
            (__int64)v4,
            v15);
    v17 = v34;
    v18 = v34;
    v23 = v34;
    if ( *v6 != -1 )
    {
      v18 = *ShellFeedsDesktopExperienceView::ComputeShellFeedsWindowRect(
               (__int64)&v25,
               &v36,
               *v6,
               v14,
               v16,
               (__int64)&v25,
               &v34,
               &v27,
               &rc,
               &v37,
               v12);
      v23 = v18;
      v17 = v34;
    }
    v27 = v17;
    v36 = v18;
    ShellFeedsDesktopExperienceView::ShowBorder(this, &v36, &v27);
    ShellFeedsDesktopExperienceView::GetViewWrapper((__int64)this, (__int64 *)&v24);
    v19 = v24;
    if ( v24 )
    {
      memset_0(&v28, 0, 0x40uLL);
      LODWORD(v28) = v23.right - v23.left;
      DWORD1(v28) = v23.bottom - v23.top;
      *(_QWORD *)&v29 = *(_QWORD *)&v23.left;
      LODWORD(v30) = 0;
      v20 = *v19;
      v32[0] = v28;
      v32[1] = v29;
      v32[2] = v30;
      v32[3] = v31;
      v21 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v20 + 496))(v19, v32);
      v5 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x503,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
          (const char *)(unsigned int)v21);
LABEL_17:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
        return v5;
      }
      ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_PositionShellFeedsWindow<long &,long &,long &,long &,long &,long &,long &,long &>(
        &v23.left,
        &v23.top,
        &v23.right,
        &v23.bottom,
        &v25.left,
        &v25.top,
        &v25.right,
        &v25.bottom);
    }
    v5 = 0;
    goto LABEL_17;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}
