/*
 * XREFs of ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x1C0023958
 * Callers:
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C0020390 (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00234F4 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     ??0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z @ 0x1C008E240 (--0FxWakeInterruptMachine@@QEAA@PEAVFxInterrupt@@@Z.c)
 * Callees:
 *     ??0FxEventQueue@@QEAA@E@Z @ 0x1C0023998 (--0FxEventQueue@@QEAA@E@Z.c)
 */

void __fastcall FxThreadedEventQueue::FxThreadedEventQueue(FxThreadedEventQueue *this, unsigned __int8 QueueDepth)
{
  FxEventQueue::FxEventQueue(this, QueueDepth);
  this->m_WorkItem.m_WorkItem = 0LL;
  this->m_EventWorkQueueItem.List.Flink = 0LL;
  this->m_EventWorkQueueItem.WorkerRoutine = (void (__fastcall *)(void *))FxThreadedEventQueue::_WorkerThreadRoutine;
  this->m_EventWorkQueueItem.Parameter = this;
}
