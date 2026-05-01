/*
 * XREFs of ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180048020
 * Callers:
 *     ?InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1800484C0 (-InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentati.c)
 *     ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x180048940 (-InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002A890 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18002C9BC (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1800429A8 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180045C28 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180048290 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     _lambda_28e991405a2b461f36746747a980db10_::operator() @ 0x180048328 (_lambda_28e991405a2b461f36746747a980db10_--operator().c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18005F164 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801608DC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z @ 0x180264244 (--0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z.c)
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x1803CADA4 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?InitializePositionCloak_@DesktopPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1803CB464 (-InitializePositionCloak_@DesktopPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlags@PositionerPropertySetHelpers@@@Z @ 0x1803CB624 (-IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlag.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803CBF78 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?get@?$static_lazy@VDesktopPositionerTelemetry@@@details@wil@@QEAAPEAVDesktopPositionerTelemetry@@P6AXXZ@Z @ 0x1803CFBFC (-get@-$static_lazy@VDesktopPositionerTelemetry@@@details@wil@@QEAAPEAVDesktopPositionerTelemetry.c)
 */

__int64 __fastcall CDesktopPositioner::InitializePositionHelper(
        IUnknown *punkSite,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        unsigned int *a5)
{
  PositionerPropertySetHelpers *v8; // rcx
  int DetailsForActivation; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  bool v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  int RestorePosition; // eax
  struct IApplicationViewPosition *v16; // rcx
  int v17; // eax
  struct IApplicationViewOperation *v18; // rbx
  int v19; // eax
  int v20; // esi
  int v21; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  wil::TraceLoggingProvider *v27; // rax
  unsigned __int64 v28; // r8
  struct IApplicationView *v29; // rdx
  __int64 v30; // rcx
  DesktopPositionerTelemetry *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // eax
  struct IApplicationViewOperation *v35; // rbx
  int v36; // eax
  int v37; // eax
  int v38; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+20h] [rbp-E0h]
  int v40; // [rsp+20h] [rbp-E0h]
  struct IViewGroup *v41; // [rsp+50h] [rbp-B0h] BYREF
  struct IApplicationViewPosition *v42; // [rsp+58h] [rbp-A8h] BYREF
  struct IApplicationViewOperation *v43; // [rsp+60h] [rbp-A0h] BYREF
  struct IImmersiveMonitor *WindowForView; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown v45; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v46; // [rsp+78h] [rbp-88h] BYREF
  struct IApplicationView *v47; // [rsp+80h] [rbp-80h] BYREF
  __int64 v48; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT v49; // [rsp+90h] [rbp-70h] BYREF
  struct IApplicationViewPosition **v50; // [rsp+A0h] [rbp-60h]
  struct tagRECT v51; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v52; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v53; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v47 = (struct IApplicationView *)a3;
  if ( a5 )
    *a5 = 0;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v48);
  LODWORD(v45.lpVtbl) = 0;
  *(_QWORD *)&v49.left = 0LL;
  *(_QWORD *)&v49.right = 0LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v8,
                           v47,
                           &v45,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v49);
  v11 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    v23 = 3029LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v38);
    goto LABEL_63;
  }
  v12 = 1;
  if ( !punkSite[39].lpVtbl )
    goto LABEL_5;
  v52 = 0LL;
  if ( !(unsigned __int8)CDesktopPositioner::IsBackgroundActivation(v10, a2, LODWORD(v45.lpVtbl)) )
  {
    DetailsForActivation = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IApplicationView *, struct IApplicationView *, __int128 *))punkSite[39].lpVtbl->QueryInterface
                            + 10))(
                             punkSite[39].lpVtbl,
                             a2,
                             v47,
                             &v52);
    v11 = DetailsForActivation;
    if ( DetailsForActivation < 0 )
    {
      v23 = 3054LL;
      goto LABEL_28;
    }
  }
  v41 = 0LL;
  v46 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
  v24 = CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup(
          (CDesktopPositioner *)punkSite,
          a2,
          (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)&v52,
          &v41,
          (struct IApplicationView **)&v46);
  v11 = v24;
  if ( v24 >= 0 )
  {
    v12 = (unsigned int)SHIsSameObject((struct IUnknown *)a2, v46) != 0;
    if ( v48 )
    {
      v26 = v52 - *(_QWORD *)&GUID_NULL.Data1;
      if ( (_QWORD)v52 == *(_QWORD *)&GUID_NULL.Data1 )
        v26 = *((_QWORD *)&v52 + 1) - *(_QWORD *)GUID_NULL.Data4;
      if ( v26 && v12 && a5 )
      {
        *a5 |= 0x10000u;
        v27 = (wil::TraceLoggingProvider *)wil::details::static_lazy<DesktopPositionerTelemetry>::get(
                                             v25,
                                             _lambda_b3732bec005be52ff747cf12f24aa814_::_lambda_invoker_cdecl_);
        if ( wil::TraceLoggingProvider::IsEnabled_(v27, 0, v28) )
        {
          wil::details::static_lazy<DesktopPositionerTelemetry>::get(
            v30,
            _lambda_b3732bec005be52ff747cf12f24aa814_::_lambda_invoker_cdecl_);
          DesktopPositionerTelemetry::InitializePositionCloak_(v31, a2);
        }
        WindowForView = (struct IImmersiveMonitor *)ApplicationViewHelpers::GetWindowForView(
                                                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                                                      v29);
        if ( WindowForView )
        {
          unique_animation_clock::unique_animation_clock(
            (unique_animation_clock *)&v51,
            &AnimationClock_TabSwitch,
            0x3E8u,
            0);
          std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
            (__int64 *)&punkSite[44],
            (__int64)&v51,
            (unsigned __int64 *)&WindowForView);
          *(_BYTE *)(*(_QWORD *)&v51.left + 42LL) = 1;
          if ( (int)DwmpBeginTransitionRequest(93LL) >= 0 )
          {
            DwmpTransitionWindow(WindowForView, 3LL);
            std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
              (__int64 *)&punkSite[44],
              (__int64)&v51,
              (unsigned __int64 *)&WindowForView);
            *(_BYTE *)(*(_QWORD *)&v51.left + 41LL) = 1;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
LABEL_5:
    v13 = v48;
    if ( v48 )
      goto LABEL_23;
    v43 = 0LL;
    v14 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
            (CDesktopPositioner *)punkSite,
            a2,
            &v43);
    v11 = v14;
    if ( v14 < 0 )
    {
      v32 = 3092LL;
    }
    else
    {
      if ( v12 )
      {
        v42 = 0LL;
        RestorePosition = CDesktopPositioner::_GetRestorePosition(
                            punkSite,
                            a2,
                            (struct PositionerPropertySetHelpers::ViewSizePreferences *)&v49,
                            &v42);
        v11 = RestorePosition;
        if ( RestorePosition < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC1C,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)RestorePosition,
            v38);
LABEL_48:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
LABEL_62:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
          goto LABEL_63;
        }
        v16 = v42;
        if ( v47 && v42 )
        {
          v41 = 0LL;
          if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, struct IViewGroup **))v42)(
                 v42,
                 &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
                 &v41) >= 0 )
          {
            *(_QWORD *)&v49.left = &v41;
            *(_QWORD *)&v49.right = &v47;
            v50 = &v42;
            lambda_28e991405a2b461f36746747a980db10_::operator()(&v49);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
          v16 = v42;
        }
        v53 = 0LL;
        if ( v16 )
        {
          v17 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v16 + 24LL))(
                  v16,
                  &v53);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xC49,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v17,
              v38);
        }
        WindowForView = 0LL;
        v49 = v53;
        if ( (int)CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
                    (CDesktopPositioner *)punkSite,
                    a4,
                    &v49,
                    &v51,
                    (enum TRY_POSITION_VIEW_FLAGS *)&v45,
                    &WindowForView) < 0 )
        {
          v18 = v43;
          v19 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v43 + 80LL))(
                  v43,
                  v42);
          v20 = v19;
          if ( v19 >= 0 )
          {
            v21 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                    a2,
                    v18);
            v11 = v21;
            if ( v21 >= 0 )
            {
LABEL_20:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&WindowForView);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
              goto LABEL_21;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xC62,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v21,
              v39);
            goto LABEL_47;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC61,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v19,
            v39);
          goto LABEL_54;
        }
        v41 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
        v34 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>((void **)&v41);
        v11 = v34;
        if ( v34 < 0 )
        {
          v33 = 3154LL;
        }
        else
        {
          v49 = v51;
          v35 = v43;
          v40 = (int)v43;
          v36 = CDesktopPositioner::PositionViewWithOptions(punkSite, a2, &v49, LODWORD(v45.lpVtbl));
          if ( v36 >= 0 )
            goto LABEL_57;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC57,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v36,
            v40);
          v37 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v35 + 80LL))(
                  v35,
                  v42);
          v20 = v37;
          if ( v37 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xC5A,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v37,
              v39);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
LABEL_54:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&WindowForView);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
            v11 = v20;
            goto LABEL_63;
          }
          v34 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                  a2,
                  v35);
          v11 = v34;
          if ( v34 >= 0 )
          {
LABEL_57:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
            goto LABEL_20;
          }
          v33 = 3163LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v33,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v34,
          v39);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
LABEL_47:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&WindowForView);
        goto LABEL_48;
      }
      v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
              a2,
              v43);
      v11 = v14;
      if ( v14 >= 0 )
      {
LABEL_21:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
        v13 = v48;
        if ( !v48 )
          return 0LL;
LABEL_23:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        return 0LL;
      }
      v32 = 3175LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v14,
      v38);
    goto LABEL_62;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBF3,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v24,
    v38);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
LABEL_63:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
  return v11;
}
