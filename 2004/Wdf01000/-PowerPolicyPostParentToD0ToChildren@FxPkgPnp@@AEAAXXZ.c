/*
 * XREFs of ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C0010AE8
 * Callers:
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0010A28 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C0010B58 (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010CEC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010DB0 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0016EE8 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyPostParentToD0ToChildren(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v3; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax
  __int64 v5; // r8

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    v3 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v3);
      v3 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      FxChildList::PostParentToD0((FxChildList *)NextEntryLocked->m_TransactionedObject);
    }
    FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v5 + 40), this->m_Globals);
  }
}
