/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180311300
 * Callers:
 *     wil::details::ScopeExitFn__lambda_ef13471666d232d63902e21b6b326ce1___::_ScopeExitFn__lambda_ef13471666d232d63902e21b6b326ce1___ @ 0x18030FFF8 (wil--details--ScopeExitFn__lambda_ef13471666d232d63902e21b6b326ce1___--_ScopeExitFn__lambda_ef13.c)
 *     _lambda_796fecced70d9b3590d5bb3fa9fcc2e4_::operator() @ 0x1803103DC (_lambda_796fecced70d9b3590d5bb3fa9fcc2e4_--operator().c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1803124C0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?AltEscPressed@CAltTabViewHost@@UEAAXXZ @ 0x18038CAE0 (-AltEscPressed@CAltTabViewHost@@UEAAXXZ.c)
 *     ?DisplaySettingsChange@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18038CB70 (-DisplaySettingsChange@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_.c)
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x18038D0E0 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A959C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??$As@UIMultitaskingViewDismissCallback@@@?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDismissCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802F73B4 (--$As@UIMultitaskingViewDismissCallback@@@-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QE.c)
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802FCE34 (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180307274 (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180307500 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ??$QueueTask@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_7d4fab6c161d4dc93915730d1208882c_@@@Z @ 0x18030F344 (--$QueueTask@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+48h] [rbp-B8h]
  _QWORD v15[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  v13[1] = (__int64)v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v14 = v3;
  *(_BYTE *)(a1 + 112) = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"DismissMultitaskingView");
  v15[0] = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  MultitaskingViewTelemetry::DismissMultitaskingView::StartActivity((__int64)v15, *(_DWORD *)(a1 + 72));
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 )
    {
      *(_QWORD *)(a1 + 104) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v10 = 0LL;
  v6 = Microsoft::WRL::ComPtr<IMultitaskingViewManager>::As<IMultitaskingViewDismissCallback>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 80),
         &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v11 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v12 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v13[0] = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    Windows::Internal::ComTaskPool::QueueTask<_lambda_7d4fab6c161d4dc93915730d1208882c_>(v8, &v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(
      *(_QWORD *)(a1 + 88),
      *(unsigned int *)(a1 + 72));
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop((__int64)v15, *(_DWORD *)(a1 + 72));
    v7 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\MultitaskingView\\inc\\baseviewhost.h",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView((MultitaskingViewTelemetry::DismissMultitaskingView *)v15);
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v7;
}
