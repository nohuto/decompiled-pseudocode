/*
 * XREFs of ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C00720DC
 * Callers:
 *     FxCmResourceListInsertDescriptor @ 0x1C006F30C (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C006F410 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C006F57C (FxIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxResourceCollection::AddAt(FxResourceCollection *this, unsigned int Index, _LIST_ENTRY *Object)
{
  bool v3; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v8; // esi
  void *v9; // rax
  FX_POOL_TRACKER *v10; // rdx
  unsigned __int8 v11; // r8
  FxResourceCollection *p_Blink; // rax
  int v13; // r9d
  _LIST_ENTRY *p_m_ListHead; // r8
  _LIST_ENTRY *Blink; // rax
  const void *_a1; // rax
  __m128i v18; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  v3 = (this->m_AccessFlags & 1) == 0;
  irql = 0;
  if ( v3 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 3221225506LL;
  }
  else
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Object);
    m_Globals = this->m_Globals;
    v8 = 0;
    v18.m128i_i64[0] = 0LL;
    v18.m128i_i64[1] = 64LL;
    if ( m_Globals->FxPoolTrackingOn )
      v9 = retaddr;
    else
      v9 = 0LL;
    v10 = (FX_POOL_TRACKER *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v18, 0x18uLL, m_Globals->Tag, v9);
    if ( v10 )
    {
      if ( Index == -1 || Index == this->m_Count )
      {
        p_m_ListHead = &this->m_ListHead;
LABEL_16:
        Blink = p_m_ListHead->Blink;
        Blink->Flink = (_LIST_ENTRY *)&v10->Link.Blink;
        v10->Link.Blink = p_m_ListHead;
        v10->Pool = (FX_POOL *)Blink;
        p_m_ListHead->Blink = (_LIST_ENTRY *)&v10->Link.Blink;
        v10->Link.Flink = Object;
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
        v13 = 0;
        while ( p_Blink != (FxResourceCollection *)&this->FxCollectionInternal )
        {
          p_m_ListHead = (_LIST_ENTRY *)&p_Blink->m_Type;
          if ( v13 == Index )
          {
            if ( p_Blink != (FxResourceCollection *)-8LL )
              goto LABEL_16;
            break;
          }
          p_Blink = (FxResourceCollection *)&p_m_ListHead->Flink[-1].Blink;
          ++v13;
        }
        FxPoolFree(v10);
        v8 = -1073741684;
      }
    }
    else
    {
      v8 = -1073741670;
    }
    FxNonPagedObject::Unlock(this, irql, v11);
    if ( v8 < 0 )
    {
      FxObject::ClearEvtCallbacks((FxObject *)Object);
      ((void (__fastcall *)(_LIST_ENTRY *))Object->Flink[3].Flink)(Object);
    }
    return (unsigned int)v8;
  }
}
