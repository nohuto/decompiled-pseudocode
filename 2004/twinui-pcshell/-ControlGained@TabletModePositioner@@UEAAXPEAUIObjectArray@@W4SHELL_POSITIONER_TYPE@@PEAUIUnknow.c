/*
 * XREFs of ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803F56B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800252C4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002CB98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180043A64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006F394 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800810D4 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180081218 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1803F5124 (-CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1803F65E8 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1803F8288 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1803F91F8 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1803FB440 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803FD074 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803FF900 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803FFD28 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall TabletModePositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  int v7; // eax
  struct IUnknown *v8; // rcx
  int v9; // eax
  int v10; // eax
  struct IUnknown *v11; // rcx
  int v12; // eax
  char v13; // r12
  bool v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  struct IApplicationView *v18; // rdx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  struct IApplicationView *v23; // rdx
  int inited; // eax
  __int64 v25; // rbx
  struct IApplicationViewOperation *v26; // rbx
  int v27; // eax
  int ScaleFactor; // eax
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // rdx
  struct tagRECT *p_rc; // r9
  struct IUnknown *v33; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v34; // [rsp+38h] [rbp-C8h] BYREF
  enum DEVICE_SCALE_FACTOR v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-B8h] BYREF
  struct IApplicationViewOperation *v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v41[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v41,
    (__int64)"TMPControlGained");
  v41[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  TabletModeTraceLogging::TMPControlGained::StartActivity(v41, a2, a3);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v36);
  if ( v36 == *(_DWORD *)(a1 + 108) )
  {
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL))(
            a2,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v33);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x450,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v12);
LABEL_62:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      goto LABEL_63;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
      0,
      3u);
    if ( ((int (__fastcall *)(struct IUnknown *, int *))v33->lpVtbl[9].QueryInterface)(v33, &v38) < 0 || !v38 )
      goto LABEL_62;
    v13 = 1;
    v14 = 1;
    v15 = 0LL;
    v39 = 0LL;
    rc = 0LL;
    if ( a3 != 3 )
    {
      if ( a3 != 6 )
        goto LABEL_53;
      v37 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)(a1 - 128),
                 v23,
                 &v37);
      if ( inited >= 0 )
      {
        v34 = 0LL;
        v25 = *(_QWORD *)(a1 + 208);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
        if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v25 + 72LL))(v25, &v34) >= 0 )
          v14 = (unsigned int)SHIsSameObject(v34, v33) != 0;
        v26 = v37;
        (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v37 + 96LL))(v37, 0LL);
        v27 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationViewOperation *))v33->lpVtbl[13].AddRef)(
                v33,
                v26);
        if ( v27 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x495,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v27);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x488,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
      }
      ((void (__fastcall *)(struct IUnknown *, struct tagRECT *))v33->lpVtbl[5].AddRef)(v33, &rc);
      OffsetRect(&rc, -rc.left, -rc.top);
      v35[0] = SCALE_100_PERCENT;
      ScaleFactor = TabletModePositioner::GetScaleFactor((TabletModePositioner *)(a1 - 128), v35);
      if ( ScaleFactor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4A0,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)ScaleFactor);
      rc.right += 2 * (v35[0] * GetSystemMetrics(5) / -100);
      rc.bottom += 2 * (v35[0] * GetSystemMetrics(6) / -100);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
LABEL_49:
      if ( !v14 )
        goto LABEL_61;
      if ( v15 )
      {
        v29 = TabletModePositioner::SwitchToCustomLayoutHelper(a1 - 128, v15);
        v30 = retaddr;
        if ( v29 < 0 )
        {
          v31 = 1193LL;
LABEL_60:
          wil::details::in1diag3::_Log_Hr(
            v30,
            (void *)v31,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v29);
        }
LABEL_61:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
        goto LABEL_62;
      }
LABEL_53:
      if ( rc.left < rc.right && rc.top < rc.bottom )
        v13 = 0;
      p_rc = &rc;
      if ( v13 )
        p_rc = 0LL;
      v29 = TabletModePositioner::SwitchToAppHelper(a1 - 128, v33, 2LL, p_rc, 0LL);
      v30 = retaddr;
      if ( v29 >= 0 )
        goto LABEL_61;
      v31 = 1200LL;
      goto LABEL_60;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 144), (__int64 *)&v33);
    v16 = *(_QWORD *)(a1 + 136);
    if ( v16 && (*(unsigned int (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v16 + 184LL))(v16, v33) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v39, (__int64 *)(a1 + 136));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 136));
      v15 = v39;
    }
    v34 = 0LL;
    v17 = *(_QWORD *)(a1 + 208);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v17 + 72LL))(v17, &v34) < 0
      || (unsigned int)SHIsSameObject(v34, v33) )
    {
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      goto LABEL_49;
    }
    v14 = 0;
    *(_QWORD *)v35 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v35);
    v19 = TabletModePositioner::CreateAndInitApplicationViewOperation(
            (TabletModePositioner *)(a1 - 128),
            v18,
            (struct IApplicationViewOperation **)v35);
    v20 = retaddr;
    if ( v19 >= 0 )
    {
      v22 = *(_QWORD *)v35;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v35 + 96LL))(*(_QWORD *)v35, 0LL);
      v19 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v33->lpVtbl[13].AddRef)(v33, v22);
      v20 = retaddr;
      if ( v19 >= 0 )
      {
LABEL_36:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v35);
        goto LABEL_37;
      }
      v21 = 1152LL;
    }
    else
    {
      v21 = 1146LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v20,
      (void *)v21,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_36;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  if ( *(_QWORD *)(a1 + 320) )
  {
    v33 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IUnknown **))(**(_QWORD **)(a1 + 320) + 32LL))(
           *(_QWORD *)(a1 + 320),
           2LL,
           &v33);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x415,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6);
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v33->lpVtbl[1].Release)(v33, 3LL);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x416,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v7);
    v8 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
    }
  }
  if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
    DwmpEndTransitionRequest(91LL);
  TabletModePositioner::SetTabletMode(a1 - 128, v36);
  if ( (int)TabletModePositioner::CancelMoveSizeOperationForOperableView((TabletModePositioner *)(a1 - 128)) < 0 )
  {
    v9 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry((TabletModePositioner *)(a1 - 128));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x427,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v9);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  if ( *(_QWORD *)(a1 + 320) )
  {
    v33 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, __int64, struct IUnknown **))(**(_QWORD **)(a1 + 320) + 32LL))(
           *(_QWORD *)(a1 + 320),
           1LL,
           &v33) >= 0 )
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v33->lpVtbl[1].Release)(v33, 0LL);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x43A,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v10);
    }
    v11 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
    }
  }
  *(_BYTE *)(a1 + 112) = 1;
LABEL_63:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v41);
  v41[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v41);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v41);
}
