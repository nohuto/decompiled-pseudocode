/*
 * XREFs of ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C002BBB4
 * Callers:
 *     ?RemoveIoTarget@FxDevice@@UEAAXPEAVFxIoTarget@@@Z @ 0x1C002B630 (-RemoveIoTarget@FxDevice@@UEAAXPEAVFxIoTarget@@@Z.c)
 *     ?RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C0088918 (-RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0089D04 (-RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 * Callees:
 *     ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C002BC38 (-RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTransactionedList::Remove(
        FxTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTransactionedEntry *Entry)
{
  unsigned __int8 v6; // bl
  __int64 v7; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  v6 = FxTransactionedList::RemoveLocked(this, Entry);
  LOBYTE(v7) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v7);
  if ( v6 )
  {
    if ( this->m_DeleteOnRemove )
      Entry->m_TransactionedObject->DeleteObject(Entry->m_TransactionedObject);
  }
}
