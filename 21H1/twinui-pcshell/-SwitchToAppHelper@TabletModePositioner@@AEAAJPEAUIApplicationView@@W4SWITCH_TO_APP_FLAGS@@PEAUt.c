/*
 * XREFs of ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803DE070
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803D4860 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803D4F20 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1803D5FAC (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803D7F00 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803DA160 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1803DF3C4 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180043F18 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18037B468 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803D39B4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803D78C4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?IsLauncherVisible@TabletModePositioner@@AEAA_NXZ @ 0x1803D81CC (-IsLauncherVisible@TabletModePositioner@@AEAA_NXZ.c)
 */

__int64 __fastcall TabletModePositioner::SwitchToAppHelper(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 a4,
        void *ppvOut)
{
  _BYTE *v5; // r14
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // ebx
  bool v13; // bl
  HRESULT inited; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  bool *v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  struct IUnknown *v22[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v5 = ppvOut;
  if ( ppvOut )
    *(_BYTE *)ppvOut = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&ppvOut);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA64,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return v11;
  }
  v13 = (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 88LL))(*(_QWORD *)(a1 + 248), 2LL) == 1
     && ((unsigned __int8)ppvOut & 2) != 0;
  if ( (a3 & 4) == 0
    && !IsPPIEdition()
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 80LL))(*(_QWORD *)(a1 + 248), 1LL) > 1
    && !v13 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    inited = IUnknown_QueryService(
               *(IUnknown **)(a1 + 16),
               &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
               &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
               &ppvOut);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2671LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      return v11;
    }
    inited = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)ppvOut + 56LL))(
               ppvOut,
               a2,
               *(_QWORD *)(a1 + 248),
               a4);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2672LL;
      goto LABEL_18;
    }
    if ( v5 )
      *v5 = 1;
    goto LABEL_41;
  }
  if ( IsPPIEdition() )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               (IUnknown *)a1,
               &CLSID_PPILayoutOperation,
               &GUID_5ad5b03b_637b_436d_9dcd_b3ef85f3769a,
               &ppvOut);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2703LL;
      goto LABEL_18;
    }
    inited = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD))(*(_QWORD *)ppvOut + 40LL))(
               ppvOut,
               a2,
               a3);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2704LL;
      goto LABEL_18;
    }
    inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, (struct IUnknown *)ppvOut);
    v11 = inited;
    if ( inited < 0 )
    {
      v15 = 2705LL;
      goto LABEL_18;
    }
LABEL_41:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    return 0LL;
  }
  v16 = *(_QWORD *)(a1 + 432);
  LODWORD(ppvOut) = 0;
  (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 40LL))(v16, &ppvOut);
  if ( TabletModePositioner::IsLauncherVisible((TabletModePositioner *)a1, v17, v18, v19) )
  {
    a3 |= 0x18u;
  }
  else if ( (_DWORD)ppvOut )
  {
    a3 |= 8u;
  }
  v22[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
  v20 = TabletModePositioner::InitLayoutOperationHelper(
          (IUnknown *)a1,
          &CLSID_AppSwitchOperation,
          &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
          (void **)v22);
  v11 = v20;
  if ( v20 < 0 )
  {
    v21 = 2694LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
    return v11;
  }
  v20 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v22[0]->lpVtbl[1].Release)(
          v22[0],
          a2,
          a3);
  v11 = v20;
  if ( v20 < 0 )
  {
    v21 = 2695LL;
    goto LABEL_33;
  }
  v20 = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v22[0]);
  v11 = v20;
  if ( v20 < 0 )
  {
    v21 = 2696LL;
    goto LABEL_33;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
  return 0LL;
}
