/*
 * XREFs of ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C00291B8
 * Callers:
 *     ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C0020408 (-CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C00290A4 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1C008CE60 (-CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0019A6C (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 */

__int64 __fastcall FxThreadedEventQueue::Init(
        FxThreadedEventQueue *this,
        FxPkgPnp *Pnp,
        void (__fastcall *WorkerRoutine)(FxPkgPnp *, FxPostProcessInfo *, void *),
        void *WorkerContext)
{
  int v4; // eax
  unsigned int v5; // ecx

  this->m_PkgPnp = Pnp;
  this->m_EventWorker = WorkerRoutine;
  this->m_EventWorkerContext = WorkerContext;
  v4 = MxWorkItem::Allocate(&this->m_WorkItem, Pnp->m_DeviceBase->m_DeviceObject.m_DeviceObject, WorkerRoutine);
  v5 = 0;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v5;
}
