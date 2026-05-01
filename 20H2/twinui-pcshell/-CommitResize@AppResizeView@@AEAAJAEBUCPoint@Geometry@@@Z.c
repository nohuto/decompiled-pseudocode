/*
 * XREFs of ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180411EEC
 * Callers:
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x1804129E0 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z @ 0x180412B00 (-OnPointerUp@AppResizeView@@UEAAJIPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800600C0 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800B69D8 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800B8650 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800BC19C (-GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SignalEvictedPPIWin32VTCWindow@AppResizeView@@AEAAJPEAUHWND__@@@Z @ 0x1800BC384 (-SignalEvictedPPIWin32VTCWindow@AppResizeView@@AEAAJPEAUHWND__@@@Z.c)
 *     ?SignalEvictedWindowForTabletMode@AppResizeView@@AEAAJPEAUHWND__@@@Z @ 0x1800BC3D4 (-SignalEvictedWindowForTabletMode@AppResizeView@@AEAAJPEAUHWND__@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedAppsUnderTabletMode@@@details@wil@@QEAA_NXZ @ 0x1800BC424 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEv.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_TeamsMeetingWindowSlideoff_37808689@@@details@wil@@QEAA_NXZ @ 0x1800BC464 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_TeamsMeetingWindowSlide.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x1800BCE3C (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180147A68 (--B-$ComPtrRef@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUI.c)
 *     wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___ @ 0x180411BA4 (wil--details--ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___--_ScopeExitFn__lambda_2f41.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x180412C64 (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AppResizeView::CommitResize(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rax
  AppResizeView *v11; // rcx
  HWND EvictedMeetingWindow; // rbx
  AppResizeView *v13; // rcx
  int v14; // eax
  enum _TABLETMODESTATE *v15; // rdx
  TabletModeHelpers *v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 *v19; // rax
  struct IApplicationView *v20; // rbx
  __int64 (__fastcall **v21)(struct IApplicationView *, GUID *, __int64 *); // rdi
  __int64 *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  AppResizeView *v26; // rcx
  int v27; // eax
  struct IApplicationView *v28; // [rsp+20h] [rbp-29h] BYREF
  _QWORD *v29; // [rsp+28h] [rbp-21h] BYREF
  HWND v30; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-11h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-9h] BYREF
  __int64 v33; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp+7h] BYREF
  char v35; // [rsp+60h] [rbp+17h]
  _BYTE v36[24]; // [rsp+68h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    v31 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 8) + 32LL))(
                       *((_QWORD *)this + 8),
                       v36);
    v34[0] = this;
    v34[1] = &v31;
    v35 = 1;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v4 = AppResizeView::QueryResizeApps(this, v31, a2, &v29);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x235,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v4);
LABEL_26:
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v29);
      wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___(v34);
      return v5;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v6 = IUnknown_QueryService(
           *((IUnknown **)this + 2),
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &ppvOut);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 568LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v6);
LABEL_25:
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&ppvOut);
      goto LABEL_26;
    }
    v6 = (*(__int64 (__fastcall **)(void *, _QWORD *))(*(_QWORD *)ppvOut + 88LL))(ppvOut, v29);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 569LL;
      goto LABEL_8;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_TeamsMeetingWindowSlideoff_37808689>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_TeamsMeetingWindowSlideoff_37808689>::GetImpl'::`2'::impl)
      && IsSurfaceHubWithWin32VtcEnabled() )
    {
      v28 = 0LL;
      v8 = v29;
      v30 = (HWND)&v28;
      v9 = *v29;
      v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v30);
      (*(void (__fastcall **)(_QWORD *, __int64 *))(v9 + 112))(v8, v10);
      EvictedMeetingWindow = AppResizeView::GetEvictedMeetingWindow(v11, v28);
      if ( EvictedMeetingWindow )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 9) + 184LL))(
                *((_QWORD *)this + 9),
                v28) )
        {
          v14 = AppResizeView::SignalEvictedPPIWin32VTCWindow(v13, EvictedMeetingWindow);
          if ( v14 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x244,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
              (const char *)(unsigned int)v14);
        }
      }
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v28);
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedAppsUnderTabletMode>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SendMinimizeMessageToEvictedAppsUnderTabletMode>::GetImpl'::`2'::impl)
      && TabletModeHelpers::IsTabletMode(v16, v15)
      && !IsPPIEdition() )
    {
      v28 = 0LL;
      v17 = v29;
      v30 = (HWND)&v28;
      v18 = *v29;
      v19 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v30);
      (*(void (__fastcall **)(_QWORD *, __int64 *))(v18 + 112))(v17, v19);
      if ( Microsoft::WRL::operator!=<IApplicationViewCollection>(&v28) )
      {
        v33 = 0LL;
        v20 = v28;
        v21 = *(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v28;
        v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>(&v33);
        v23 = (*v21)(v20, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v22);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 597LL;
LABEL_24:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
            (const char *)(unsigned int)v23);
          Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v33);
          Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v28);
          goto LABEL_25;
        }
        v30 = 0LL;
        v23 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v33 + 24LL))(v33, &v30);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 599LL;
          goto LABEL_24;
        }
        if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 9) + 184LL))(
                *((_QWORD *)this + 9),
                v28) )
        {
          v27 = AppResizeView::SignalEvictedWindowForTabletMode(v26, v30);
          if ( v27 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x25A,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
              (const char *)(unsigned int)v27);
        }
        Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(&v33);
      }
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v28);
    }
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&ppvOut);
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v29);
    wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___(v34);
  }
  return 0LL;
}
