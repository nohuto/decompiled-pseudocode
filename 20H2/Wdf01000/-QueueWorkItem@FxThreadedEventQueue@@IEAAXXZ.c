/*
 * XREFs of ?QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ @ 0x1C0012804
 * Callers:
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C000E828 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011B20 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxThreadedEventQueue::QueueWorkItem(FxThreadedEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // r8

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp->m_HasPowerThread )
    m_PkgPnp->m_PowerThreadInterface.PowerThreadEnqueue(
      m_PkgPnp->m_PowerThreadInterface.Interface.Context,
      &this->m_EventWorkQueueItem);
  else
    IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxThreadedEventQueue::_WorkItemCallback, DelayedWorkQueue, this);
}
