/*
 * XREFs of ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00082F0
 * Callers:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0004174 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005AA58 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0004174 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0018888 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C00599E0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005AB1C (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::DisposeChildrenWorker(
        FxObject *this,
        unsigned __int32 NewDeferedState,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  FxObject *v7; // rbx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v10; // rsi
  unsigned __int16 m_ObjectFlags; // cx
  char *v12; // rdi
  void (__fastcall *v13)(unsigned __int64); // rax
  KIRQL v15; // r12
  unsigned __int8 v16; // al
  KIRQL v17; // di

  v7 = this;
  if ( (this->m_ObjectFlags & 0x20) != 0 && OldIrql )
  {
LABEL_17:
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(this, (FxObjectState)NewDeferedState);
    else
      FxObject::SetObjectStateLocked(this, NewDeferedState);
    KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, OldIrql);
    return 0;
  }
  p_m_ChildListHead = &this->m_ChildListHead;
  Flink = this->m_ChildListHead.Flink;
  if ( Flink != p_m_ChildListHead )
  {
    while ( !OldIrql || ((__int64)Flink[-3].Flink & 0x10) == 0 )
    {
      Flink = Flink->Flink;
      if ( Flink == p_m_ChildListHead )
        goto LABEL_3;
    }
    this = v7;
    goto LABEL_17;
  }
LABEL_3:
  KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, OldIrql);
  v10 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_4:
    if ( (v7->m_ObjectFlags & 0x800) == 0 || v7->Dispose(v7) )
    {
      m_ObjectFlags = v7->m_ObjectFlags;
      if ( (m_ObjectFlags & 0x400) != 0 && (m_ObjectFlags & 8) != 0 )
      {
        if ( v7->m_ObjectSize )
        {
          v12 = (char *)v7 + v7->m_ObjectSize;
          if ( v12 )
          {
            do
            {
              v13 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)v12 + 2);
              if ( v13 )
              {
                v13((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
                *((_QWORD *)v12 + 2) = 0LL;
              }
              v12 = (char *)*((_QWORD *)v12 + 1);
            }
            while ( v12 );
            m_ObjectFlags = v7->m_ObjectFlags;
          }
        }
        v7->m_ObjectFlags = m_ObjectFlags & 0xFBFF;
      }
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v10[-1]);
      if ( WORD1(v10[-3].Flink) != 1 )
      {
        switch ( WORD1(v10[-3].Flink) )
        {
          case 5:
            goto LABEL_33;
          case 7:
            v16 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v10[-5].Blink, v15, 0);
            goto LABEL_34;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v10[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)&v10[-1], v15);
            goto LABEL_30;
        }
      }
      FxObject::SetObjectStateLocked((FxObject *)&v10[-5].Blink, 3u);
LABEL_33:
      v16 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v10[-5].Blink, v15, 0);
LABEL_34:
      if ( !v16 )
        break;
LABEL_30:
      v10 = v10->Flink;
      if ( v10 == p_m_ChildListHead )
        goto LABEL_4;
    }
    v17 = KeAcquireSpinLockRaiseToDpc(&v7->m_SpinLock.m_Lock);
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(v7, (FxObjectState)NewDeferedState);
    else
      FxObject::SetObjectStateLocked(v7, NewDeferedState);
    KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, v17);
    return 0;
  }
}
