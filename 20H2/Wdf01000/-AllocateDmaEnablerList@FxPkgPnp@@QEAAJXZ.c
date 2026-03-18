/*
 * XREFs of ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1C00843F0
 * Callers:
 *     ?AllocateDmaEnablerList@FxDevice@@UEAAJXZ @ 0x1C004F930 (-AllocateDmaEnablerList@FxDevice@@UEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall FxPkgPnp::AllocateDmaEnablerList(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v6; // r8
  FX_POOL **v7; // rax
  FxSpinLockTransactionedList *v8; // rcx
  _QWORD *v9; // rax
  void *Caller; // [rsp+38h] [rbp+0h]
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  irql = 0;
  if ( this->m_DmaEnablerList )
    return 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_DmaEnablerList )
  {
    v7 = FxPoolAllocator(
           this->m_Globals,
           &this->m_Globals->FxPoolFrameworks,
           ExDefaultNonPagedPoolType,
           0x48uLL,
           this->m_Globals->Tag,
           Caller);
    v8 = (FxSpinLockTransactionedList *)v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 12) = 0;
      *((_WORD *)v7 + 26) = 0;
      *((_BYTE *)v7 + 54) = 0;
      v7[5] = 0LL;
      v9 = v7 + 1;
      v8->m_ListLock.m_Lock = 0LL;
      v8->m_ListLock.m_DbgFlagIsInitialized = 1;
      v9[1] = v9;
      *v9 = v9;
      v8->m_TransactionHead.Blink = &v8->m_TransactionHead;
      v8->m_TransactionHead.Flink = &v8->m_TransactionHead;
      v8->__vftable = (FxSpinLockTransactionedList_vtbl *)FxSpinLockTransactionedList::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
      this->m_DmaEnablerList = v8;
    else
      v3 = -1073741670;
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  return v3;
}
