/*
 * XREFs of ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C006ABC8
 * Callers:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C00301DC (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0035760 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0066EB0 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDriver@@UEAAEXZ @ 0x1C0069E20 (-Dispose@FxDriver@@UEAAEXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C00847C0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C006AB4C (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 */

void __fastcall FxDisposeList::WaitForEmpty(FxDisposeList *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  char v5; // di
  FxSystemWorkItem *m_SystemWorkItem; // rbx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v5 = 1;
  if ( this->m_WorkItemThread == KeGetCurrentThread() )
  {
    FxDisposeList::DrainListLocked(this, &irql);
    v5 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v4);
  if ( v5 )
  {
    m_SystemWorkItem = this->m_SystemWorkItem;
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&m_SystemWorkItem->m_WorkItemCompleted, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
}
