/*
 * XREFs of ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C00013D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C000350C (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000AA34 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C006AA9C (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C006CEBC (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C006E530 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0082B70 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::Release(FxRequest *this, FxObjectDebugLeakDetection *Tag, int Line, const char *File)
{
  unsigned __int8 m_Reserved; // bp
  unsigned __int8 m_IrpAllocation; // di
  unsigned __int8 m_CanComplete; // r15
  unsigned __int32 v8; // ebx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v11; // cx
  _LIST_ENTRY *v12; // r8
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v14; // r12
  _QWORD *v15; // r13
  void (__fastcall *v16)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *); // rax
  void (__fastcall *v17)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *); // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // r12
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rbp
  _IRP *m_Irp; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v25; // dl
  _LIST_ENTRY *v26; // [rsp+30h] [rbp-38h]
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  m_Reserved = this->m_Reserved;
  m_IrpAllocation = this->m_IrpAllocation;
  m_CanComplete = this->m_CanComplete;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Blink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v8 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v8 )
  {
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
      goto LABEL_3;
    }
    v11 = this->m_ObjectFlags;
    if ( (v11 & 0x80u) != 0 )
    {
      v12 = this[-1].m_OwnerListEntry2.Blink;
      v26 = v12;
      if ( !v12 )
      {
LABEL_14:
        m_ObjectSize = this->m_ObjectSize;
        if ( m_ObjectSize && (v11 & 8) != 0 )
        {
          v14 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (FxRequest_vtbl **)((char *)&this->__vftable + this->m_ObjectSize);
          if ( v15 )
          {
            do
            {
              v16 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *))v15[2];
              if ( v16 )
              {
                v16(v14, Tag, v12, File);
                v15[2] = 0LL;
              }
              v17 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *))v15[3];
              if ( v17 )
              {
                v17(v14, Tag, v12, File);
                v15[3] = 0LL;
              }
              v15 = (_QWORD *)v15[1];
            }
            while ( v15 );
            m_ObjectSize = this->m_ObjectSize;
            v12 = v26;
          }
          LOBYTE(Tag) = 1;
          if ( m_ObjectSize )
          {
            v18 = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize);
            if ( v18 )
            {
              do
              {
                v19 = (_QWORD *)v18[1];
                if ( !(_BYTE)Tag )
                  FxPoolFree(v18);
                LOBYTE(Tag) = 0;
                v18 = v19;
              }
              while ( v19 );
              v12 = v26;
            }
          }
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        {
          if ( BYTE4(this[-1].m_ForwardProgressQueue) )
          {
            _InterlockedDecrement(&this->m_Globals->FxVerifyLeakDetection->ObjectCnt);
            if ( this->m_Type == 4098
              && _InterlockedExchangeAdd(&this->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
            {
              Tag = this->m_Globals->FxVerifyLeakDetection;
              _InterlockedExchangeAdd(&Tag->LimitScaled, -Tag->Limit);
            }
          }
        }
        if ( v12 )
        {
          this[-1].m_OwnerListEntry2.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v12, (unsigned int)Tag);
        }
        ((void (__fastcall *)(FxRequest *, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *))this->SelfDestruct)(
          this,
          Tag,
          v12,
          File);
        goto LABEL_3;
      }
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v12);
      v11 = this->m_ObjectFlags;
      v12 = v26;
    }
    else
    {
      v12 = 0LL;
    }
    v26 = v12;
    goto LABEL_14;
  }
LABEL_3:
  if ( m_Reserved && v8 == 1 && this->m_Completed )
  {
    FxIoQueue::ReturnReservedRequest(this->m_ForwardProgressQueue, this);
  }
  else if ( m_IrpAllocation )
  {
    if ( m_CanComplete )
    {
      if ( v8 == 1 )
      {
        if ( this->m_Completed )
        {
          m_CompletionState = this->m_CompletionState;
          m_IoQueue = this->m_IoQueue;
          m_Irp = this->m_Irp.m_Irp;
          m_PriorityBoost = this->m_PriorityBoost;
          this->m_CompletionState = 0;
          this->m_IoQueue = 0LL;
          this->m_Irp.m_Irp = 0LL;
          IofCompleteRequest(m_Irp, m_PriorityBoost);
          if ( m_CompletionState == 1 )
          {
            PreviousIrql = 0;
            FxNonPagedObject::Lock(m_IoQueue, &PreviousIrql);
            --m_IoQueue->m_TwoPhaseCompletions;
            v25 = PreviousIrql;
            --m_IoQueue->m_DriverIoCount;
            FxIoQueue::DispatchInternalEvents(m_IoQueue, v25);
          }
        }
      }
    }
  }
  return v8;
}
