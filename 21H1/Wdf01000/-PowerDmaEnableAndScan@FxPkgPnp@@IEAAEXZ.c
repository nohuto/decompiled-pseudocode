/*
 * XREFs of ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C001C014
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0018C30 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001A260 (-PowerWakingDmaEnableNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007D7F0 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C0004CF0 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010CEC (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0010DB0 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0016EE8 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(FxPkgPnp *this)
{
  char v2; // si
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  FxSpinLockTransactionedList *v4; // r8
  FxTransactionedEntry *i; // rdx
  int v6; // eax
  FxTransactionedEntry *NextEntryLocked; // rax
  FxTransactionedEntry *v8; // rdi
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *j; // rdx
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v13; // rdx
  void (__fastcall *v14)(unsigned __int64); // rax
  FxTransactionedEntry *v15; // rax
  __int64 v16; // r8
  FxTransactionedEntry *v17; // rdi

  v2 = 1;
  m_DmaEnablerList = this->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v4 = this->m_DmaEnablerList;
    for ( i = 0LL; ; i = v8 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(v4, i);
      v8 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      v6 = FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject);
      v4 = this->m_DmaEnablerList;
      if ( v6 < 0 )
      {
        v2 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(v4, this->m_Globals);
    if ( !v2 )
      return 0;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    for ( j = 0LL; ; j = v17 )
    {
      v15 = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, j);
      v17 = v15;
      if ( !v15 )
        break;
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v15->m_TransactionedObject);
      v14 = *(void (__fastcall **)(unsigned __int64))(v13 + 192);
      if ( v14 )
        v14(ObjectHandleUnchecked);
    }
    FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v16 + 40), this->m_Globals);
  }
  return 1;
}
