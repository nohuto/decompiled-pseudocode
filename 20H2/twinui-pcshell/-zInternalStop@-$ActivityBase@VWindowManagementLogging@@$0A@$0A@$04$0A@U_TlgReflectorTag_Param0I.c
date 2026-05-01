/*
 * XREFs of ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180084E74
 * Callers:
 *     ?StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x18001D480 (-StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x1800487B0 (-StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ @ 0x1800488C0 (-StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ @ 0x180084DE0 (-StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1803A4FD0 (-StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1803BED50 (-StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x1803D5590 (-StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1803FCC98 (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 *     ?StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ @ 0x1803FD330 (-StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ @ 0x1803FD680 (-StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ @ 0x1803FDD20 (-StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ @ 0x1803FE070 (-StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ @ 0x1803FE3C0 (-StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001D878 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
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
