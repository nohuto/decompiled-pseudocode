/*
 * XREFs of ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0004DF4
 * Callers:
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C001B734 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockInternal::ReleaseLock(FxWaitLockInternal *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  this->m_OwningThread = 0LL;
  KeSetEvent(&this->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
