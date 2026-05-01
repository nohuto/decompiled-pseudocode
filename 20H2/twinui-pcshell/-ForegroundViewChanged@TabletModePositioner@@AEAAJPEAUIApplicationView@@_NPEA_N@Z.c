/*
 * XREFs of ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1803F67AC
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803F6734 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803F8280 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800B67F4 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800B69D8 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800B8650 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _lambda_23023fe66ba1e99252325d41c7c7d54a_::operator() @ 0x1800B8750 (_lambda_23023fe66ba1e99252325d41c7c7d54a_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803F3BB8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803F83D4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1803F8E68 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803FEFE0 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x180404CF8 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::ForegroundViewChanged(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        char a3,
        bool *a4)
{
  unsigned int v8; // r14d
  struct IApplicationView **v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 *v14; // rax
  int inited; // eax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  HWND v19; // [rsp+30h] [rbp-10h] BYREF
  HWND v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HWND v22; // [rsp+60h] [rbp+20h] BYREF
  IUnknown *v23; // [rsp+78h] [rbp+38h] BYREF

  if ( a4 )
    *a4 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 184LL))(*((_QWORD *)this + 31)) )
  {
    if ( a3 )
      return 0LL;
LABEL_16:
    v22 = 0LL;
    if ( !IsSurfaceHubWithWin32VtcEnabled() || (int)PPISideBarHelpers::GetWindowfromView(a2, &v22) < 0 )
      goto LABEL_29;
    v23 = 0LL;
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)&v23);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               (IUnknown *)this,
               &CLSID_PPIWin32VtcLayoutOperation,
               &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
               (void **)v14);
    if ( inited < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7FB,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
    v19 = 0LL;
    v20 = 0LL;
    if ( ((int (__fastcall *)(IUnknown *, HWND *, HWND *))v23->lpVtbl[4].QueryInterface)(v23, &v19, &v20) >= 0 )
    {
      if ( v19 != v22 )
      {
        if ( v20 != v22 )
          goto LABEL_28;
        v16 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)this + 57) + 40LL))(
                *((_QWORD *)this + 57),
                v20,
                -1LL);
        v17 = retaddr;
        if ( v16 >= 0 )
          goto LABEL_28;
        v18 = 2056LL;
        goto LABEL_27;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)this + 57) + 40LL))(
              *((_QWORD *)this + 57),
              v19,
              -1LL);
      v17 = retaddr;
      if ( v16 < 0 )
      {
        v18 = 2052LL;
LABEL_27:
        wil::details::in1diag3::_Log_Hr(
          v17,
          (void *)v18,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v16);
      }
    }
LABEL_28:
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v23);
LABEL_29:
    (*(void (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
    return 0LL;
  }
  if ( !a3 )
    goto LABEL_16;
  v8 = 1;
  if ( (unsigned __int8)TabletModePositioner::IsSwitcherVisible(this, 2LL) )
    v8 = 9;
  v23 = (IUnknown *)this;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  if ( (int)ScreenManagerHelpers::IsRelatedWin32ViewPresentInLayout(
              *((ScreenManagerHelpers **)this + 31),
              a2,
              (struct IApplicationView *)&v22,
              v9) < 0
    || lambda_23023fe66ba1e99252325d41c7c7d54a_::operator()(&v23, (__int64)a2) )
  {
    v10 = TabletModePositioner::SwitchToAppHelper(this, a2, v8, 0LL, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 2030LL;
      goto LABEL_13;
    }
  }
  else
  {
    v10 = TabletModePositioner::AppToAppSwitchHelper((IUnknown *)this, (__int64)v22, 5u, (__int64)a2, 0, 1);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 2026LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v22);
      return v11;
    }
  }
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v22);
  return 0LL;
}
