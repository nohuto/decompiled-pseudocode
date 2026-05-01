/*
 * XREFs of ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803FF900
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803F56B0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803F5E50 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1803F70CC (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803F9370 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803FB6C0 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1803FB810 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180401060 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800447C8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC@@@details@wil@@QEAA_NXZ @ 0x1800B50FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC@@@detail.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800B6BA0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18039C6B8 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803F46C4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803F8CF4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?IsLauncherVisible@TabletModePositioner@@AEAA_NXZ @ 0x1803F9664 (-IsLauncherVisible@TabletModePositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::SwitchToAppHelper(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 a4,
        void *ppvOut)
{
  _BYTE *v9; // r14
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // ebx
  bool v13; // bl
  HRESULT v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  bool *v18; // r9
  int inited; // eax
  __int64 v20; // rdx
  __int64 *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  struct IUnknown *v26; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v27; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v9 = ppvOut;
  if ( ppvOut )
    *(_BYTE *)ppvOut = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&ppvOut);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAFE,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return v11;
  }
  v13 = (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 88LL))(*(_QWORD *)(a1 + 248), 2LL) == 1
     && ((unsigned __int8)ppvOut & 2) != 0;
  if ( (a3 & 4) != 0
    || IsPPIEdition()
    || (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 80LL))(*(_QWORD *)(a1 + 248), 1LL) <= 1
    || v13 )
  {
    if ( !IsPPIEdition() )
    {
      LODWORD(ppvOut) = 0;
      (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 432) + 40LL))(*(_QWORD *)(a1 + 432), &ppvOut);
      if ( TabletModePositioner::IsLauncherVisible((TabletModePositioner *)a1, v16, v17, v18) )
      {
        a3 |= 0x18u;
      }
      else if ( (_DWORD)ppvOut )
      {
        a3 |= 8u;
      }
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      inited = TabletModePositioner::InitLayoutOperationHelper(
                 (IUnknown *)a1,
                 &CLSID_AppSwitchOperation,
                 &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
                 (void **)&v26);
      v11 = inited;
      if ( inited >= 0 )
      {
        inited = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v26->lpVtbl[1].Release)(
                   v26,
                   a2,
                   a3);
        v11 = inited;
        if ( inited >= 0 )
        {
          inited = TabletModePositioner::ApplyLayoutOperationHelper((PVOID)a1, v26);
          v11 = inited;
          if ( inited >= 0 )
          {
            Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v26);
            return 0LL;
          }
          v20 = 2850LL;
        }
        else
        {
          v20 = 2849LL;
        }
      }
      else
      {
        v20 = 2848LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v26);
      return v11;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SurfaceHubWin32VtcAPI_SC>::GetImpl'::`2'::impl) )
    {
      LODWORD(ppvOut) = 0;
      v26 = 0LL;
      v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)&v26);
      v22 = TabletModePositioner::InitLayoutOperationHelper(
              (IUnknown *)a1,
              &CLSID_PPIWin32VtcLayoutOperation,
              &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
              (void **)v21);
      v11 = v22;
      if ( v22 < 0 )
      {
        v23 = 2860LL;
        goto LABEL_45;
      }
      v22 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD, void **))v26->lpVtbl[2].AddRef)(
              v26,
              a2,
              0LL,
              &ppvOut);
      v11 = v22;
      if ( v22 < 0 )
      {
        v23 = 2861LL;
        goto LABEL_45;
      }
      if ( (_DWORD)ppvOut )
      {
        v22 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v26->lpVtbl[1].Release)(
                v26,
                a2,
                a3);
        v11 = v22;
        if ( v22 >= 0 )
        {
          v22 = TabletModePositioner::ApplyLayoutOperationHelper((PVOID)a1, v26);
          v11 = v22;
          if ( v22 >= 0 )
          {
            v11 = 0;
            goto LABEL_47;
          }
          v23 = 2867LL;
        }
        else
        {
          v23 = 2866LL;
        }
LABEL_45:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v22);
LABEL_47:
        Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v26);
        return v11;
      }
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v26);
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    v24 = TabletModePositioner::InitLayoutOperationHelper(
            (IUnknown *)a1,
            &CLSID_PPILayoutOperation,
            &GUID_5ad5b03b_637b_436d_9dcd_b3ef85f3769a,
            (void **)&v27);
    v11 = v24;
    if ( v24 >= 0 )
    {
      v24 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v27->lpVtbl[1].Release)(
              v27,
              a2,
              a3);
      v11 = v24;
      if ( v24 >= 0 )
      {
        v24 = TabletModePositioner::ApplyLayoutOperationHelper((PVOID)a1, v27);
        v11 = v24;
        if ( v24 >= 0 )
        {
          Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v27);
          return 0LL;
        }
        v25 = 2876LL;
      }
      else
      {
        v25 = 2875LL;
      }
    }
    else
    {
      v25 = 2874LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v24);
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v27);
    return v11;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v14 = IUnknown_QueryService(
          *(IUnknown **)(a1 + 16),
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &ppvOut);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = 2825LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&ppvOut);
    return v11;
  }
  v14 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)ppvOut + 56LL))(
          ppvOut,
          a2,
          *(_QWORD *)(a1 + 248),
          a4);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = 2826LL;
    goto LABEL_18;
  }
  if ( v9 )
    *v9 = 1;
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&ppvOut);
  return 0LL;
}
