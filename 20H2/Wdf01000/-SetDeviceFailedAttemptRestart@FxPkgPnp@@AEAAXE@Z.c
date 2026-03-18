/*
 * XREFs of ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1C0081F88
 * Callers:
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C0081F38 (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 *     ?_WorkItemSetDeviceFailedAttemptRestart@FxPkgPnp@@CAXPEAX@Z @ 0x1C0082BF0 (-_WorkItemSetDeviceFailedAttemptRestart@FxPkgPnp@@CAXPEAX@Z.c)
 *     ?_WorkItemSetDeviceFailedRestartAlways@FxPkgPnp@@CAXPEAX@Z @ 0x1C0082C10 (-_WorkItemSetDeviceFailedRestartAlways@FxPkgPnp@@CAXPEAX@Z.c)
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0004224 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateDeviceState@FxPkgPnp@@AEAAXXZ @ 0x1C0080614 (-InvalidateDeviceState@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C008A7F0 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 */

void __fastcall FxPkgPnp::SetDeviceFailedAttemptRestart(FxPkgPnp *this, __int64 ReenumerateAlways, __int64 a3)
{
  FxSystemWorkItem *m_SetDeviceFailedAttemptRestartWorkItem; // rcx
  void (__fastcall *v5)(void *); // rdx

  LOBYTE(a3) = ReenumerateAlways;
  if ( KeGetCurrentIrql() )
  {
    m_SetDeviceFailedAttemptRestartWorkItem = this->m_SetDeviceFailedAttemptRestartWorkItem;
    if ( m_SetDeviceFailedAttemptRestartWorkItem )
    {
      v5 = FxPkgPnp::_WorkItemSetDeviceFailedRestartAlways;
      if ( !(_BYTE)a3 )
        v5 = FxPkgPnp::_WorkItemSetDeviceFailedAttemptRestart;
      FxSystemWorkItem::EnqueueWorker(m_SetDeviceFailedAttemptRestartWorkItem, v5, this, 1u);
      return;
    }
$InvalidateDevice:
    FxPkgPnp::InvalidateDeviceState(this);
    return;
  }
  if ( !(_BYTE)ReenumerateAlways && !FxPkgPnp::PnpCheckAndIncrementRestartCount(this)
    || ((int (__fastcall *)(FxPkgPnp *, __int64, __int64))this->AskParentToRemoveAndReenumerate)(
         this,
         ReenumerateAlways,
         a3) < 0 )
  {
    goto $InvalidateDevice;
  }
}
