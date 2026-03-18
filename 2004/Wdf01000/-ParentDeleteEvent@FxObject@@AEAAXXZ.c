/*
 * XREFs of ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C00040D8
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00083F0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 * Callees:
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00083F0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005A2C0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

void __fastcall FxObject::ParentDeleteEvent(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // al
  int m_ObjectState; // r8d
  KIRQL v5; // si
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  v5 = v3;
  this->m_ParentObject = 0LL;
  v6 = m_ObjectState - 2;
  if ( !v6 )
    goto LABEL_2;
  v7 = v6 - 2;
  if ( v7 )
  {
    v8 = v7 - 4;
    if ( !v8 )
    {
LABEL_2:
      FxObject::SetObjectStateLocked(this, FxObjectStateDeletedAndDisposed);
      KeReleaseSpinLock(p_m_Lock, v5);
      FxObject::DestroyChildren(this);
      this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      return;
    }
    if ( v8 == 1 )
      FxObject::TraceDroppedEvent(this, FxObjectDroppedEventParentDeleteEvent);
  }
  KeReleaseSpinLock(p_m_Lock, v5);
}
