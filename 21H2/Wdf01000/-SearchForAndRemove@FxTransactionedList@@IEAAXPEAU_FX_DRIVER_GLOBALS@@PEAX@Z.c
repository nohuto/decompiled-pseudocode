/*
 * XREFs of ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007236C
 * Callers:
 *     imp_WdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1C005B0C0 (imp_WdfPdoRemoveEjectionRelationsPhysicalDevice.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C00639C0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     imp_WdfDeviceRemoveDependentUsageDeviceObject @ 0x1C0063B70 (imp_WdfDeviceRemoveDependentUsageDeviceObject.c)
 *     imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice @ 0x1C0063BE0 (imp_WdfDeviceRemoveRemovalRelationsPhysicalDevice.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C00834B0 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0010C88 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z @ 0x1C002BC38 (-RemoveLocked@FxTransactionedList@@IEAAEPEAUFxTransactionedEntry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTransactionedList::SearchForAndRemove(
        FxTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *EntryData)
{
  FxTransactionedList_vtbl *v3; // rax
  unsigned __int8 v5; // bp
  _LIST_ENTRY *i; // rbx
  FxTransactionedEntry *v9; // rdi
  __int64 v10; // r8
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v12; // r8
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  v3 = this->__vftable;
  v5 = 0;
  irql = 0;
  v3->AcquireLock(this, FxDriverGlobals, &irql);
  for ( i = this->m_TransactionHead.Flink; i != &this->m_TransactionHead; i = i->Flink )
  {
    v9 = (FxTransactionedEntry *)&i[-1];
    if ( this->Compare(this, (FxTransactionedEntry *)&i[-1], EntryData) )
    {
      if ( v9->m_Transaction == FxTransactionActionAdd )
      {
        Flink = i->Flink;
        if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
          __fastfail(3u);
        Blink->Flink = Flink;
        v5 = 1;
        Flink->Blink = Blink;
        i->Blink = i;
        i->Flink = i;
      }
      goto $Done_54;
    }
  }
  v9 = 0LL;
  while ( 1 )
  {
    NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this, v9);
    v9 = NextEntryLocked;
    if ( !NextEntryLocked )
      break;
    if ( this->Compare(this, NextEntryLocked, EntryData) )
    {
      v5 = FxTransactionedList::RemoveLocked(this, v9, v12);
      break;
    }
  }
$Done_54:
  LOBYTE(v10) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v10);
  if ( v5 )
  {
    if ( this->m_DeleteOnRemove )
      v9->m_TransactionedObject->DeleteObject(v9->m_TransactionedObject);
  }
}
