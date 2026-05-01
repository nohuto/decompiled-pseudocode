/*
 * XREFs of ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180085BA4
 * Callers:
 *     ?StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x180024AF0 (-StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x1800537B0 (-StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ @ 0x1800538C0 (-StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ @ 0x180085B10 (-StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ @ 0x180384640 (-StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ @ 0x18039E5B0 (-StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x1803B4DF0 (-StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1803DBDFC (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 *     ?StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ @ 0x1803DC490 (-StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ @ 0x1803DC7D0 (-StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ @ 0x1803DCE50 (-StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ @ 0x1803DD190 (-StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ @ 0x1803DD4D0 (-StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180024EE8 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  **(_DWORD **)(a1 + 48) = 2;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
