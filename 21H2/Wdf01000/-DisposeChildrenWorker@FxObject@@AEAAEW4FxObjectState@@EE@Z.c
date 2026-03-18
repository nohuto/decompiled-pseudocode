/*
 * XREFs of ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008CE0
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C000A9BC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C006E300 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C000A9BC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000AA34 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C000AB80 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C006E3C4 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::DisposeChildrenWorker(
        FxObject *this,
        FxObjectState NewDeferedState,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  FxObject *v7; // rbx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *i; // rsi
  unsigned __int16 m_ObjectFlags; // ax
  __int64 m_ObjectSize; // rcx
  char *v14; // rdi
  void (__fastcall *v15)(unsigned __int64); // rax
  _LIST_ENTRY **p_Blink; // r13
  KIRQL v17; // al
  unsigned int _a3; // r10d
  unsigned __int8 v19; // r12
  unsigned __int8 v20; // al
  const void *_a2; // rdx
  const void *v22; // rcx
  KIRQL v23; // di

  v7 = this;
  if ( (this->m_ObjectFlags & 0x20) != 0 && OldIrql )
  {
LABEL_35:
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(this, NewDeferedState);
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
    goto LABEL_35;
  }
LABEL_3:
  KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, OldIrql);
  for ( i = p_m_ChildListHead->Flink; i != p_m_ChildListHead; i = i->Flink )
  {
    p_Blink = &i[-5].Blink;
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&i[-1]);
    _a3 = WORD1(i[-3].Flink);
    v19 = v17;
    if ( _a3 == 1 )
    {
      FxObject::SetObjectStateLocked((FxObject *)&i[-5].Blink, FxObjectStateDisposingEarly);
LABEL_22:
      v20 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&i[-5].Blink, v19, 0);
LABEL_23:
      if ( !v20 )
      {
        v23 = KeAcquireSpinLockRaiseToDpc(&v7->m_SpinLock.m_Lock);
        if ( CanDefer )
          FxObject::QueueDeferredDisposeLocked(v7, NewDeferedState);
        else
          FxObject::SetObjectStateLocked(v7, NewDeferedState);
        KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, v23);
        return 0;
      }
    }
    else
    {
      switch ( WORD1(i[-3].Flink) )
      {
        case 2:
        case 3:
        case 8:
        case 9:
        case 0xA:
          if ( _bittest16((const signed __int16 *)p_Blink + 12, 9u) )
          {
            _a2 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*((_WORD *)p_Blink + 5) )
              _a2 = 0LL;
            WPP_IFR_SF_qqLL(
              (_FX_DRIVER_GLOBALS *)p_Blink[2],
              4u,
              0x14u,
              0xBu,
              WPP_FxObject_hpp_Traceguids,
              &i[-5].Blink,
              _a2,
              _a3,
              4u);
          }
          break;
        case 5:
          goto LABEL_22;
        case 7:
          v20 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&i[-5].Blink, v17, 0);
          goto LABEL_23;
        default:
          if ( _bittest16((const signed __int16 *)p_Blink + 12, 9u) )
          {
            v22 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*((_WORD *)p_Blink + 5) )
              v22 = 0LL;
            WPP_IFR_SF_qqLL(
              (_FX_DRIVER_GLOBALS *)p_Blink[2],
              4u,
              0x14u,
              0xBu,
              WPP_FxObject_hpp_Traceguids,
              &i[-5].Blink,
              v22,
              _a3,
              4u);
          }
          break;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)p_Blink + 7, v19);
    }
  }
  if ( !_bittest16((const signed __int16 *)&v7->24, 0xBu) || v7->Dispose(v7) )
  {
    m_ObjectFlags = v7->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x400) != 0 && (m_ObjectFlags & 8) != 0 )
    {
      m_ObjectSize = v7->m_ObjectSize;
      if ( (_WORD)m_ObjectSize )
      {
        v14 = (char *)v7 + m_ObjectSize;
        if ( (FxObject *)((char *)v7 + m_ObjectSize) )
        {
          do
          {
            v15 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)v14 + 2);
            if ( v15 )
            {
              v15((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
              *((_QWORD *)v14 + 2) = 0LL;
            }
            v14 = (char *)*((_QWORD *)v14 + 1);
          }
          while ( v14 );
          m_ObjectFlags = v7->m_ObjectFlags;
        }
      }
      v7->m_ObjectFlags = m_ObjectFlags & 0xFBFF;
    }
  }
  return 1;
}
