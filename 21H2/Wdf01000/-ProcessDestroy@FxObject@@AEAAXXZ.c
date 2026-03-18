/*
 * XREFs of ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000ACD0
 * Callers:
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C000ABF0 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000AC50 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C006E300 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C006CEBC (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C006E530 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 */

void __fastcall FxObject::ProcessDestroy(FxObject *this, FxObjectDebugLeakDetection *FxVerifyLeakDetection)
{
  unsigned __int16 m_ObjectFlags; // ax
  FxTagTracker *m_Lock; // rdi
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *v6; // rsi
  void (__fastcall *v7)(unsigned __int64); // rax
  void (__fastcall *v8)(unsigned __int64); // rax
  char v9; // al
  FX_POOL_TRACKER *v10; // rcx
  FX_POOL_TRACKER *Blink; // rsi

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x80u) != 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
    {
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_SpinLock.m_Lock);
      m_ObjectFlags = this->m_ObjectFlags;
    }
  }
  else
  {
    m_Lock = 0LL;
  }
  m_ObjectSize = this->m_ObjectSize;
  if ( m_ObjectSize && (m_ObjectFlags & 8) != 0 )
  {
    v6 = (FxObject_vtbl **)((char *)&this->__vftable + this->m_ObjectSize);
    if ( v6 )
    {
      do
      {
        v7 = (void (__fastcall *)(unsigned __int64))v6[2];
        if ( v7 )
        {
          v7((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          v6[2] = 0LL;
        }
        v8 = (void (__fastcall *)(unsigned __int64))v6[3];
        if ( v8 )
        {
          v8((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          v6[3] = 0LL;
        }
        v6 = (_QWORD *)v6[1];
      }
      while ( v6 );
      m_ObjectSize = this->m_ObjectSize;
    }
    v9 = 1;
    if ( m_ObjectSize )
    {
      v10 = (FX_POOL_TRACKER *)((char *)this + m_ObjectSize);
      if ( v10 )
      {
        do
        {
          Blink = (FX_POOL_TRACKER *)v10->Link.Blink;
          if ( !v9 )
            FxPoolFree(v10);
          v9 = 0;
          v10 = Blink;
        }
        while ( Blink );
      }
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    if ( BYTE4(this[-1].m_ChildEntry.Blink) )
    {
      _InterlockedDecrement(&this->m_Globals->FxVerifyLeakDetection->ObjectCnt);
      if ( this->m_Type == 4098
        && _InterlockedExchangeAdd(&this->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
      {
        FxVerifyLeakDetection = this->m_Globals->FxVerifyLeakDetection;
        _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, -FxVerifyLeakDetection->Limit);
      }
    }
  }
  if ( m_Lock )
  {
    this[-1].m_SpinLock.m_Lock = 0LL;
    FxTagTracker::`scalar deleting destructor'(m_Lock, (unsigned int)FxVerifyLeakDetection);
  }
  this->SelfDestruct(this);
}
