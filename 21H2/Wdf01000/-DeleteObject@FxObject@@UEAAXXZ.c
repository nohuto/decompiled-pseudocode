/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008430
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004764 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C0033F90 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C0069E00 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C008D030 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008F224 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008EB8 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C000A9BC (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000AA34 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C000AB04 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C000AB80 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C000DC54 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C006D224 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C006E3C4 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  KIRQL v2; // r15
  unsigned int _a3; // r8d
  unsigned __int16 m_ObjectFlags; // cx
  FxObject *v5; // rdi
  KIRQL v6; // al
  unsigned int m_ObjectState; // edx
  KIRQL v8; // r12
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rdx
  FxObject *v12; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v14; // rsi
  unsigned __int16 v15; // ax
  _LIST_ENTRY **p_Blink; // r15
  KIRQL v17; // al
  unsigned int v18; // r10d
  KIRQL v19; // r12
  unsigned __int8 v20; // al
  FxObject *m_ParentObject; // rcx
  const void *_a2; // rdx
  const void *v23; // rcx
  const void *v24; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v26; // rdx
  KIRQL v27; // dl
  const void *v28; // rdx
  const void *v29; // rcx
  KIRQL v30; // di
  _FX_DRIVER_GLOBALS *v31; // rcx
  const void *v32; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  _a3 = this->m_ObjectState;
  m_ObjectFlags = this->m_ObjectFlags | 4;
  this->m_ObjectFlags = m_ObjectFlags;
  if ( _a3 != 1 )
  {
    if ( _a3 == 2 )
    {
      m_ParentObject = this->m_ParentObject;
      if ( !m_ParentObject )
      {
LABEL_33:
        FxObject::DeletedAndDisposedWorkerLocked(this, v2, 1u);
        return;
      }
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
      {
        this->m_ParentObject = 0LL;
        goto LABEL_33;
      }
      FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
    }
    else if ( _a3 == 4 || _a3 == 7 || _a3 > 8 && _a3 <= 0xA )
    {
      if ( (m_ObjectFlags & 0x200) != 0 )
      {
        v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v23 = 0LL;
        WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, v23, _a3, 3u);
      }
    }
    else if ( (m_ObjectFlags & 0x200) != 0 )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, _a2, _a3, 3u);
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
    return;
  }
  v5 = this->m_ParentObject;
  if ( v5 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&v5->m_SpinLock.m_Lock);
    m_ObjectState = v5->m_ObjectState;
    v8 = v6;
    if ( m_ObjectState != 1 )
    {
      if ( _bittest16((const signed __int16 *)&v5->24, 9u) )
      {
        v24 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v5->m_ObjectSize )
          v24 = 0LL;
        WPP_IFR_SF_qqLL(v5->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, v5, v24, m_ObjectState, 2u);
      }
      KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v8);
      FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
      goto LABEL_64;
    }
    Flink = this->m_ChildEntry.Flink;
    p_m_ChildEntry = &this->m_ChildEntry;
    if ( Flink->Blink != &this->m_ChildEntry || (Blink = this->m_ChildEntry.Blink, Blink->Flink != p_m_ChildEntry) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    this->m_ChildEntry.Blink = &this->m_ChildEntry;
    p_m_ChildEntry->Flink = p_m_ChildEntry;
    KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v8);
    m_ObjectFlags = this->m_ObjectFlags;
    this->m_ParentObject = 0LL;
  }
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v2 )
    goto LABEL_63;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v26 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v26, this->m_ObjectState, 9u);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
    {
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 9;
      m_ObjectFlags = this->m_ObjectFlags;
    }
  }
  this->m_ObjectState = 9;
  if ( (m_ObjectFlags & 0x20) != 0 )
  {
    if ( v2 )
    {
LABEL_63:
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
LABEL_64:
      v27 = v2;
      goto LABEL_65;
    }
  }
  v12 = (FxObject *)this->m_ChildListHead.Flink;
  p_m_ChildListHead = &this->m_ChildListHead;
  if ( v12 != (FxObject *)&this->m_ChildListHead )
  {
    while ( !v2 || (v12[-1].m_SpinLock.m_Lock & 0x10) == 0 )
    {
      v12 = (FxObject *)v12->__vftable;
      if ( v12 == (FxObject *)p_m_ChildListHead )
        goto LABEL_13;
    }
    goto LABEL_63;
  }
LABEL_13:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
  v14 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_14:
    if ( (!_bittest16((const signed __int16 *)&this->24, 0xBu) || this->Dispose(this))
      && _bittest16((const signed __int16 *)&this->24, 0xAu) )
    {
      FxObject::CallCleanupCallbacks(this);
    }
    v15 = this->m_ObjectFlags;
    if ( (v15 & 0x200) != 0 )
    {
      v31 = this->m_Globals;
      if ( v31->FxVerboseOn )
      {
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v32 = 0LL;
        WPP_IFR_SF_qqLL(v31, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v32, this->m_ObjectState, 0xAu);
        v15 = this->m_ObjectFlags;
      }
      if ( (v15 & 0x80u) != 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 10;
    }
    this->m_ObjectState = 10;
    FxObject::DestroyChildren(this);
    this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
    return;
  }
  while ( 1 )
  {
    p_Blink = &v14[-5].Blink;
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v14[-1]);
    v18 = WORD1(v14[-3].Flink);
    v19 = v17;
    if ( v18 != 1 )
    {
      switch ( WORD1(v14[-3].Flink) )
      {
        case 2:
        case 3:
        case 8:
        case 9:
        case 0xA:
          if ( _bittest16((const signed __int16 *)p_Blink + 12, 9u) )
          {
            v28 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*((_WORD *)p_Blink + 5) )
              v28 = 0LL;
            WPP_IFR_SF_qqLL(
              (_FX_DRIVER_GLOBALS *)p_Blink[2],
              4u,
              0x14u,
              0xBu,
              WPP_FxObject_hpp_Traceguids,
              &v14[-5].Blink,
              v28,
              v18,
              4u);
          }
          break;
        case 5:
          goto LABEL_27;
        case 7:
          v20 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v14[-5].Blink, v17, 0);
          goto LABEL_28;
        default:
          if ( _bittest16((const signed __int16 *)p_Blink + 12, 9u) )
          {
            v29 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*((_WORD *)p_Blink + 5) )
              v29 = 0LL;
            WPP_IFR_SF_qqLL(
              (_FX_DRIVER_GLOBALS *)p_Blink[2],
              4u,
              0x14u,
              0xBu,
              WPP_FxObject_hpp_Traceguids,
              &v14[-5].Blink,
              v29,
              v18,
              4u);
          }
          break;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)p_Blink + 7, v19);
      goto LABEL_29;
    }
    FxObject::SetObjectStateLocked((FxObject *)&v14[-5].Blink, FxObjectStateDisposingEarly);
LABEL_27:
    v20 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v14[-5].Blink, v19, 0);
LABEL_28:
    if ( !v20 )
      break;
LABEL_29:
    v14 = v14->Flink;
    if ( v14 == p_m_ChildListHead )
      goto LABEL_14;
  }
  v30 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
  v27 = v30;
LABEL_65:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v27);
}
