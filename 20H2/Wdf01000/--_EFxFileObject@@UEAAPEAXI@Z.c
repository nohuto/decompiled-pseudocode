/*
 * XREFs of ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0005BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C00079A0 (--1FxObject@@UEAA@XZ.c)
 *     memset @ 0x1C001CA80 (memset.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C0030EA0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C004E4A4 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C005445C (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 */

FxFileObject *__fastcall FxFileObject::`vector deleting destructor'(FxFileObject *this, char a2)
{
  _LIST_ENTRY *p_m_Lock; // rax
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *v6; // rcx
  FxVerifierLock *v8; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
  this->FxNonPagedObject::FxObject::__vftable = (FxFileObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v8 = (FxVerifierLock *)this[-1].IFxHasCallbacks::__vftable;
    if ( v8 )
    {
      FxVerifierLock::`scalar deleting destructor'(v8, a2);
      this[-1].IFxHasCallbacks::__vftable = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      p_m_Lock = (_LIST_ENTRY *)&this[-1].m_NPLock.m_Lock;
    else
      p_m_Lock = (_LIST_ENTRY *)this;
    if ( !p_m_Lock )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)p_m_Lock & 0xFFF) != 0 )
    {
      Flink = p_m_Lock[-1].Flink;
      if ( LOBYTE(p_m_Lock[-1].Blink[16].Blink) )
      {
        if ( ((__int64)Flink[2].Blink & 0xFFFFFEFF) == 1 || ((__int64)Flink[2].Blink & 0xFFFFFEFF) == 5 )
          FxPoolRemovePagedAllocateTracker((FX_POOL_TRACKER *)Flink);
        else
          FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)Flink);
        memset(Flink, 0, (size_t)&Flink[2].Flink[4]);
      }
      v6 = Flink;
    }
    else
    {
      v6 = p_m_Lock;
    }
    ExFreePoolWithTag(v6, 0);
  }
  return this;
}
