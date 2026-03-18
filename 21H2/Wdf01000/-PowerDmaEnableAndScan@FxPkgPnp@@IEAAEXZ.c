/*
 * XREFs of ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C0017578
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000E830 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000F450 (-PowerWakingDmaEnableNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0033150 (-PowerD0StartingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0010C88 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C00143D4 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018170 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018234 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerDmaEnableAndScan(FxPkgPnp *this)
{
  char v2; // di
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v5; // rdi
  FxTransactionedEntry *v6; // rax
  __int64 v7; // r8
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v9; // rdx
  void (__fastcall *v10)(unsigned __int64); // rax
  FxTransactionedEntry *v12; // rsi
  FxTransactionedEntry *NextEntryLocked; // rax
  FxSpinLockTransactionedList *v14; // r8

  v2 = 1;
  m_DmaEnablerList = this->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v12 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(this->m_DmaEnablerList, v12);
      v12 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( (int)FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject) < 0 )
      {
        v14 = this->m_DmaEnablerList;
        v2 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(v14, this->m_Globals);
    if ( !v2 )
      return 0;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v5);
      v5 = v6;
      if ( !v6 )
        break;
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v6->m_TransactionedObject);
      v10 = *(void (__fastcall **)(unsigned __int64))(v9 + 192);
      if ( v10 )
        v10(ObjectHandleUnchecked);
    }
    FxTransactionedList::UnlockFromEnum((FxTransactionedList *)(v7 + 40), this->m_Globals);
  }
  return 1;
}
