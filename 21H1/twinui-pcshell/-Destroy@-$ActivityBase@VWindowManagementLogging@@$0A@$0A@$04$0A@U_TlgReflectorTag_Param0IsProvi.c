/*
 * XREFs of ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180024A94
 * Callers:
 *     ?FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180018200 (-FrameworkViewTypeChanged@ShellPositionerManager@@UEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TY.c)
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180024F60 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180031EA0 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresen.c)
 *     ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007AD50 (-OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18007DEA0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ??1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ @ 0x180080908 (--1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180383F80 (--1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18039C7A0 (--1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1803B28CC (--1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ @ 0x1803B2924 (--1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ @ 0x1803B2950 (--1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1803B297C (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x1803D322C (--1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803D4860 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803D52B0 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180024EE8 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180081540 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18012D1F0 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v2; // rdi
  _DWORD *v3; // rcx
  char v4; // si
  int v5; // eax
  __int64 v6; // rdx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 38;
  if ( !a1[38] )
    goto LABEL_2;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  if ( *v2 && *(_DWORD *)*v2 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v2);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
LABEL_2:
    v3 = (_DWORD *)a1[6];
    if ( *v3 == 1 )
    {
      v5 = v3[21];
      LODWORD(SRWLock) = v5;
      v6 = 2147942974LL;
      if ( v5 < 0 )
        v6 = (unsigned int)v5;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v3,
        v6,
        &SRWLock);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
