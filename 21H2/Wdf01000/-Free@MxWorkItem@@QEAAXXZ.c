/*
 * XREFs of ?Free@MxWorkItem@@QEAAXXZ @ 0x1C001AD70
 * Callers:
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C00188A0 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C0018970 (--1FxWorkItem@@UEAA@XZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C83C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x1C001FCC0 (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0020990 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C008CE30 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MxWorkItem::Free(MxWorkItem *this)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx

  m_WorkItem = this->m_WorkItem;
  if ( m_WorkItem )
  {
    IoFreeWorkItem(m_WorkItem);
    this->m_WorkItem = 0LL;
  }
}
