/*
 * XREFs of ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1C0013AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ @ 0x1C0003628 (-DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

unsigned __int8 __fastcall FxSystemWorkItem::Dispose(FxSystemWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = irql;
  this->m_RunningDown = 1;
  FxNonPagedObject::Unlock(this, v4, v5);
  FxSystemWorkItem::DecrementWorkItemQueued(this);
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_RemoveEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  return 1;
}
