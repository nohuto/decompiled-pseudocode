/*
 * XREFs of ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800236F0
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18001653C (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180016774 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180016998 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180017640 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180022F80 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1800286A0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180039E78 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ??1ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180042F64 (--1ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x180042F90 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30___::_scalar_deleting_destructor_ @ 0x1800703C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c7d6eb40baac9abfbe063305bce0ea30___--_scala.c)
 *     ??1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ @ 0x18014719C (--1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ @ 0x180147888 (--1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ @ 0x18014794C (--1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1OnShellHookMessage@IamTraceLogging@@QEAA@XZ @ 0x180147978 (--1OnShellHookMessage@IamTraceLogging@@QEAA@XZ.c)
 *     ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18014C900 (-HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x180156074 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ??1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18016790C (--1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1801679BC (--1PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1801679E8 (--1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1SplitView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180167A14 (--1SplitView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180167A40 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180167A6C (--1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x180168D10 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x18016C600 (-SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1801710C8 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180171288 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ??1DeleteWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180179FEC (--1DeleteWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18017A018 (--1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1Initialization@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18017A044 (--1Initialization@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1ProcessNewWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18017A098 (--1ProcessNewWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18017A0C4 (--1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18017A0F0 (--1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18017A11C (--1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18017B5B4 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180181020 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x18018182C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180188E0C (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??1ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAA@XZ @ 0x180188EA8 (--1ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180188F2C (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180043568 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180151630 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  RTL_SRWLOCK *v1; // rsi
  char v3; // bp
  _DWORD *v4; // rcx
  RTL_SRWLOCK *v5; // rsi
  volatile signed __int32 *v6; // rcx
  char *v7; // rdi
  __int64 v8; // rdx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)a1[38];
  v3 = 1;
  if ( !v1 )
    goto LABEL_2;
  v5 = v1 + 31;
  AcquireSRWLockExclusive(v5);
  v6 = (volatile signed __int32 *)a1[38];
  if ( !v6 || *v6 != 1 )
  {
    v3 = 0;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
      {
        v7 = (char *)a1[38];
        if ( v7 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v7 + 8);
          operator delete(v7, (const struct std::nothrow_t *)0x100);
        }
      }
      a1[38] = 0LL;
    }
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v3 )
  {
LABEL_2:
    v4 = (_DWORD *)a1[6];
    if ( *v4 == 1 )
    {
      v9 = v4[21];
      v8 = 2147942974LL;
      if ( v9 < 0 )
        v8 = (unsigned int)v9;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v8,
        &v9);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
