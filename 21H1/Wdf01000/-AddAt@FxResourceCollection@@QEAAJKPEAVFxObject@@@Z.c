/*
 * XREFs of ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0061014
 * Callers:
 *     FxCmResourceListInsertDescriptor @ 0x1C005C190 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C005C27C (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C005C3D0 (FxIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018BF0 (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxResourceCollection::AddAt(FxResourceCollection *this, unsigned int Index, _LIST_ENTRY *Object)
{
  bool v3; // zf
  const void *_a1; // rax
  unsigned int _a2; // edx
  int v10; // esi
  FxCollectionInternal *v11; // rcx
  unsigned __int8 v12; // r8
  FX_POOL_TRACKER *Entry; // r9
  FxResourceCollection *p_Blink; // rcx
  int v15; // eax
  _LIST_ENTRY *p_m_ListHead; // rdx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  v3 = (this->m_AccessFlags & 1) == 0;
  irql = 0;
  if ( v3 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceCollection_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 3221225506LL;
  }
  else
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Object);
    v10 = 0;
    Entry = (FX_POOL_TRACKER *)FxCollectionInternal::AllocateEntry(v11, this->m_Globals);
    if ( Entry )
    {
      if ( Index == -1 || Index == this->m_Count )
      {
        p_m_ListHead = &this->m_ListHead;
LABEL_14:
        Blink = p_m_ListHead->Blink;
        Blink->Flink = (_LIST_ENTRY *)&Entry->Link.Blink;
        Entry->Link.Blink = p_m_ListHead;
        Entry->Pool = (FX_POOL *)Blink;
        p_m_ListHead->Blink = (_LIST_ENTRY *)&Entry->Link.Blink;
        Entry->Link.Flink = Object;
        FxObject::AddRef(
          (FxObject *)Object,
          &this->FxCollectionInternal,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
        ++this->m_Count;
        this->m_Changed = 1;
      }
      else
      {
        p_Blink = (FxResourceCollection *)&this->m_ListHead.Flink[-1].Blink;
        v15 = 0;
        while ( p_Blink != (FxResourceCollection *)&this->FxCollectionInternal )
        {
          p_m_ListHead = (_LIST_ENTRY *)&p_Blink->m_Type;
          if ( v15 == Index )
          {
            if ( p_Blink != (FxResourceCollection *)-8LL )
              goto LABEL_14;
            break;
          }
          p_Blink = (FxResourceCollection *)&p_m_ListHead->Flink[-1].Blink;
          ++v15;
        }
        FxPoolFree(Entry);
        v10 = -1073741684;
      }
    }
    else
    {
      v10 = -1073741670;
    }
    FxNonPagedObject::Unlock(this, irql, v12);
    if ( v10 < 0 )
    {
      FxObject::ClearEvtCallbacks((FxObject *)Object);
      ((void (__fastcall *)(_LIST_ENTRY *))Object->Flink[3].Flink)(Object);
    }
    return (unsigned int)v10;
  }
}
