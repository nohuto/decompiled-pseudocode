/*
 * XREFs of ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0004174
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00082F0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0018888 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005AA58 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00082F0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C0015684 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformDisposingDisposeChildrenLocked(
        FxObject *this,
        unsigned __int8 OldIrql,
        unsigned __int8 CanDefer)
{
  FxObject::SetObjectStateLocked(this, FxObjectStateDisposingDisposeChildren);
  if ( !FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, OldIrql, CanDefer) )
    return 0;
  if ( (this->m_ObjectFlags & 0x104) == 0x104 )
    FxObject::DeletedAndDisposedWorkerLocked(this, OldIrql, 0);
  else
    FxObject::SetObjectStateLocked(this, FxObjectStateDisposed);
  return 1;
}
