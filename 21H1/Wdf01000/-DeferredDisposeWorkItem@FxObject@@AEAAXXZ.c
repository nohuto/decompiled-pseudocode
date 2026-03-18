/*
 * XREFs of ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005B338
 * Callers:
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C005512C (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0004174 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0005034 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00082F0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C0015684 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 */

void __fastcall FxObject::DeferredDisposeWorkItem(FxObject *this)
{
  KIRQL v2; // al
  KIRQL v3; // di
  bool v4; // si
  FxObjectDebugLeakDetection *v5; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v3 = v2;
  if ( this->m_ObjectState == 5 )
  {
    FxObject::PerformDisposingDisposeChildrenLocked(this, v2, 0);
  }
  else if ( this->m_ObjectState == 6 )
  {
    FxObject::SetObjectStateLocked(this, 9u);
    FxObject::DisposeChildrenWorker(this, 6u, v3, 0);
    FxObject::DeletedAndDisposedWorkerLocked(this, v3, 0);
  }
  else
  {
    v4 = this->m_ObjectState == 11;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
    if ( v4 )
      FxObject::ProcessDestroy(this, v5);
  }
}
